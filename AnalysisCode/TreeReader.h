//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Aug 31 22:09:19 2021 by ROOT version 6.14/09
// from TTree ttree/ttree
// found on file: UDD_bgctau50_smu275_snu225.root
//////////////////////////////////////////////////////////

#ifndef TreeReader_h
#define TreeReader_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"

//header file for home made classes
#include "include/TreeFormat.h"
#include "include/HistoManager.h"

#include "vector"
#include "iostream"


class TreeReader {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Fixed size dimensions of array or collections stored in the TTree if any.


   TreeReader(TTree *tree=0);

   TreeReader(TString inputfilename, TTree *tree, TString theSampleName);

   Int_t           runNumber;
   Int_t           eventNumber;
   Int_t           lumiBlock;
   Float_t         tree_bs_PosX;
   Float_t         tree_bs_PosY;
   Float_t         tree_bs_PosZ;
   vector<string>  *tree_trigger_names;
   vector<bool>    *tree_trigger_bits;
   Int_t           tree_NbrOfZCand;
   vector<bool>    *tree_passesHTFilter;
   vector<float>   *tree_PFMet_et;
   vector<float>   *tree_PFMet_phi;
   vector<float>   *tree_PFMet_sig;

   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_tree_bs_PosX;   //!
   TBranch        *b_tree_bs_PosY;   //!
   TBranch        *b_tree_bs_PosZ;   //!
   TBranch        *b_tree_PFMet_et;   //!
   TBranch        *b_tree_PFMet_phi;   //!
   TBranch        *b_tree_PFMet_sig;   //!
   TBranch        *b_tree_trigger_names;   //!
   TBranch        *b_tree_trigger_bits;   //!
   TBranch        *b_tree_NbrOfZCand;   //!
   TBranch        *b_tree_passesHTFilter;   //!

   virtual ~TreeReader();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

   HistoManager* theHistoManager = new HistoManager;
   void createHistograms();
   void writeHistograms();

   TreeFormat theFormat;
   TString sampleName;
   TFile *outputfile;
   int muon_size;
   int track_size;
   int PV_size;
   int SV_size;
   int PFJet_size;

   TTree * treeS;
   TTree * treeB;

   float mva_track_firstHit_x;
   float mva_track_firstHit_y;
   float mva_track_firstHit_z;
   float mva_track_dxy;
   float mva_track_dxyError;
   float mva_track_dz;
   float mva_track_dzError;
   float mva_track_pt;
   float mva_track_eta;
   float mva_track_nchi2;
   float mva_track_nhits;
   float mva_track_numberOfValidPixelHits;
   float mva_track_numberOfValidStripHits;
   float mva_track_isinjet;
   int mva_track_algo;  
   //added variables by Paul
   int mva_ntrk10 ;
   int mva_ntrk20 ; 
   int mva_ntrk30; 
   int mva_ntrk40 ;
   int mva_ntrk1020;
   int mva_ntrk2030;
   float mva_drSig ;
   float mva_dzSig;
   float mva_ddSig;
   int mva_ValTIBHit;
   int mva_ValTOBHit;
   int mva_ValPixBarHit;
   int mva_nValTECHHit;
   float mva_ntrk40XX;

   void LoadTreeSizes(TreeFormat theFormat);
};

#endif


#ifdef TreeReader_cxx
TreeReader::TreeReader(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("UDD_bgctau50_smu275_snu225.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/opt/sbg/cms/ui2_data1/pvaucell/LLTopAna/CMSSW_10_6_20/MC/2018/UDD_bgctau50_smu275_snu225.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/opt/sbg/cms/ui2_data1/pvaucell/LLTopAna/CMSSW_10_6_20/MC/2018/UDD_bgctau50_smu275_snu225.root:/trackingPerf");
      dir->GetObject("ttree",tree);

   }
   Init(tree);
}


TreeReader::TreeReader(TString inputfilename, TTree *tree, TString theSampleName){
    if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(inputfilename.Data());
      if (!f || !f->IsOpen()) {
        f = new TFile(inputfilename.Data());
      }
      f->GetObject("ttree",tree);
    }
    Init(tree);
    
    theHistoManager = new HistoManager();
    
    sampleName = theSampleName;
}


void TreeReader::createHistograms(){
  
   outputfile = new TFile("output.root", "recreate");
    
   theHistoManager->addHisto("MuonPt",      "noSel", "all", sampleName.Data(), 100, 0, 200);
   theHistoManager->addHisto("FirstHitX_notDisplaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   theHistoManager->addHisto("FirstHitY_notDisplaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   theHistoManager->addHisto("FirstHitZ_notDisplaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   theHistoManager->addHisto("FirstHitDist_notDisplaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);

   theHistoManager->addHisto("FirstHitX_Displaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   theHistoManager->addHisto("FirstHitY_Displaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   theHistoManager->addHisto("FirstHitZ_Displaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   theHistoManager->addHisto("FirstHitDist_Displaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   //Paul : potentially add histograms to check if what is computed in 
   // LLTopAna is the same as here.
}


void TreeReader::writeHistograms(){
  
  outputfile->cd();
  
  std::vector<TH1F*> the1DHisto =  theHistoManager->getHisto1D_list();
  std::vector<TH2F*> the2DHisto =  theHistoManager->getHisto2D_list();
  
  for(unsigned int i=0; i<the1DHisto.size(); i++)  the1DHisto[i]->Write();
  for(unsigned int i=0; i<the2DHisto.size(); i++)  the2DHisto[i]->Write();
}


TreeReader::~TreeReader()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t TreeReader::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t TreeReader::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}


void TreeReader::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
/*    tree_vtx_PosX = 0;
   tree_vtx_PosY = 0;
   tree_vtx_PosZ = 0;
   tree_vtx_NChi2 = 0;
   tree_vtx_PosXError = 0;
   tree_vtx_PosYError = 0;
   tree_vtx_PosZError = 0;
   tree_trigger_names = 0;
   tree_trigger_bits = 0;
   tree_track_pt = 0;
   tree_track_outerPt = 0;
   tree_track_eta = 0;
   tree_track_phi = 0;
   tree_track_charge = 0;
   tree_track_nhits = 0;
   tree_track_NChi2 = 0;
   tree_track_isHighQuality = 0;
   tree_track_isLoose = 0;
   tree_track_isTight = 0;
   tree_track_dxy = 0;
   tree_track_dxyError = 0;
   tree_track_dz = 0;
   tree_track_dzError = 0;
   tree_track_numberOfLostHits = 0;
   tree_track_numberOfValidHits = 0;
   tree_track_originalAlgo = 0;
   tree_track_algo = 0;
   tree_track_stopReason = 0;
   tree_track_isSimMatched = 0;
   tree_track_numberOfValidPixelHits = 0;
   tree_track_numberOfValidStripHits = 0;
   tree_track_numberOfValidStripTIBHits = 0;
   tree_track_numberOfValidStripTIDHits = 0;
   tree_track_numberOfValidStripTOBHits = 0;
   tree_track_numberOfValidStripTECHits = 0;
   tree_track_numberOfValidPixelBarrelHits = 0;
   tree_track_numberOfValidPixelEndcapHits = 0;
   tree_track_hasValidHitInPixelLayer = 0;
   tree_track_trackerLayersWithMeasurement = 0;
   tree_track_pixelLayersWithMeasurement = 0;
   tree_track_stripTECLayersWithMeasurement = 0;
   tree_track_stripTIBLayersWithMeasurement = 0;
   tree_track_stripTIDLayersWithMeasurement = 0;
   tree_track_stripTOBLayersWithMeasurement = 0;
   tree_track_vx = 0;
   tree_track_vy = 0;
   tree_track_vz = 0;
   tree_track_firsthit_X = 0;
   tree_track_firsthit_Y = 0;
   tree_track_firsthit_Z = 0;
   tree_track_firsthit_phi = 0;
   tree_track_simtrack_charge = 0;
   tree_track_simtrack_pt = 0;
   tree_track_simtrack_eta = 0;
   tree_track_simtrack_phi = 0;
   tree_track_simtrack_longLived = 0;
   tree_track_simtrack_pdgId = 0;
   tree_track_simtrack_isFromLLP = 0;
   tree_track_simtrack_numberOfTrackerHits = 0;
   tree_track_simtrack_numberOfTrackerLayers = 0;
   tree_track_simtrack_mass = 0;
   tree_track_simtrack_status = 0;
   tree_track_genVertexPos_X = 0;
   tree_track_genVertexPos_Y = 0;
   tree_track_genVertexPos_Z = 0;
   tree_track_recoVertex_idx = 0;
   tree_track_recoAK4SlimmedJet_idx = 0;
   tree_track_recoAK4PFJet_idx = 0;
   tree_track_reco08Jet_idx = 0;
   tree_track_recoCaloJet_idx = 0;
   tree_track_MVAval_FromDispTop = 0;
   tree_secondaryVtx_X = 0;
   tree_secondaryVtx_Y = 0;
   tree_secondaryVtx_Z = 0;
   tree_secondaryVtx_diff_X = 0;
   tree_secondaryVtx_diff_Y = 0;
   tree_secondaryVtx_diff_Z = 0;
   tree_secondaryVtx_nTracks = 0;
   tree_secondaryVtx_isValid = 0;
   tree_secondaryVtx_NChi2 = 0;
   tree_secondaryVtx_iterative_X = 0;
   tree_secondaryVtx_iterative_Y = 0;
   tree_secondaryVtx_iterative_Z = 0;
   tree_secondaryVtx_iterative_nTracks = 0;
   tree_secondaryVtx_iterative_NChi2 = 0;
   tree_secondaryVtx_iterative_isSelected = 0;
   tree_simtrack_simtrack_charge = 0;
   tree_simtrack_simtrack_pt = 0;
   tree_simtrack_simtrack_eta = 0;
   tree_simtrack_simtrack_phi = 0;
   tree_simtrack_simtrack_longLived = 0;
   tree_simtrack_simtrack_pdgId = 0;
   tree_simtrack_simtrack_mass = 0;
   tree_simtrack_simtrack_status = 0;
   tree_simtrack_genVertexPos_X = 0;
   tree_simtrack_genVertexPos_Y = 0;
   tree_simtrack_genVertexPos_Z = 0;
   tree_simtrack_isRecoMatched = 0;
   tree_simtrack_pca_dxy = 0;
   tree_simtrack_pca_dz = 0;
   tree_simtrack_trkIdx = 0;
   tree_AK4Slimmedjet_E = 0;
   tree_AK4Slimmedjet_pt = 0;
   tree_AK4Slimmedjet_eta = 0;
   tree_AK4Slimmedjet_phi = 0;
   tree_AK4Slimmedjet_idxTrack = 0;
   tree_AK4PFjet_E = 0;
   tree_AK4PFjet_pt = 0;
   tree_AK4PFjet_eta = 0;
   tree_AK4PFjet_phi = 0;
   tree_AK4PFjet_idxTrack = 0;
   tree_CaloJet_E = 0;
   tree_CaloJet_pt = 0;
   tree_CaloJet_eta = 0;
   tree_CaloJet_phi = 0;
   tree_CaloJet_idxTrack = 0;
   tree_jet08_E = 0;
   tree_jet08_pt = 0;
   tree_jet08_eta = 0;
   tree_jet08_phi = 0;
   tree_jet08_idxTrack = 0;
   tree_PFMet_et = 0;
   tree_PFMet_phi = 0;
   tree_PFMet_sig = 0;
   tree_genParticle_pt = 0;
   tree_genParticle_eta = 0;
   tree_genParticle_phi = 0;
   tree_genParticle_charge = 0;
   tree_genParticle_pdgId = 0;
   tree_genParticle_vx = 0;
   tree_genParticle_vy = 0;
   tree_genParticle_vz = 0;
   tree_genParticle_mass = 0;
   tree_genParticle_statusCode = 0;
   tree_genParticle_mother_pdgId = 0;
   tree_genParticle_mother_pt = 0;
   tree_genParticle_mother_eta = 0;
   tree_genParticle_mother_phi = 0;
   tree_genJet_pt = 0;
   tree_genJet_eta = 0;
   tree_genJet_phi = 0;
   tree_genJet_mass = 0;
   tree_genJet_energy = 0;
   tree_ak8GenJet_pt = 0;
   tree_ak8GenJet_eta = 0;
   tree_ak8GenJet_phi = 0;
   tree_ak8GenJet_mass = 0;
   tree_ak8GenJet_energy = 0;
   tree_electron_pt = 0;
   tree_electron_eta = 0;
   tree_electron_phi = 0;
   tree_electron_vx = 0;
   tree_electron_vy = 0;
   tree_electron_vz = 0;
   tree_electron_energy = 0;
   tree_slimmedmuon_pt = 0;
   tree_slimmedmuon_eta = 0;
   tree_slimmedmuon_phi = 0;
   tree_slimmedmuon_vx = 0;
   tree_slimmedmuon_vy = 0;
   tree_slimmedmuon_vz = 0;
   tree_slimmedmuon_energy = 0;
   tree_slimmedmuon_dxy = 0;
   tree_slimmedmuon_dxyError = 0;
   tree_slimmedmuon_dz = 0;
   tree_slimmedmuon_dzError = 0;
   tree_slimmedmuon_charge = 0;
   tree_slimmedmuon_PFisoVeryTight = 0;
   tree_slimmedmuon_PFisoTight = 0;
   tree_slimmedmuon_PFisoMedium = 0;
   tree_slimmedmuon_PFisoLoose = 0;
   tree_slimmedmuon_MVAisoLoose = 0;
   tree_slimmedmuon_MVAisoMedium = 0;
   tree_slimmedmuon_MVAisoTight = 0;
   tree_slimmedmuon_isGlobalMuon = 0;
   tree_slimmedmuon_isStandAloneMuon = 0;
   tree_slimmedmuon_CutBasedIdLoose = 0;
   tree_slimmedmuon_CutBasedIdMedium = 0;
   tree_slimmedmuon_CutBasedIdMediumPrompt = 0;
   tree_slimmedmuon_CutBasedIdTight = 0;
 */

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("lumiBlock", &lumiBlock, &b_lumiBlock);

   fChain->SetBranchAddress("tree_bs_PosX", &tree_bs_PosX, &b_tree_bs_PosX);
   fChain->SetBranchAddress("tree_bs_PosY", &tree_bs_PosY, &b_tree_bs_PosY);
   fChain->SetBranchAddress("tree_bs_PosZ", &tree_bs_PosZ, &b_tree_bs_PosZ);

   fChain->SetBranchAddress("tree_trigger_names", &tree_trigger_names, &b_tree_trigger_names);
   fChain->SetBranchAddress("tree_trigger_bits", &tree_trigger_bits, &b_tree_trigger_bits);
   fChain->SetBranchAddress("tree_NbrOfZCand", &tree_NbrOfZCand, &b_tree_NbrOfZCand);
   fChain->SetBranchAddress("tree_passesHTFilter", &tree_passesHTFilter, &b_tree_passesHTFilter);

   fChain->SetBranchAddress("tree_PFMet_et", &tree_PFMet_et, &b_tree_PFMet_et);
   fChain->SetBranchAddress("tree_PFMet_phi", &tree_PFMet_phi, &b_tree_PFMet_phi);
   fChain->SetBranchAddress("tree_PFMet_sig", &tree_PFMet_sig, &b_tree_PFMet_sig);

   fChain->SetBranchAddress("tree_vtx_PosX", &theFormat.tree_vtx_PosX, &theFormat.b_tree_vtx_PosX);
   fChain->SetBranchAddress("tree_vtx_PosY", &theFormat.tree_vtx_PosY, &theFormat.b_tree_vtx_PosY);
   fChain->SetBranchAddress("tree_vtx_PosZ", &theFormat.tree_vtx_PosZ, &theFormat.b_tree_vtx_PosZ);
   fChain->SetBranchAddress("tree_vtx_NChi2", &theFormat.tree_vtx_NChi2, &theFormat.b_tree_vtx_NChi2);
   fChain->SetBranchAddress("tree_vtx_PosXError", &theFormat.tree_vtx_PosXError, &theFormat.b_tree_vtx_PosXError);
   fChain->SetBranchAddress("tree_vtx_PosYError", &theFormat.tree_vtx_PosYError, &theFormat.b_tree_vtx_PosYError);
   fChain->SetBranchAddress("tree_vtx_PosZError", &theFormat.tree_vtx_PosZError, &theFormat.b_tree_vtx_PosZError);

   fChain->SetBranchAddress("tree_track_pt", &theFormat.tree_track_pt, &theFormat.b_tree_track_pt);
   fChain->SetBranchAddress("tree_track_outerPt", &theFormat.tree_track_outerPt, &theFormat.b_tree_track_outerPt);
   fChain->SetBranchAddress("tree_track_eta", &theFormat.tree_track_eta, &theFormat.b_tree_track_eta);
   fChain->SetBranchAddress("tree_track_phi", &theFormat.tree_track_phi, &theFormat.b_tree_track_phi);
   fChain->SetBranchAddress("tree_track_charge", &theFormat.tree_track_charge, &theFormat.b_tree_track_charge);
   fChain->SetBranchAddress("tree_track_nhits", &theFormat.tree_track_nhits, &theFormat.b_tree_track_nhits);
   fChain->SetBranchAddress("tree_track_NChi2", &theFormat.tree_track_NChi2, &theFormat.b_tree_track_NChi2);
   fChain->SetBranchAddress("tree_track_isHighQuality", &theFormat.tree_track_isHighQuality, &theFormat.b_tree_track_isHighQuality);
   fChain->SetBranchAddress("tree_track_isLoose", &theFormat.tree_track_isLoose, &theFormat.b_tree_track_isLoose);
   fChain->SetBranchAddress("tree_track_isTight", &theFormat.tree_track_isTight, &theFormat.b_tree_track_isTight);
   fChain->SetBranchAddress("tree_track_dxy", &theFormat.tree_track_dxy, &theFormat.b_tree_track_dxy);
   fChain->SetBranchAddress("tree_track_dxyError", &theFormat.tree_track_dxyError, &theFormat.b_tree_track_dxyError);
   fChain->SetBranchAddress("tree_track_dz", &theFormat.tree_track_dz, &theFormat.b_tree_track_dz);
   fChain->SetBranchAddress("tree_track_dzError", &theFormat.tree_track_dzError, &theFormat.b_tree_track_dzError);
   fChain->SetBranchAddress("tree_track_numberOfLostHits", &theFormat.tree_track_numberOfLostHits, &theFormat.b_tree_track_numberOfLostHits);
   fChain->SetBranchAddress("tree_track_numberOfValidHits", &theFormat.tree_track_numberOfValidHits, &theFormat.b_tree_track_numberOfValidHits);
   fChain->SetBranchAddress("tree_track_originalAlgo", &theFormat.tree_track_originalAlgo, &theFormat.b_tree_track_originalAlgo);
   fChain->SetBranchAddress("tree_track_algo", &theFormat.tree_track_algo, &theFormat.b_tree_track_algo);
   fChain->SetBranchAddress("tree_track_stopReason", &theFormat.tree_track_stopReason, &theFormat.b_tree_track_stopReason);
   fChain->SetBranchAddress("tree_track_isSimMatched", &theFormat.tree_track_isSimMatched, &theFormat.b_tree_track_isSimMatched);
   fChain->SetBranchAddress("tree_track_numberOfValidPixelHits", &theFormat.tree_track_numberOfValidPixelHits, &theFormat.b_tree_track_numberOfValidPixelHits);
   fChain->SetBranchAddress("tree_track_numberOfValidStripHits", &theFormat.tree_track_numberOfValidStripHits, &theFormat.b_tree_track_numberOfValidStripHits);
   fChain->SetBranchAddress("tree_track_numberOfValidStripTIBHits", &theFormat.tree_track_numberOfValidStripTIBHits, &theFormat.b_tree_track_numberOfValidStripTIBHits);
   fChain->SetBranchAddress("tree_track_numberOfValidStripTIDHits", &theFormat.tree_track_numberOfValidStripTIDHits, &theFormat.b_tree_track_numberOfValidStripTIDHits);
   fChain->SetBranchAddress("tree_track_numberOfValidStripTOBHits", &theFormat.tree_track_numberOfValidStripTOBHits, &theFormat.b_tree_track_numberOfValidStripTOBHits);
   fChain->SetBranchAddress("tree_track_numberOfValidStripTECHits", &theFormat.tree_track_numberOfValidStripTECHits, &theFormat.b_tree_track_numberOfValidStripTECHits);
   fChain->SetBranchAddress("tree_track_numberOfValidPixelBarrelHits", &theFormat.tree_track_numberOfValidPixelBarrelHits, &theFormat.b_tree_track_numberOfValidPixelBarrelHits);
   fChain->SetBranchAddress("tree_track_numberOfValidPixelEndcapHits", &theFormat.tree_track_numberOfValidPixelEndcapHits, &theFormat.b_tree_track_numberOfValidPixelEndcapHits);
   fChain->SetBranchAddress("tree_track_hasValidHitInPixelLayer", &theFormat.tree_track_hasValidHitInPixelLayer, &theFormat.b_tree_track_hasValidHitInPixelLayer);
   fChain->SetBranchAddress("tree_track_trackerLayersWithMeasurement", &theFormat.tree_track_trackerLayersWithMeasurement, &theFormat.b_tree_track_trackerLayersWithMeasurement);
   fChain->SetBranchAddress("tree_track_pixelLayersWithMeasurement", &theFormat.tree_track_pixelLayersWithMeasurement, &theFormat.b_tree_track_pixelLayersWithMeasurement);
   fChain->SetBranchAddress("tree_track_stripTECLayersWithMeasurement", &theFormat.tree_track_stripTECLayersWithMeasurement, &theFormat.b_tree_track_stripTECLayersWithMeasurement);
   fChain->SetBranchAddress("tree_track_stripTIBLayersWithMeasurement", &theFormat.tree_track_stripTIBLayersWithMeasurement, &theFormat.b_tree_track_stripTIBLayersWithMeasurement);
   fChain->SetBranchAddress("tree_track_stripTIDLayersWithMeasurement", &theFormat.tree_track_stripTIDLayersWithMeasurement, &theFormat.b_tree_track_stripTIDLayersWithMeasurement);
   fChain->SetBranchAddress("tree_track_stripTOBLayersWithMeasurement", &theFormat.tree_track_stripTOBLayersWithMeasurement, &theFormat.b_tree_track_stripTOBLayersWithMeasurement);
   fChain->SetBranchAddress("tree_track_vx", &theFormat.tree_track_vx, &theFormat.b_tree_track_vx);
   fChain->SetBranchAddress("tree_track_vy", &theFormat.tree_track_vy, &theFormat.b_tree_track_vy);
   fChain->SetBranchAddress("tree_track_vz", &theFormat.tree_track_vz, &theFormat.b_tree_track_vz);
   fChain->SetBranchAddress("tree_track_firsthit_X", &theFormat.tree_track_firsthit_X, &theFormat.b_tree_track_firsthit_X);
   fChain->SetBranchAddress("tree_track_firsthit_Y", &theFormat.tree_track_firsthit_Y, &theFormat.b_tree_track_firsthit_Y);
   fChain->SetBranchAddress("tree_track_firsthit_Z", &theFormat.tree_track_firsthit_Z, &theFormat.b_tree_track_firsthit_Z);
   fChain->SetBranchAddress("tree_track_firsthit_phi", &theFormat.tree_track_firsthit_phi, &theFormat.b_tree_track_firsthit_phi);
   fChain->SetBranchAddress("tree_track_simtrack_charge", &theFormat.tree_track_simtrack_charge, &theFormat.b_tree_track_simtrack_charge);
   fChain->SetBranchAddress("tree_track_simtrack_pt", &theFormat.tree_track_simtrack_pt, &theFormat.b_tree_track_simtrack_pt);
   fChain->SetBranchAddress("tree_track_simtrack_eta", &theFormat.tree_track_simtrack_eta, &theFormat.b_tree_track_simtrack_eta);
   fChain->SetBranchAddress("tree_track_simtrack_phi", &theFormat.tree_track_simtrack_phi, &theFormat.b_tree_track_simtrack_phi);
   fChain->SetBranchAddress("tree_track_simtrack_longLived", &theFormat.tree_track_simtrack_longLived, &theFormat.b_tree_track_simtrack_longLived);
   fChain->SetBranchAddress("tree_track_simtrack_pdgId", &theFormat.tree_track_simtrack_pdgId, &theFormat.b_tree_track_simtrack_pdgId);
   fChain->SetBranchAddress("tree_track_simtrack_isFromLLP", &theFormat.tree_track_simtrack_isFromLLP, &theFormat.b_tree_track_simtrack_isFromLLP);
   fChain->SetBranchAddress("tree_track_simtrack_numberOfTrackerHits", &theFormat.tree_track_simtrack_numberOfTrackerHits, &theFormat.b_tree_track_simtrack_numberOfTrackerHits);
   fChain->SetBranchAddress("tree_track_simtrack_numberOfTrackerLayers", &theFormat.tree_track_simtrack_numberOfTrackerLayers, &theFormat.b_tree_track_simtrack_numberOfTrackerLayers);
   fChain->SetBranchAddress("tree_track_simtrack_mass", &theFormat.tree_track_simtrack_mass, &theFormat.b_tree_track_simtrack_mass);
   fChain->SetBranchAddress("tree_track_simtrack_status", &theFormat.tree_track_simtrack_status, &theFormat.b_tree_track_simtrack_status);
   fChain->SetBranchAddress("tree_track_genVertexPos_X", &theFormat.tree_track_genVertexPos_X, &theFormat.b_tree_track_genVertexPos_X);
   fChain->SetBranchAddress("tree_track_genVertexPos_Y", &theFormat.tree_track_genVertexPos_Y, &theFormat.b_tree_track_genVertexPos_Y);
   fChain->SetBranchAddress("tree_track_genVertexPos_Z", &theFormat.tree_track_genVertexPos_Z, &theFormat.b_tree_track_genVertexPos_Z);
   fChain->SetBranchAddress("tree_track_recoVertex_idx", &theFormat.tree_track_recoVertex_idx, &theFormat.b_tree_track_recoVertex_idx);
   fChain->SetBranchAddress("tree_track_recoAK4SlimmedJet_idx", &theFormat.tree_track_recoAK4SlimmedJet_idx, &theFormat.b_tree_track_recoAK4SlimmedJet_idx);
   fChain->SetBranchAddress("tree_track_recoAK4PFJet_idx", &theFormat.tree_track_recoAK4PFJet_idx, &theFormat.b_tree_track_recoAK4PFJet_idx);
   fChain->SetBranchAddress("tree_track_reco08Jet_idx", &theFormat.tree_track_reco08Jet_idx, &theFormat.b_tree_track_reco08Jet_idx);
   fChain->SetBranchAddress("tree_track_recoCaloJet_idx", &theFormat.tree_track_recoCaloJet_idx, &theFormat.b_tree_track_recoCaloJet_idx);
   fChain->SetBranchAddress("tree_track_MVAval_FromDispTop", &theFormat.tree_track_MVAval_FromDispTop, &theFormat.b_tree_track_MVAval_FromDispTop);
   fChain->SetBranchAddress("tree_secondaryVtx_X", &theFormat.tree_secondaryVtx_X, &theFormat.b_tree_secondaryVtx_X);
   fChain->SetBranchAddress("tree_secondaryVtx_Y", &theFormat.tree_secondaryVtx_Y, &theFormat.b_tree_secondaryVtx_Y);
   fChain->SetBranchAddress("tree_secondaryVtx_Z", &theFormat.tree_secondaryVtx_Z, &theFormat.b_tree_secondaryVtx_Z);
   fChain->SetBranchAddress("tree_secondaryVtx_diff_X", &theFormat.tree_secondaryVtx_diff_X, &theFormat.b_tree_secondaryVtx_diff_X);
   fChain->SetBranchAddress("tree_secondaryVtx_diff_Y", &theFormat.tree_secondaryVtx_diff_Y, &theFormat.b_tree_secondaryVtx_diff_Y);
   fChain->SetBranchAddress("tree_secondaryVtx_diff_Z", &theFormat.tree_secondaryVtx_diff_Z, &theFormat.b_tree_secondaryVtx_diff_Z);
   fChain->SetBranchAddress("tree_secondaryVtx_nTracks", &theFormat.tree_secondaryVtx_nTracks, &theFormat.b_tree_secondaryVtx_nTracks);
   fChain->SetBranchAddress("tree_secondaryVtx_isValid", &theFormat.tree_secondaryVtx_isValid, &theFormat.b_tree_secondaryVtx_isValid);
   fChain->SetBranchAddress("tree_secondaryVtx_NChi2", &theFormat.tree_secondaryVtx_NChi2, &theFormat.b_tree_secondaryVtx_NChi2);
   fChain->SetBranchAddress("tree_secondaryVtx_iterative_X", &theFormat.tree_secondaryVtx_iterative_X, &theFormat.b_tree_secondaryVtx_iterative_X);
   fChain->SetBranchAddress("tree_secondaryVtx_iterative_Y", &theFormat.tree_secondaryVtx_iterative_Y, &theFormat.b_tree_secondaryVtx_iterative_Y);
   fChain->SetBranchAddress("tree_secondaryVtx_iterative_Z", &theFormat.tree_secondaryVtx_iterative_Z, &theFormat.b_tree_secondaryVtx_iterative_Z);
   fChain->SetBranchAddress("tree_secondaryVtx_iterative_nTracks", &theFormat.tree_secondaryVtx_iterative_nTracks, &theFormat.b_tree_secondaryVtx_iterative_nTracks);
   fChain->SetBranchAddress("tree_secondaryVtx_iterative_NChi2", &theFormat.tree_secondaryVtx_iterative_NChi2, &theFormat.b_tree_secondaryVtx_iterative_NChi2);
   fChain->SetBranchAddress("tree_secondaryVtx_iterative_isSelected", &theFormat.tree_secondaryVtx_iterative_isSelected, &theFormat.b_tree_secondaryVtx_iterative_isSelected);
   fChain->SetBranchAddress("tree_simtrack_simtrack_charge", &theFormat.tree_simtrack_simtrack_charge, &theFormat.b_tree_simtrack_simtrack_charge);
   fChain->SetBranchAddress("tree_simtrack_simtrack_pt", &theFormat.tree_simtrack_simtrack_pt, &theFormat.b_tree_simtrack_simtrack_pt);
   fChain->SetBranchAddress("tree_simtrack_simtrack_eta", &theFormat.tree_simtrack_simtrack_eta, &theFormat.b_tree_simtrack_simtrack_eta);
   fChain->SetBranchAddress("tree_simtrack_simtrack_phi", &theFormat.tree_simtrack_simtrack_phi, &theFormat.b_tree_simtrack_simtrack_phi);
   fChain->SetBranchAddress("tree_simtrack_simtrack_longLived", &theFormat.tree_simtrack_simtrack_longLived, &theFormat.b_tree_simtrack_simtrack_longLived);
   fChain->SetBranchAddress("tree_simtrack_simtrack_pdgId", &theFormat.tree_simtrack_simtrack_pdgId, &theFormat.b_tree_simtrack_simtrack_pdgId);
   fChain->SetBranchAddress("tree_simtrack_simtrack_mass", &theFormat.tree_simtrack_simtrack_mass, &theFormat.b_tree_simtrack_simtrack_mass);
   fChain->SetBranchAddress("tree_simtrack_simtrack_status", &theFormat.tree_simtrack_simtrack_status, &theFormat.b_tree_simtrack_simtrack_status);
   fChain->SetBranchAddress("tree_simtrack_genVertexPos_X", &theFormat.tree_simtrack_genVertexPos_X, &theFormat.b_tree_simtrack_genVertexPos_X);
   fChain->SetBranchAddress("tree_simtrack_genVertexPos_Y", &theFormat.tree_simtrack_genVertexPos_Y, &theFormat.b_tree_simtrack_genVertexPos_Y);
   fChain->SetBranchAddress("tree_simtrack_genVertexPos_Z", &theFormat.tree_simtrack_genVertexPos_Z, &theFormat.b_tree_simtrack_genVertexPos_Z);
   fChain->SetBranchAddress("tree_simtrack_isRecoMatched", &theFormat.tree_simtrack_isRecoMatched, &theFormat.b_tree_simtrack_isRecoMatched);
   fChain->SetBranchAddress("tree_simtrack_pca_dxy", &theFormat.tree_simtrack_pca_dxy, &theFormat.b_tree_simtrack_pca_dxy);
   fChain->SetBranchAddress("tree_simtrack_pca_dz", &theFormat.tree_simtrack_pca_dz, &theFormat.b_tree_simtrack_pca_dz);
   fChain->SetBranchAddress("tree_simtrack_trkIdx", &theFormat.tree_simtrack_trkIdx, &theFormat.b_tree_simtrack_trkIdx);
   fChain->SetBranchAddress("tree_AK4Slimmedjet_E", &theFormat.tree_AK4Slimmedjet_E, &theFormat.b_tree_AK4Slimmedjet_E);
   fChain->SetBranchAddress("tree_AK4Slimmedjet_pt", &theFormat.tree_AK4Slimmedjet_pt, &theFormat.b_tree_AK4Slimmedjet_pt);
   fChain->SetBranchAddress("tree_AK4Slimmedjet_eta", &theFormat.tree_AK4Slimmedjet_eta, &theFormat.b_tree_AK4Slimmedjet_eta);
   fChain->SetBranchAddress("tree_AK4Slimmedjet_phi", &theFormat.tree_AK4Slimmedjet_phi, &theFormat.b_tree_AK4Slimmedjet_phi);
   fChain->SetBranchAddress("tree_AK4Slimmedjet_idxTrack", &theFormat.tree_AK4Slimmedjet_idxTrack, &theFormat.b_tree_AK4Slimmedjet_idxTrack);
   fChain->SetBranchAddress("tree_AK4PFjet_E", &theFormat.tree_AK4PFjet_E, &theFormat.b_tree_AK4PFjet_E);
   fChain->SetBranchAddress("tree_AK4PFjet_pt", &theFormat.tree_AK4PFjet_pt, &theFormat.b_tree_AK4PFjet_pt);
   fChain->SetBranchAddress("tree_AK4PFjet_eta", &theFormat.tree_AK4PFjet_eta, &theFormat.b_tree_AK4PFjet_eta);
   fChain->SetBranchAddress("tree_AK4PFjet_phi", &theFormat.tree_AK4PFjet_phi, &theFormat.b_tree_AK4PFjet_phi);
   fChain->SetBranchAddress("tree_AK4PFjet_idxTrack", &theFormat.tree_AK4PFjet_idxTrack, &theFormat.b_tree_AK4PFjet_idxTrack);
   fChain->SetBranchAddress("tree_CaloJet_E", &theFormat.tree_CaloJet_E, &theFormat.b_tree_CaloJet_E);
   fChain->SetBranchAddress("tree_CaloJet_pt", &theFormat.tree_CaloJet_pt, &theFormat.b_tree_CaloJet_pt);
   fChain->SetBranchAddress("tree_CaloJet_eta", &theFormat.tree_CaloJet_eta, &theFormat.b_tree_CaloJet_eta);
   fChain->SetBranchAddress("tree_CaloJet_phi", &theFormat.tree_CaloJet_phi, &theFormat.b_tree_CaloJet_phi);
   fChain->SetBranchAddress("tree_CaloJet_idxTrack", &theFormat.tree_CaloJet_idxTrack, &theFormat.b_tree_CaloJet_idxTrack);
   fChain->SetBranchAddress("tree_jet08_E", &theFormat.tree_jet08_E, &theFormat.b_tree_jet08_E);
   fChain->SetBranchAddress("tree_jet08_pt", &theFormat.tree_jet08_pt, &theFormat.b_tree_jet08_pt);
   fChain->SetBranchAddress("tree_jet08_eta", &theFormat.tree_jet08_eta, &theFormat.b_tree_jet08_eta);
   fChain->SetBranchAddress("tree_jet08_phi", &theFormat.tree_jet08_phi, &theFormat.b_tree_jet08_phi);
   fChain->SetBranchAddress("tree_jet08_idxTrack", &theFormat.tree_jet08_idxTrack, &theFormat.b_tree_jet08_idxTrack);

   fChain->SetBranchAddress("tree_genParticle_pt", &theFormat.tree_genParticle_pt, &theFormat.b_tree_genParticle_pt);
   fChain->SetBranchAddress("tree_genParticle_eta", &theFormat.tree_genParticle_eta, &theFormat.b_tree_genParticle_eta);
   fChain->SetBranchAddress("tree_genParticle_phi", &theFormat.tree_genParticle_phi, &theFormat.b_tree_genParticle_phi);
   fChain->SetBranchAddress("tree_genParticle_charge", &theFormat.tree_genParticle_charge, &theFormat.b_tree_genParticle_charge);
   fChain->SetBranchAddress("tree_genParticle_pdgId", &theFormat.tree_genParticle_pdgId, &theFormat.b_tree_genParticle_pdgId);
   fChain->SetBranchAddress("tree_genParticle_vx", &theFormat.tree_genParticle_vx, &theFormat.b_tree_genParticle_vx);
   fChain->SetBranchAddress("tree_genParticle_vy", &theFormat.tree_genParticle_vy, &theFormat.b_tree_genParticle_vy);
   fChain->SetBranchAddress("tree_genParticle_vz", &theFormat.tree_genParticle_vz, &theFormat.b_tree_genParticle_vz);
   fChain->SetBranchAddress("tree_genParticle_mass", &theFormat.tree_genParticle_mass, &theFormat.b_tree_genParticle_mass);
   fChain->SetBranchAddress("tree_genParticle_statusCode", &theFormat.tree_genParticle_statusCode, &theFormat.b_tree_genParticle_statusCode);
   fChain->SetBranchAddress("tree_genParticle_mother_pdgId", &theFormat.tree_genParticle_mother_pdgId, &theFormat.b_tree_genParticle_mother_pdgId);
   fChain->SetBranchAddress("tree_genParticle_mother_pt", &theFormat.tree_genParticle_mother_pt, &theFormat.b_tree_genParticle_mother_pt);
   fChain->SetBranchAddress("tree_genParticle_mother_eta", &theFormat.tree_genParticle_mother_eta, &theFormat.b_tree_genParticle_mother_eta);
   fChain->SetBranchAddress("tree_genParticle_mother_phi", &theFormat.tree_genParticle_mother_phi, &theFormat.b_tree_genParticle_mother_phi);
   fChain->SetBranchAddress("tree_genJet_pt", &theFormat.tree_genJet_pt, &theFormat.b_tree_genJet_pt);
   fChain->SetBranchAddress("tree_genJet_eta", &theFormat.tree_genJet_eta, &theFormat.b_tree_genJet_eta);
   fChain->SetBranchAddress("tree_genJet_phi", &theFormat.tree_genJet_phi, &theFormat.b_tree_genJet_phi);
   fChain->SetBranchAddress("tree_genJet_mass", &theFormat.tree_genJet_mass, &theFormat.b_tree_genJet_mass);
   fChain->SetBranchAddress("tree_genJet_energy", &theFormat.tree_genJet_energy, &theFormat.b_tree_genJet_energy);
   fChain->SetBranchAddress("tree_ak8GenJet_pt", &theFormat.tree_ak8GenJet_pt, &theFormat.b_tree_ak8GenJet_pt);
   fChain->SetBranchAddress("tree_ak8GenJet_eta", &theFormat.tree_ak8GenJet_eta, &theFormat.b_tree_ak8GenJet_eta);
   fChain->SetBranchAddress("tree_ak8GenJet_phi", &theFormat.tree_ak8GenJet_phi, &theFormat.b_tree_ak8GenJet_phi);
   fChain->SetBranchAddress("tree_ak8GenJet_mass", &theFormat.tree_ak8GenJet_mass, &theFormat.b_tree_ak8GenJet_mass);
   fChain->SetBranchAddress("tree_ak8GenJet_energy", &theFormat.tree_ak8GenJet_energy, &theFormat.b_tree_ak8GenJet_energy);
   fChain->SetBranchAddress("tree_electron_pt", &theFormat.tree_electron_pt, &theFormat.b_tree_electron_pt);
   fChain->SetBranchAddress("tree_electron_eta", &theFormat.tree_electron_eta, &theFormat.b_tree_electron_eta);
   fChain->SetBranchAddress("tree_electron_phi", &theFormat.tree_electron_phi, &theFormat.b_tree_electron_phi);
   fChain->SetBranchAddress("tree_electron_vx", &theFormat.tree_electron_vx, &theFormat.b_tree_electron_vx);
   fChain->SetBranchAddress("tree_electron_vy", &theFormat.tree_electron_vy, &theFormat.b_tree_electron_vy);
   fChain->SetBranchAddress("tree_electron_vz", &theFormat.tree_electron_vz, &theFormat.b_tree_electron_vz);
   fChain->SetBranchAddress("tree_electron_energy", &theFormat.tree_electron_energy, &theFormat.b_tree_electron_energy);
   fChain->SetBranchAddress("tree_slimmedmuon_pt", &theFormat.tree_slimmedmuon_pt, &theFormat.b_tree_slimmedmuon_pt);
   fChain->SetBranchAddress("tree_slimmedmuon_eta", &theFormat.tree_slimmedmuon_eta, &theFormat.b_tree_slimmedmuon_eta);
   fChain->SetBranchAddress("tree_slimmedmuon_phi", &theFormat.tree_slimmedmuon_phi, &theFormat.b_tree_slimmedmuon_phi);
   fChain->SetBranchAddress("tree_slimmedmuon_vx", &theFormat.tree_slimmedmuon_vx, &theFormat.b_tree_slimmedmuon_vx);
   fChain->SetBranchAddress("tree_slimmedmuon_vy", &theFormat.tree_slimmedmuon_vy, &theFormat.b_tree_slimmedmuon_vy);
   fChain->SetBranchAddress("tree_slimmedmuon_vz", &theFormat.tree_slimmedmuon_vz, &theFormat.b_tree_slimmedmuon_vz);
   fChain->SetBranchAddress("tree_slimmedmuon_energy", &theFormat.tree_slimmedmuon_energy, &theFormat.b_tree_slimmedmuon_energy);
   fChain->SetBranchAddress("tree_slimmedmuon_dxy", &theFormat.tree_slimmedmuon_dxy, &theFormat.b_tree_slimmedmuon_dxy);
   fChain->SetBranchAddress("tree_slimmedmuon_dxyError", &theFormat.tree_slimmedmuon_dxyError, &theFormat.b_tree_slimmedmuon_dxyError);
   fChain->SetBranchAddress("tree_slimmedmuon_dz", &theFormat.tree_slimmedmuon_dz, &theFormat.b_tree_slimmedmuon_dz);
   fChain->SetBranchAddress("tree_slimmedmuon_dzError", &theFormat.tree_slimmedmuon_dzError, &theFormat.b_tree_slimmedmuon_dzError);
   fChain->SetBranchAddress("tree_slimmedmuon_charge", &theFormat.tree_slimmedmuon_charge, &theFormat.b_tree_slimmedmuon_charge);
   fChain->SetBranchAddress("tree_slimmedmuon_PFisoVeryTight", &theFormat.tree_slimmedmuon_PFisoVeryTight, &theFormat.b_tree_slimmedmuon_PFisoVeryTight);
   fChain->SetBranchAddress("tree_slimmedmuon_PFisoTight", &theFormat.tree_slimmedmuon_PFisoTight, &theFormat.b_tree_slimmedmuon_PFisoTight);
   fChain->SetBranchAddress("tree_slimmedmuon_PFisoMedium", &theFormat.tree_slimmedmuon_PFisoMedium, &theFormat.b_tree_slimmedmuon_PFisoMedium);
   fChain->SetBranchAddress("tree_slimmedmuon_PFisoLoose", &theFormat.tree_slimmedmuon_PFisoLoose, &theFormat.b_tree_slimmedmuon_PFisoLoose);
   fChain->SetBranchAddress("tree_slimmedmuon_MVAisoLoose", &theFormat.tree_slimmedmuon_MVAisoLoose, &theFormat.b_tree_slimmedmuon_MVAisoLoose);
   fChain->SetBranchAddress("tree_slimmedmuon_MVAisoMedium", &theFormat.tree_slimmedmuon_MVAisoMedium, &theFormat.b_tree_slimmedmuon_MVAisoMedium);
   fChain->SetBranchAddress("tree_slimmedmuon_MVAisoTight", &theFormat.tree_slimmedmuon_MVAisoTight, &theFormat.b_tree_slimmedmuon_MVAisoTight);
   fChain->SetBranchAddress("tree_slimmedmuon_isGlobalMuon", &theFormat.tree_slimmedmuon_isGlobalMuon, &theFormat.b_tree_slimmedmuon_isGlobalMuon);
   fChain->SetBranchAddress("tree_slimmedmuon_isStandAloneMuon", &theFormat.tree_slimmedmuon_isStandAloneMuon, &theFormat.b_tree_slimmedmuon_isStandAloneMuon);
   fChain->SetBranchAddress("tree_slimmedmuon_CutBasedIdLoose", &theFormat.tree_slimmedmuon_CutBasedIdLoose, &theFormat.b_tree_slimmedmuon_CutBasedIdLoose);
   fChain->SetBranchAddress("tree_slimmedmuon_CutBasedIdMedium", &theFormat.tree_slimmedmuon_CutBasedIdMedium, &theFormat.b_tree_slimmedmuon_CutBasedIdMedium);
   fChain->SetBranchAddress("tree_slimmedmuon_CutBasedIdMediumPrompt", &theFormat.tree_slimmedmuon_CutBasedIdMediumPrompt, &theFormat.b_tree_slimmedmuon_CutBasedIdMediumPrompt);
   fChain->SetBranchAddress("tree_slimmedmuon_CutBasedIdTight", &theFormat.tree_slimmedmuon_CutBasedIdTight, &theFormat.b_tree_slimmedmuon_CutBasedIdTight);
   Notify();
}

Bool_t TreeReader::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void TreeReader::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t TreeReader::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}


void TreeReader::LoadTreeSizes(TreeFormat theFormat){

   muon_size      = theFormat.tree_slimmedmuon_pt->size();
   track_size     = theFormat.tree_track_pt->size();
   PV_size        = theFormat.tree_vtx_PosX->size();
   SV_size        = theFormat.tree_secondaryVtx_X->size();
   PFJet_size     = theFormat.tree_AK4Slimmedjet_pt->size();
}


#endif // #ifdef TreeReader_cxx
