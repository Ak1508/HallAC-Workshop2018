//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Jun 24 14:31:14 2018 by ROOT version 6.12/06
// from TTree T/Hall A Analyzer Output DST
// found on file: /home/wrkshp/Workshop2017/rootfiles/g2p_3132.root
//////////////////////////////////////////////////////////

#ifndef g2p_selector_h
#define g2p_selector_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include "THaEvent.h"

class TH1;

class g2p_selector : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   // TTreeReaderValue<Int_t> Ndata_L_tr_beta = {fReader, "Ndata.L.tr.beta"};
   // TTreeReaderArray<Double_t> L_tr_beta = {fReader, "L.tr.beta"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_chi2 = {fReader, "Ndata.L.tr.chi2"};
   // TTreeReaderArray<Double_t> L_tr_chi2 = {fReader, "L.tr.chi2"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_d_ph = {fReader, "Ndata.L.tr.d_ph"};
   TTreeReaderArray<Double_t> L_tr_d_ph = {fReader, "L.tr.d_ph"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_d_th = {fReader, "Ndata.L.tr.d_th"};
   TTreeReaderArray<Double_t> L_tr_d_th = {fReader, "L.tr.d_th"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_d_x = {fReader, "Ndata.L.tr.d_x"};
   // TTreeReaderArray<Double_t> L_tr_d_x = {fReader, "L.tr.d_x"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_d_y = {fReader, "Ndata.L.tr.d_y"};
   TTreeReaderArray<Double_t> L_tr_d_y = {fReader, "L.tr.d_y"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_dbeta = {fReader, "Ndata.L.tr.dbeta"};
   // TTreeReaderArray<Double_t> L_tr_dbeta = {fReader, "L.tr.dbeta"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_dtime = {fReader, "Ndata.L.tr.dtime"};
   // TTreeReaderArray<Double_t> L_tr_dtime = {fReader, "L.tr.dtime"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_flag = {fReader, "Ndata.L.tr.flag"};
   // TTreeReaderArray<Double_t> L_tr_flag = {fReader, "L.tr.flag"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_ndof = {fReader, "Ndata.L.tr.ndof"};
   TTreeReaderArray<Double_t> L_tr_ndof = {fReader, "L.tr.ndof"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_p = {fReader, "Ndata.L.tr.p"};
   TTreeReaderArray<Double_t> L_tr_p = {fReader, "L.tr.p"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_pathl = {fReader, "Ndata.L.tr.pathl"};
   // TTreeReaderArray<Double_t> L_tr_pathl = {fReader, "L.tr.pathl"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_ph = {fReader, "Ndata.L.tr.ph"};
   // TTreeReaderArray<Double_t> L_tr_ph = {fReader, "L.tr.ph"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_px = {fReader, "Ndata.L.tr.px"};
   // TTreeReaderArray<Double_t> L_tr_px = {fReader, "L.tr.px"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_py = {fReader, "Ndata.L.tr.py"};
   // TTreeReaderArray<Double_t> L_tr_py = {fReader, "L.tr.py"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_pz = {fReader, "Ndata.L.tr.pz"};
   // TTreeReaderArray<Double_t> L_tr_pz = {fReader, "L.tr.pz"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_r_ph = {fReader, "Ndata.L.tr.r_ph"};
   // TTreeReaderArray<Double_t> L_tr_r_ph = {fReader, "L.tr.r_ph"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_r_th = {fReader, "Ndata.L.tr.r_th"};
   // TTreeReaderArray<Double_t> L_tr_r_th = {fReader, "L.tr.r_th"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_r_x = {fReader, "Ndata.L.tr.r_x"};
   // TTreeReaderArray<Double_t> L_tr_r_x = {fReader, "L.tr.r_x"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_r_y = {fReader, "Ndata.L.tr.r_y"};
   // TTreeReaderArray<Double_t> L_tr_r_y = {fReader, "L.tr.r_y"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_tg_dp = {fReader, "Ndata.L.tr.tg_dp"};
   // TTreeReaderArray<Double_t> L_tr_tg_dp = {fReader, "L.tr.tg_dp"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_tg_ph = {fReader, "Ndata.L.tr.tg_ph"};
   // TTreeReaderArray<Double_t> L_tr_tg_ph = {fReader, "L.tr.tg_ph"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_tg_th = {fReader, "Ndata.L.tr.tg_th"};
   // TTreeReaderArray<Double_t> L_tr_tg_th = {fReader, "L.tr.tg_th"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_tg_y = {fReader, "Ndata.L.tr.tg_y"};
   // TTreeReaderArray<Double_t> L_tr_tg_y = {fReader, "L.tr.tg_y"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_th = {fReader, "Ndata.L.tr.th"};
   // TTreeReaderArray<Double_t> L_tr_th = {fReader, "L.tr.th"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_time = {fReader, "Ndata.L.tr.time"};
   // TTreeReaderArray<Double_t> L_tr_time = {fReader, "L.tr.time"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_vx = {fReader, "Ndata.L.tr.vx"};
   // TTreeReaderArray<Double_t> L_tr_vx = {fReader, "L.tr.vx"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_vy = {fReader, "Ndata.L.tr.vy"};
   // TTreeReaderArray<Double_t> L_tr_vy = {fReader, "L.tr.vy"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_vz = {fReader, "Ndata.L.tr.vz"};
   // TTreeReaderArray<Double_t> L_tr_vz = {fReader, "L.tr.vz"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_x = {fReader, "Ndata.L.tr.x"};
   // TTreeReaderArray<Double_t> L_tr_x = {fReader, "L.tr.x"};
   // TTreeReaderValue<Int_t> Ndata_L_tr_y = {fReader, "Ndata.L.tr.y"};
   // TTreeReaderArray<Double_t> L_tr_y = {fReader, "L.tr.y"};
   // TTreeReaderValue<Double_t> L_cer_asum_c = {fReader, "L.cer.asum_c"};
   // TTreeReaderValue<Double_t> L_ekine_Q2 = {fReader, "L.ekine.Q2"};
   // TTreeReaderValue<Double_t> L_ekine_W2 = {fReader, "L.ekine.W2"};
   // TTreeReaderValue<Double_t> L_ekine_angle = {fReader, "L.ekine.angle"};
   // TTreeReaderValue<Double_t> L_ekine_epsilon = {fReader, "L.ekine.epsilon"};
   // TTreeReaderValue<Double_t> L_ekine_nu = {fReader, "L.ekine.nu"};
   // TTreeReaderValue<Double_t> L_ekine_omega = {fReader, "L.ekine.omega"};
   // TTreeReaderValue<Double_t> L_ekine_ph_q = {fReader, "L.ekine.ph_q"};
   // TTreeReaderValue<Double_t> L_ekine_q3m = {fReader, "L.ekine.q3m"};
   // TTreeReaderValue<Double_t> L_ekine_q_x = {fReader, "L.ekine.q_x"};
   // TTreeReaderValue<Double_t> L_ekine_q_y = {fReader, "L.ekine.q_y"};
   // TTreeReaderValue<Double_t> L_ekine_q_z = {fReader, "L.ekine.q_z"};
   // TTreeReaderValue<Double_t> L_ekine_th_q = {fReader, "L.ekine.th_q"};
   // TTreeReaderValue<Double_t> L_ekine_x_bj = {fReader, "L.ekine.x_bj"};
   // TTreeReaderValue<Double_t> L_gold_beta = {fReader, "L.gold.beta"};
   // TTreeReaderValue<Double_t> L_gold_dp = {fReader, "L.gold.dp"};
   // TTreeReaderValue<Double_t> L_gold_index = {fReader, "L.gold.index"};
   // TTreeReaderValue<Double_t> L_gold_ok = {fReader, "L.gold.ok"};
   // TTreeReaderValue<Double_t> L_gold_p = {fReader, "L.gold.p"};
   // TTreeReaderValue<Double_t> L_gold_ph = {fReader, "L.gold.ph"};
   // TTreeReaderValue<Double_t> L_gold_px = {fReader, "L.gold.px"};
   // TTreeReaderValue<Double_t> L_gold_py = {fReader, "L.gold.py"};
   // TTreeReaderValue<Double_t> L_gold_pz = {fReader, "L.gold.pz"};
   // TTreeReaderValue<Double_t> L_gold_th = {fReader, "L.gold.th"};
   // TTreeReaderValue<Double_t> L_gold_x = {fReader, "L.gold.x"};
   // TTreeReaderValue<Double_t> L_gold_y = {fReader, "L.gold.y"};
   TTreeReaderValue<Double_t> L_tr_n = {fReader, "L.tr.n"};
   // TTreeReaderValue<Double_t> L_vx_z = {fReader, "L.vx.z"};
   // TTreeReaderValue<ULong64_t> fEvtHdr_fEvtTime = {fReader, "fEvtHdr.fEvtTime"};
   TTreeReaderValue<unsigned int> fEvtHdr_fEvtNum = {fReader, "fEvtHdr.fEvtNum"};
   // TTreeReaderValue<Int_t> fEvtHdr_fEvtType = {fReader, "fEvtHdr.fEvtType"};
   TTreeReaderValue<Int_t> fEvtHdr_fEvtLen = {fReader, "fEvtHdr.fEvtLen"};
   // TTreeReaderValue<Int_t> fEvtHdr_fHelicity = {fReader, "fEvtHdr.fHelicity"};
   // TTreeReaderValue<Int_t> fEvtHdr_fTargetPol = {fReader, "fEvtHdr.fTargetPol"};
   // TTreeReaderValue<Int_t> fEvtHdr_fRun = {fReader, "fEvtHdr.fRun"};


  g2p_selector(TTree * /*tree*/ =0) { }
   virtual ~g2p_selector() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   TH1* fLtrp = nullptr;
   UInt_t fNbad = 0;

   ClassDef(g2p_selector,0);

};

#endif

#ifdef g2p_selector_cxx
void g2p_selector::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t g2p_selector::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef g2p_selector_cxx
