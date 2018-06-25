#define g2p_selector_cxx
// The class definition in g2p_selector.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.


// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// root> T->Process("g2p_selector.C")
// root> T->Process("g2p_selector.C","some options")
// root> T->Process("g2p_selector.C+")
//


#include "g2p_selector.h"
#include <TH2.h>
#include <TStyle.h>
#include <TMath.h>
#include <iostream>

using namespace std;

void g2p_selector::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
}

void g2p_selector::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

   fLtrp = new TH1F("hLtrp", "Momentum of good tracks (GeV)", 500, 2.24, 2.26);
   GetOutputList()->Add(fLtrp);
}

Bool_t g2p_selector::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // When processing keyed objects with PROOF, the object is already loaded
   // and is available via the fObject pointer.
   //
   // This function should contain the \"body\" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.

   fReader.SetLocalEntry(entry);

   UInt_t ntrk = static_cast<UInt_t>(*L_tr_n);
   // cout << "Processing tree entry = " << entry
   // 	<< ", evnum = " << *fEvtHdr_fEvtNum
   // 	<< ", ntrk = " << ntrk
   // 	<< endl;

   //   for( auto p : L_tr_p ) {
   for( UInt_t i = 0; i < ntrk; ++i ) {

     Double_t p = L_tr_p.At(i);
     bool good_p = ( p >= fLtrp->GetXaxis()->GetXmin() &&
		     p <  fLtrp->GetXaxis()->GetXmax() );

     Double_t d_y = L_tr_d_y.At(i);
     bool good_y = ( TMath::Abs(d_y) < 0.13 );

     Double_t d_ph = L_tr_d_ph.At(i);
     bool good_ph = ( TMath::Abs(d_ph) < 0.12 );

     Double_t d_th = L_tr_d_th.At(i);
     bool good_th = ( d_th > 0.8 && d_th < 1.5 );

     Int_t ndof = static_cast<Int_t>( L_tr_ndof.At(i) );
     bool good_ndof = ( ndof >= 13 && ndof <= 21 );

     if( good_p && good_y && good_ph && good_th && good_ndof ) {
       fLtrp->Fill(p);
     }
     else if( ntrk == 1 && good_p ) {
       ++fNbad;
     }
   }

   return kTRUE;
}

void g2p_selector::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void g2p_selector::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

  TString rootfilename("g2p_selector_out.root");
  TFile* outf = new TFile(rootfilename,"RECREATE");
  if( outf ) {
    cout << "Saving results to " << rootfilename << endl;
    cout << "Saving histogram " << fLtrp->GetName()
	 << " with " << (Long64_t)fLtrp->GetEntries() << " entries"
	 << endl;

    outf->cd();
    fLtrp->Write();
    outf->Close();
    fLtrp = nullptr;

    cout << "fNbad (single track events with bad fp cuts) = " << fNbad << endl;
  }
  else {
    cout << "Error opening " << rootfilename << endl;
  }
}
