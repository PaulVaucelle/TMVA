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
#include <TFile.h>//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Mar 21 08:45:18 2023 by ROOT version 6.14/09
// from TTree ttree/ttree
// found on file: Ntuple_50.root
//////////////////////////////////////////////////////////

#ifndef TreeReader_h
#define TreeReader_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
//header file for home made classes
#include "./include/TreeFormat.h"
#include "include/HistoManager.h"
#include "include/DeltaFunc.h"
#include "vector"
#include "iostream"

class TreeReader {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           runNumber;
   Int_t           eventNumber;
   Int_t           lumiBlock;
   Int_t           tree_nPV;
   Float_t         tree_PV_x;
   Float_t         tree_PV_y;
   Float_t         tree_PV_z;
   Float_t         tree_PV_ez;
   Float_t         tree_PV_NChi2;
   Int_t           tree_PV_ndf;
   vector<int>     *tree_allPV_i;
   vector<float>   *tree_allPV_x;
   vector<float>   *tree_allPV_y;
   vector<float>   *tree_allPV_z;
   vector<float>   *tree_allPV_ex;
   vector<float>   *tree_allPV_ey;
   vector<float>   *tree_allPV_ez;
   vector<float>   *tree_allPV_NChi2;
   vector<int>     *tree_allPV_ndf;
   Float_t         tree_bs_PosX;
   Float_t         tree_bs_PosY;
   Float_t         tree_bs_PosZ;
   Int_t           tree_NbrOfZCand;
   Bool_t          tree_Filter;
   Int_t           tree_nK0;
   vector<float>   *tree_K0_x;
   vector<float>   *tree_K0_y;
   vector<float>   *tree_K0_z;
   vector<float>   *tree_K0_r;
   vector<float>   *tree_K0_NChi2;
   vector<float>   *tree_K0_ndf;
   vector<float>   *tree_K0_mass;
   vector<float>   *tree_K0_pt;
   vector<float>   *tree_K0_eta;
   vector<float>   *tree_K0_phi;
   vector<unsigned int> *tree_K0_nDaughters;
   Int_t           tree_nLambda;
   vector<float>   *tree_L0_x;
   vector<float>   *tree_L0_y;
   vector<float>   *tree_L0_z;
   vector<float>   *tree_L0_r;
   vector<float>   *tree_L0_NChi2;
   vector<float>   *tree_L0_ndf;
   vector<unsigned int> *tree_L0_nDaughters;
   vector<float>   *tree_L0_mass;
   vector<float>   *tree_L0_pt;
   vector<float>   *tree_L0_eta;
   vector<float>   *tree_L0_phi;
   Int_t           tree_nV0_reco;
   vector<float>   *tree_V0_reco_x;
   vector<float>   *tree_V0_reco_y;
   vector<float>   *tree_V0_reco_z;
   vector<float>   *tree_V0_reco_r;
   vector<float>   *tree_V0_reco_drSig;
   vector<float>   *tree_V0_reco_dzSig;
   vector<float>   *tree_V0_reco_angleXY;
   vector<float>   *tree_V0_reco_angleZ;
   vector<float>   *tree_V0_reco_NChi2;
   vector<float>   *tree_V0_reco_ndf;
   vector<float>   *tree_V0_reco_mass;
   vector<float>   *tree_V0_reco_pt;
   vector<float>   *tree_V0_reco_eta;
   vector<float>   *tree_V0_reco_phi;
   vector<int>     *tree_V0_reco_source;
   vector<bool>    *tree_V0_reco_badTkHit;
   Int_t           tree_nSecInt;
   vector<float>   *tree_SecInt_x;
   vector<float>   *tree_SecInt_y;
   vector<float>   *tree_SecInt_z;
   vector<float>   *tree_SecInt_r;
   vector<float>   *tree_SecInt_drSig;
   vector<float>   *tree_SecInt_dzSig;
   vector<float>   *tree_SecInt_angleXY;
   vector<float>   *tree_SecInt_angleZ;
   vector<float>   *tree_SecInt_NChi2;
   vector<float>   *tree_SecInt_ndf;
   vector<float>   *tree_SecInt_mass;
   vector<float>   *tree_SecInt_pt;
   vector<float>   *tree_SecInt_eta;
   vector<float>   *tree_SecInt_phi;
   vector<int>     *tree_SecInt_charge;
   vector<bool>    *tree_SecInt_badTkHit;
   vector<float>   *tree_SecInt_dca;
   vector<bool>    *tree_SecInt_selec;
   vector<int>     *tree_SecInt_layer;
   vector<int>     *tree_SecInt_LLP;
   vector<float>   *tree_SecInt_LLP_dr;
   vector<float>   *tree_SecInt_LLP_dz;
   Int_t           tree_nYConv;
   vector<float>   *tree_Yc_x;
   vector<float>   *tree_Yc_y;
   vector<float>   *tree_Yc_z;
   vector<float>   *tree_Yc_r;
   vector<float>   *tree_Yc_dr0;
   vector<float>   *tree_Yc_dr1;
   vector<float>   *tree_Yc_dz0;
   vector<float>   *tree_Yc_dz1;
   vector<float>   *tree_Yc_costheta;
   vector<int>     *tree_Yc_layer;
   vector<float>   *tree_Yc_NChi2;
   vector<float>   *tree_Yc_ndf;
   vector<unsigned int> *tree_Yc_nDaughters;
   vector<float>   *tree_Yc_pt;
   vector<float>   *tree_Yc_eta;
   vector<float>   *tree_Yc_phi;
   vector<float>   *tree_Yc_mass;
   Int_t           tree_Yc_ntracks;
   vector<int>     *tree_Yc_tracks_index;
   vector<int>     *tree_Yc_tracks_charge;
   vector<float>   *tree_Yc_tracks_pt;
   vector<float>   *tree_Yc_tracks_eta;
   vector<float>   *tree_Yc_tracks_phi;
   vector<float>   *tree_Yc_tracks_phi0;
   Float_t         tree_PFMet_et;
   Float_t         tree_PFMet_phi;
   Float_t         tree_PFMet_sig;
   Int_t           tree_njet;
   vector<float>   *tree_jet_E;
   vector<float>   *tree_jet_pt;
   vector<float>   *tree_jet_eta;
   vector<float>   *tree_jet_phi;
   vector<float>   *tree_jet_btag_DeepCSV;
   vector<float>   *tree_jet_btag_DeepJet;
   Float_t         tree_HT;
   vector<float>   *tree_electron_pt;
   vector<float>   *tree_electron_eta;
   vector<float>   *tree_electron_phi;
   vector<float>   *tree_electron_x;
   vector<float>   *tree_electron_y;
   vector<float>   *tree_electron_z;
   vector<float>   *tree_electron_energy;
   vector<int>     *tree_electron_charge;
   vector<float>   *tree_electron_isoR4;
   Float_t         tree_Mmumu;
   vector<float>   *tree_muon_pt;
   vector<float>   *tree_muon_eta;
   vector<float>   *tree_muon_phi;
   vector<float>   *tree_muon_x;
   vector<float>   *tree_muon_y;
   vector<float>   *tree_muon_z;
   vector<float>   *tree_muon_energy;
   vector<float>   *tree_muon_dxy;
   vector<float>   *tree_muon_dxyError;
   vector<float>   *tree_muon_dz;
   vector<float>   *tree_muon_dzError;
   vector<int>     *tree_muon_charge;
   vector<bool>    *tree_muon_isLoose;
   vector<bool>    *tree_muon_isTight;
   vector<bool>    *tree_muon_isGlobal;
   vector<float>   *tree_muon_isoR3;
   Int_t           tree_nTracks;
   Int_t           tree_nLostTracks;
   vector<unsigned int> *tree_track_ipc;
   vector<bool>    *tree_track_lost;
   vector<float>   *tree_track_pt;
   vector<float>   *tree_track_eta;
   vector<float>   *tree_track_phi;
   vector<int>     *tree_track_charge;
   vector<float>   *tree_track_NChi2;
   vector<bool>    *tree_track_isHighPurity;
   vector<float>   *tree_track_dxy;
   vector<float>   *tree_track_dxyError;
   vector<float>   *tree_track_drSig;
   vector<float>   *tree_track_dz;
   vector<float>   *tree_track_dzError;
   vector<float>   *tree_track_dzSig;
   vector<float>   *tree_track_dzTOpu;
   vector<float>   *tree_track_dzSigTOpu;
   vector<unsigned int> *tree_track_algo;
   vector<int>     *tree_track_nHit;
   vector<int>     *tree_track_nHitPixel;
   vector<int>     *tree_track_nHitTIB;
   vector<int>     *tree_track_nHitTID;
   vector<int>     *tree_track_nHitTOB;
   vector<int>     *tree_track_nHitTEC;
   vector<int>     *tree_track_nHitPXB;
   vector<int>     *tree_track_nHitPXF;
   vector<int>     *tree_track_isHitPixel;
   vector<int>     *tree_track_nLayers;
   vector<int>     *tree_track_nLayersPixel;
   vector<float>   *tree_track_x;
   vector<float>   *tree_track_y;
   vector<float>   *tree_track_z;
   vector<int>     *tree_track_firstHit;
   vector<float>   *tree_track_region;
   vector<float>   *tree_track_firstHit_x;
   vector<float>   *tree_track_firstHit_y;
   vector<float>   *tree_track_firstHit_z;
   vector<int>     *tree_track_iJet;
   vector<float>   *tree_track_ntrk10;
   vector<float>   *tree_track_ntrk20;
   vector<float>   *tree_track_ntrk30;
   vector<float>   *tree_track_ntrk40;
   vector<double>  *tree_track_MVAval;
   vector<int>     *tree_track_Hemi;
   vector<double>  *tree_track_Hemi_dR;
   vector<double>  *tree_track_Hemi_mva_NChi2;
   vector<bool>    *tree_track_Hemi_ping;
   vector<float>   *tree_track_Hemi_dFirstVtx;
   vector<int>     *tree_track_Hemi_LLP;
   vector<int>     *tree_track_sim_LLP;
   vector<bool>    *tree_track_sim_isFromB;
   vector<bool>    *tree_track_sim_isFromC;
   vector<float>   *tree_track_sim_pt;
   vector<float>   *tree_track_sim_eta;
   vector<float>   *tree_track_sim_phi;
   vector<int>     *tree_track_sim_charge;
   vector<int>     *tree_track_sim_pdgId;
   vector<float>   *tree_track_sim_mass;
   vector<float>   *tree_track_sim_x;
   vector<float>   *tree_track_sim_y;
   vector<float>   *tree_track_sim_z;
   vector<float>   *tree_track_sim_dFirstGen;
   vector<float>   *tree_track_sim_LLP_r;
   vector<float>   *tree_track_sim_LLP_z;
   Float_t         tree_GenPVx;
   Float_t         tree_GenPVy;
   Float_t         tree_GenPVz;
   vector<float>   *tree_genParticle_pt;
   vector<float>   *tree_genParticle_eta;
   vector<float>   *tree_genParticle_phi;
   vector<float>   *tree_genParticle_charge;
   vector<int>     *tree_genParticle_pdgId;
   vector<float>   *tree_genParticle_mass;
   vector<float>   *tree_genParticle_x;
   vector<float>   *tree_genParticle_y;
   vector<float>   *tree_genParticle_z;
   vector<int>     *tree_genParticle_statusCode;
   vector<int>     *tree_genParticle_mother_pdgId;
   vector<int>     *tree_genParticle_LLP;
   Int_t           tree_ngenPackPart;
   vector<float>   *tree_genPackPart_pt;
   vector<float>   *tree_genPackPart_eta;
   vector<float>   *tree_genPackPart_phi;
   vector<float>   *tree_genPackPart_charge;
   vector<int>     *tree_genPackPart_pdgId;
   vector<float>   *tree_genPackPart_mass;
   vector<float>   *tree_genPackPart_x;
   vector<float>   *tree_genPackPart_y;
   vector<float>   *tree_genPackPart_z;
   vector<int>     *tree_genPackPart_mother_pdgId;
   vector<bool>    *tree_genPackPart_isFromB;
   vector<bool>    *tree_genPackPart_isFromC;
   Int_t           tree_ngenFromLLP;
   vector<int>     *tree_genFromLLP_LLP;
   vector<float>   *tree_genFromLLP_pt;
   vector<float>   *tree_genFromLLP_eta;
   vector<float>   *tree_genFromLLP_phi;
   vector<float>   *tree_genFromLLP_charge;
   vector<int>     *tree_genFromLLP_pdgId;
   vector<float>   *tree_genFromLLP_mass;
   vector<float>   *tree_genFromLLP_x;
   vector<float>   *tree_genFromLLP_y;
   vector<float>   *tree_genFromLLP_z;
   vector<int>     *tree_genFromLLP_mother_pdgId;
   vector<bool>    *tree_genFromLLP_isFromB;
   vector<bool>    *tree_genFromLLP_isFromC;
   vector<float>   *tree_genAxis_dRneuneu;
   Int_t           tree_nFromC;
   vector<float>   *tree_genFromC_pt;
   vector<float>   *tree_genFromC_eta;
   vector<float>   *tree_genFromC_phi;
   vector<float>   *tree_genFromC_charge;
   vector<int>     *tree_genFromC_pdgId;
   vector<float>   *tree_genFromC_x;
   vector<float>   *tree_genFromC_y;
   vector<float>   *tree_genFromC_z;
   vector<int>     *tree_genFromC_mother_pdgId;
   Int_t           tree_nFromB;
   vector<float>   *tree_genFromB_pt;
   vector<float>   *tree_genFromB_eta;
   vector<float>   *tree_genFromB_phi;
   vector<float>   *tree_genFromB_charge;
   vector<int>     *tree_genFromB_pdgId;
   vector<float>   *tree_genFromB_x;
   vector<float>   *tree_genFromB_y;
   vector<float>   *tree_genFromB_z;
   vector<int>     *tree_genFromB_mother_pdgId;
   vector<float>   *tree_genJet_pt;
   vector<float>   *tree_genJet_eta;
   vector<float>   *tree_genJet_phi;
   vector<float>   *tree_genJet_mass;
   vector<float>   *tree_genJet_energy;
   Int_t           tree_nLLP;
   vector<int>     *tree_LLP;
   vector<float>   *tree_LLP_pt;
   vector<float>   *tree_LLP_eta;
   vector<float>   *tree_LLP_phi;
   vector<float>   *tree_LLP_x;
   vector<float>   *tree_LLP_y;
   vector<float>   *tree_LLP_z;
   vector<float>   *tree_LLP_dist;
   vector<int>     *tree_LLP_nTrks;
   vector<int>     *tree_LLP_Vtx_nTrks;
   vector<float>   *tree_LLP_Vtx_NChi2;
   vector<float>   *tree_LLP_Vtx_dx;
   vector<float>   *tree_LLP_Vtx_dy;
   vector<float>   *tree_LLP_Vtx_dz;
   vector<float>   *tree_LLP_Vtx_dist;
   vector<float>   *tree_LLP_Vtx_dd;
   vector<float>   *tree_LLP12_dR;
   vector<float>   *tree_LLP12_deta;
   vector<float>   *tree_LLP12_dphi;
   vector<int>     *tree_Hemi;
   vector<int>     *tree_Hemi_njet;
   vector<float>   *tree_Hemi_eta;
   vector<float>   *tree_Hemi_phi;
   vector<float>   *tree_Hemi_dR;
   vector<int>     *tree_Hemi_nTrks;
   vector<int>     *tree_Hemi_nTrks_sig;
   vector<int>     *tree_Hemi_nTrks_bad;
   vector<int>     *tree_Hemi_LLP;
   vector<float>   *tree_Hemi_LLP_pt;
   vector<float>   *tree_Hemi_LLP_eta;
   vector<float>   *tree_Hemi_LLP_phi;
   vector<float>   *tree_Hemi_LLP_dist;
   vector<float>   *tree_Hemi_LLP_x;
   vector<float>   *tree_Hemi_LLP_y;
   vector<float>   *tree_Hemi_LLP_z;
   vector<int>     *tree_Hemi_Vtx_step;
   vector<float>   *tree_Hemi_Vtx_NChi2;
   vector<int>     *tree_Hemi_Vtx_nTrks;
   vector<int>     *tree_Hemi_Vtx_nTrks_sig;
   vector<int>     *tree_Hemi_Vtx_nTrks_bad;
   vector<float>   *tree_Hemi_Vtx_x;
   vector<float>   *tree_Hemi_Vtx_y;
   vector<float>   *tree_Hemi_Vtx_r;
   vector<float>   *tree_Hemi_Vtx_z;
   vector<float>   *tree_Hemi_Vtx_dist;
   vector<float>   *tree_Hemi_Vtx_dx;
   vector<float>   *tree_Hemi_Vtx_dy;
   vector<float>   *tree_Hemi_Vtx_dz;
   vector<float>   *tree_Hemi_Vtx_dr;
   vector<float>   *tree_Hemi_Vtx_dd;
   vector<float>   *tree_Hemi_dR12;
   vector<float>   *tree_Hemi_LLP_dR12;
   vector<float>   *tree_Hemi_Vtx_ddbad;
   vector<int>     *tree_Hemi_Vtx_ntrk10;
   vector<int>     *tree_Hemi_Vtx_ntrk20;
   vector<float>   *tree_Hemi_Vtx_ddToBkg;
   vector<bool>    *tree_Hemi_LLP_ping;
   vector<int>     *tree_event_LLP_ping;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v;
   Bool_t          HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v;
   Bool_t          HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v;
   Bool_t          HLT_Ele27_WPTight_Gsf_v;
   Bool_t          HLT_Ele32_WPTight_Gsf_v;
   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v;
   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight_v;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight_PFHT60_v;
   Bool_t          HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_v;
   Bool_t          HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v;
   Bool_t          HLT_PFMET250_HBHECleaned_v;
   Bool_t          HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_v;
   Bool_t          HLT_IsoMu24_v;
   Bool_t          HLT_IsoMu27_v;
   Bool_t          HLT_PFHT500_PFMET100_PFMHT100_IDTight_v;
   Bool_t          HLT_PFHT700_PFMET85_PFMHT85_IDTight_v;
   Bool_t          HLT_PFHT800_PFMET75_PFMHT75_IDTight_v;

   // List of branches
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_tree_nPV;   //!
   TBranch        *b_tree_PV_x;   //!
   TBranch        *b_tree_PV_y;   //!
   TBranch        *b_tree_PV_z;   //!
   TBranch        *b_tree_PV_ez;   //!
   TBranch        *b_tree_PV_NChi2;   //!
   TBranch        *b_tree_PV_ndf;   //!
   TBranch        *b_tree_allPV_i;   //!
   TBranch        *b_tree_allPV_x;   //!
   TBranch        *b_tree_allPV_y;   //!
   TBranch        *b_tree_allPV_z;   //!
   TBranch        *b_tree_allPV_ex;   //!
   TBranch        *b_tree_allPV_ey;   //!
   TBranch        *b_tree_allPV_ez;   //!
   TBranch        *b_tree_allPV_NChi2;   //!
   TBranch        *b_tree_allPV_ndf;   //!
   TBranch        *b_tree_bs_PosX;   //!
   TBranch        *b_tree_bs_PosY;   //!
   TBranch        *b_tree_bs_PosZ;   //!
   TBranch        *b_tree_NbrOfZCand;   //!
   TBranch        *b_tree_Filter;   //!
   TBranch        *b_tree_nK0;   //!
   TBranch        *b_tree_K0_x;   //!
   TBranch        *b_tree_K0_y;   //!
   TBranch        *b_tree_K0_z;   //!
   TBranch        *b_tree_K0_r;   //!
   TBranch        *b_tree_K0_NChi2;   //!
   TBranch        *b_tree_K0_ndf;   //!
   TBranch        *b_tree_K0_mass;   //!
   TBranch        *b_tree_K0_pt;   //!
   TBranch        *b_tree_K0_eta;   //!
   TBranch        *b_tree_K0_phi;   //!
   TBranch        *b_tree_K0_nDaughters;   //!
   TBranch        *b_tree_nLambda;   //!
   TBranch        *b_tree_L0_x;   //!
   TBranch        *b_tree_L0_y;   //!
   TBranch        *b_tree_L0_z;   //!
   TBranch        *b_tree_L0_r;   //!
   TBranch        *b_tree_L0_NChi2;   //!
   TBranch        *b_tree_L0_ndf;   //!
   TBranch        *b_tree_L0_nDaughters;   //!
   TBranch        *b_tree_L0_mass;   //!
   TBranch        *b_tree_L0_pt;   //!
   TBranch        *b_tree_L0_eta;   //!
   TBranch        *b_tree_L0_phi;   //!
   TBranch        *b_tree_nV0_reco;   //!
   TBranch        *b_tree_V0_reco_x;   //!
   TBranch        *b_tree_V0_reco_y;   //!
   TBranch        *b_tree_V0_reco_z;   //!
   TBranch        *b_tree_V0_reco_r;   //!
   TBranch        *b_tree_V0_reco_drSig;   //!
   TBranch        *b_tree_V0_reco_dzSig;   //!
   TBranch        *b_tree_V0_reco_angleXY;   //!
   TBranch        *b_tree_V0_reco_angleZ;   //!
   TBranch        *b_tree_V0_reco_NChi2;   //!
   TBranch        *b_tree_V0_reco_ndf;   //!
   TBranch        *b_tree_V0_reco_mass;   //!
   TBranch        *b_tree_V0_reco_pt;   //!
   TBranch        *b_tree_V0_reco_eta;   //!
   TBranch        *b_tree_V0_reco_phi;   //!
   TBranch        *b_tree_V0_reco_source;   //!
   TBranch        *b_tree_V0_reco_badTkHit;   //!
   TBranch        *b_tree_nSecInt;   //!
   TBranch        *b_tree_SecInt_x;   //!
   TBranch        *b_tree_SecInt_y;   //!
   TBranch        *b_tree_SecInt_z;   //!
   TBranch        *b_tree_SecInt_r;   //!
   TBranch        *b_tree_SecInt_drSig;   //!
   TBranch        *b_tree_SecInt_dzSig;   //!
   TBranch        *b_tree_SecInt_angleXY;   //!
   TBranch        *b_tree_SecInt_angleZ;   //!
   TBranch        *b_tree_SecInt_NChi2;   //!
   TBranch        *b_tree_SecInt_ndf;   //!
   TBranch        *b_tree_SecInt_mass;   //!
   TBranch        *b_tree_SecInt_pt;   //!
   TBranch        *b_tree_SecInt_eta;   //!
   TBranch        *b_tree_SecInt_phi;   //!
   TBranch        *b_tree_SecInt_charge;   //!
   TBranch        *b_tree_SecInt_badTkHit;   //!
   TBranch        *b_tree_SecInt_dca;   //!
   TBranch        *b_tree_SecInt_selec;   //!
   TBranch        *b_tree_SecInt_layer;   //!
   TBranch        *b_tree_SecInt_LLP;   //!
   TBranch        *b_tree_SecInt_LLP_dr;   //!
   TBranch        *b_tree_SecInt_LLP_dz;   //!
   TBranch        *b_tree_nYConv;   //!
   TBranch        *b_tree_Yc_x;   //!
   TBranch        *b_tree_Yc_y;   //!
   TBranch        *b_tree_Yc_z;   //!
   TBranch        *b_tree_Yc_r;   //!
   TBranch        *b_tree_Yc_dr0;   //!
   TBranch        *b_tree_Yc_dr1;   //!
   TBranch        *b_tree_Yc_dz0;   //!
   TBranch        *b_tree_Yc_dz1;   //!
   TBranch        *b_tree_Yc_costheta;   //!
   TBranch        *b_tree_Yc_layer;   //!
   TBranch        *b_tree_Yc_NChi2;   //!
   TBranch        *b_tree_Yc_ndf;   //!
   TBranch        *b_tree_Yc_nDaughters;   //!
   TBranch        *b_tree_Yc_pt;   //!
   TBranch        *b_tree_Yc_eta;   //!
   TBranch        *b_tree_Yc_phi;   //!
   TBranch        *b_tree_Yc_mass;   //!
   TBranch        *b_tree_Yc_ntracks;   //!
   TBranch        *b_tree_Yc_tracks_index;   //!
   TBranch        *b_tree_Yc_tracks_charge;   //!
   TBranch        *b_tree_Yc_tracks_pt;   //!
   TBranch        *b_tree_Yc_tracks_eta;   //!
   TBranch        *b_tree_Yc_tracks_phi;   //!
   TBranch        *b_tree_Yc_tracks_phi0;   //!
   TBranch        *b_tree_PFMet_et;   //!
   TBranch        *b_tree_PFMet_phi;   //!
   TBranch        *b_tree_PFMet_sig;   //!
   TBranch        *b_tree_njet;   //!
   TBranch        *b_tree_jet_E;   //!
   TBranch        *b_tree_jet_pt;   //!
   TBranch        *b_tree_jet_eta;   //!
   TBranch        *b_tree_jet_phi;   //!
   TBranch        *b_tree_jet_btag_DeepCSV;   //!
   TBranch        *b_tree_jet_btag_DeepJet;   //!
   TBranch        *b_tree_HT;   //!
   TBranch        *b_tree_electron_pt;   //!
   TBranch        *b_tree_electron_eta;   //!
   TBranch        *b_tree_electron_phi;   //!
   TBranch        *b_tree_electron_x;   //!
   TBranch        *b_tree_electron_y;   //!
   TBranch        *b_tree_electron_z;   //!
   TBranch        *b_tree_electron_energy;   //!
   TBranch        *b_tree_electron_charge;   //!
   TBranch        *b_tree_electron_isoR4;   //!
   TBranch        *b_tree_Mmumu;   //!
   TBranch        *b_tree_muon_pt;   //!
   TBranch        *b_tree_muon_eta;   //!
   TBranch        *b_tree_muon_phi;   //!
   TBranch        *b_tree_muon_x;   //!
   TBranch        *b_tree_muon_y;   //!
   TBranch        *b_tree_muon_z;   //!
   TBranch        *b_tree_muon_energy;   //!
   TBranch        *b_tree_muon_dxy;   //!
   TBranch        *b_tree_muon_dxyError;   //!
   TBranch        *b_tree_muon_dz;   //!
   TBranch        *b_tree_muon_dzError;   //!
   TBranch        *b_tree_muon_charge;   //!
   TBranch        *b_tree_muon_isLoose;   //!
   TBranch        *b_tree_muon_isTight;   //!
   TBranch        *b_tree_muon_isGlobal;   //!
   TBranch        *b_tree_muon_isoR3;   //!
   TBranch        *b_tree_nTracks;   //!
   TBranch        *b_tree_nLostTracks;   //!
   TBranch        *b_tree_track_ipc;   //!
   TBranch        *b_tree_track_lost;   //!
   TBranch        *b_tree_track_pt;   //!
   TBranch        *b_tree_track_eta;   //!
   TBranch        *b_tree_track_phi;   //!
   TBranch        *b_tree_track_charge;   //!
   TBranch        *b_tree_track_NChi2;   //!
   TBranch        *b_tree_track_isHighPurity;   //!
   TBranch        *b_tree_track_dxy;   //!
   TBranch        *b_tree_track_dxyError;   //!
   TBranch        *b_tree_track_drSig;   //!
   TBranch        *b_tree_track_dz;   //!
   TBranch        *b_tree_track_dzError;   //!
   TBranch        *b_tree_track_dzSig;   //!
   TBranch        *b_tree_track_dzTOpu;   //!
   TBranch        *b_tree_track_dzSigTOpu;   //!
   TBranch        *b_tree_track_algo;   //!
   TBranch        *b_tree_track_nHit;   //!
   TBranch        *b_tree_track_nHitPixel;   //!
   TBranch        *b_tree_track_nHitTIB;   //!
   TBranch        *b_tree_track_nHitTID;   //!
   TBranch        *b_tree_track_nHitTOB;   //!
   TBranch        *b_tree_track_nHitTEC;   //!
   TBranch        *b_tree_track_nHitPXB;   //!
   TBranch        *b_tree_track_nHitPXF;   //!
   TBranch        *b_tree_track_isHitPixel;   //!
   TBranch        *b_tree_track_nLayers;   //!
   TBranch        *b_tree_track_nLayersPixel;   //!
   TBranch        *b_tree_track_x;   //!
   TBranch        *b_tree_track_y;   //!
   TBranch        *b_tree_track_z;   //!
   TBranch        *b_tree_track_firstHit;   //!
   TBranch        *b_tree_track_region;   //!
   TBranch        *b_tree_track_firstHit_x;   //!
   TBranch        *b_tree_track_firstHit_y;   //!
   TBranch        *b_tree_track_firstHit_z;   //!
   TBranch        *b_tree_track_iJet;   //!
   TBranch        *b_tree_track_ntrk10;   //!
   TBranch        *b_tree_track_ntrk20;   //!
   TBranch        *b_tree_track_ntrk30;   //!
   TBranch        *b_tree_track_ntrk40;   //!
   TBranch        *b_tree_track_MVAval;   //!
   TBranch        *b_tree_track_Hemi;   //!
   TBranch        *b_tree_track_Hemi_dR;   //!
   TBranch        *b_tree_track_Hemi_mva_NChi2;   //!
   TBranch        *b_tree_track_Hemi_ping;   //!
   TBranch        *b_tree_track_Hemi_dFirstVtx;   //!
   TBranch        *b_tree_track_Hemi_LLP;   //!
   TBranch        *b_tree_track_sim_LLP;   //!
   TBranch        *b_tree_track_sim_isFromB;   //!
   TBranch        *b_tree_track_sim_isFromC;   //!
   TBranch        *b_tree_track_sim_pt;   //!
   TBranch        *b_tree_track_sim_eta;   //!
   TBranch        *b_tree_track_sim_phi;   //!
   TBranch        *b_tree_track_sim_charge;   //!
   TBranch        *b_tree_track_sim_pdgId;   //!
   TBranch        *b_tree_track_sim_mass;   //!
   TBranch        *b_tree_track_sim_x;   //!
   TBranch        *b_tree_track_sim_y;   //!
   TBranch        *b_tree_track_sim_z;   //!
   TBranch        *b_tree_track_sim_dFirstGen;   //!
   TBranch        *b_tree_track_sim_LLP_r;   //!
   TBranch        *b_tree_track_sim_LLP_z;   //!
   TBranch        *b_tree_GenPVx;   //!
   TBranch        *b_tree_GenPVy;   //!
   TBranch        *b_tree_GenPVz;   //!
   TBranch        *b_tree_genParticle_pt;   //!
   TBranch        *b_tree_genParticle_eta;   //!
   TBranch        *b_tree_genParticle_phi;   //!
   TBranch        *b_tree_genParticle_charge;   //!
   TBranch        *b_tree_genParticle_pdgId;   //!
   TBranch        *b_tree_genParticle_mass;   //!
   TBranch        *b_tree_genParticle_x;   //!
   TBranch        *b_tree_genParticle_y;   //!
   TBranch        *b_tree_genParticle_z;   //!
   TBranch        *b_tree_genParticle_statusCode;   //!
   TBranch        *b_tree_genParticle_mother_pdgId;   //!
   TBranch        *b_tree_genParticle_LLP;   //!
   TBranch        *b_tree_ngenPackPart;   //!
   TBranch        *b_tree_genPackPart_pt;   //!
   TBranch        *b_tree_genPackPart_eta;   //!
   TBranch        *b_tree_genPackPart_phi;   //!
   TBranch        *b_tree_genPackPart_charge;   //!
   TBranch        *b_tree_genPackPart_pdgId;   //!
   TBranch        *b_tree_genPackPart_mass;   //!
   TBranch        *b_tree_genPackPart_x;   //!
   TBranch        *b_tree_genPackPart_y;   //!
   TBranch        *b_tree_genPackPart_z;   //!
   TBranch        *b_tree_genPackPart_mother_pdgId;   //!
   TBranch        *b_tree_genPackPart_isFromB;   //!
   TBranch        *b_tree_genPackPart_isFromC;   //!
   TBranch        *b_tree_ngenFromLLP;   //!
   TBranch        *b_tree_genFromLLP_LLP;   //!
   TBranch        *b_tree_genFromLLP_pt;   //!
   TBranch        *b_tree_genFromLLP_eta;   //!
   TBranch        *b_tree_genFromLLP_phi;   //!
   TBranch        *b_tree_genFromLLP_charge;   //!
   TBranch        *b_tree_genFromLLP_pdgId;   //!
   TBranch        *b_tree_genFromLLP_mass;   //!
   TBranch        *b_tree_genFromLLP_x;   //!
   TBranch        *b_tree_genFromLLP_y;   //!
   TBranch        *b_tree_genFromLLP_z;   //!
   TBranch        *b_tree_genFromLLP_mother_pdgId;   //!
   TBranch        *b_tree_genFromLLP_isFromB;   //!
   TBranch        *b_tree_genFromLLP_isFromC;   //!
   TBranch        *b_tree_genAxis_dRneuneu;   //!
   TBranch        *b_tree_nFromC;   //!
   TBranch        *b_tree_genFromC_pt;   //!
   TBranch        *b_tree_genFromC_eta;   //!
   TBranch        *b_tree_genFromC_phi;   //!
   TBranch        *b_tree_genFromC_charge;   //!
   TBranch        *b_tree_genFromC_pdgId;   //!
   TBranch        *b_tree_genFromC_x;   //!
   TBranch        *b_tree_genFromC_y;   //!
   TBranch        *b_tree_genFromC_z;   //!
   TBranch        *b_tree_genFromC_mother_pdgId;   //!
   TBranch        *b_tree_nFromB;   //!
   TBranch        *b_tree_genFromB_pt;   //!
   TBranch        *b_tree_genFromB_eta;   //!
   TBranch        *b_tree_genFromB_phi;   //!
   TBranch        *b_tree_genFromB_charge;   //!
   TBranch        *b_tree_genFromB_pdgId;   //!
   TBranch        *b_tree_genFromB_x;   //!
   TBranch        *b_tree_genFromB_y;   //!
   TBranch        *b_tree_genFromB_z;   //!
   TBranch        *b_tree_genFromB_mother_pdgId;   //!
   TBranch        *b_tree_genJet_pt;   //!
   TBranch        *b_tree_genJet_eta;   //!
   TBranch        *b_tree_genJet_phi;   //!
   TBranch        *b_tree_genJet_mass;   //!
   TBranch        *b_tree_genJet_energy;   //!
   TBranch        *b_tree_nLLP;   //!
   TBranch        *b_tree_LLP;   //!
   TBranch        *b_tree_LLP_pt;   //!
   TBranch        *b_tree_LLP_eta;   //!
   TBranch        *b_tree_LLP_phi;   //!
   TBranch        *b_tree_LLP_x;   //!
   TBranch        *b_tree_LLP_y;   //!
   TBranch        *b_tree_LLP_z;   //!
   TBranch        *b_tree_LLP_dist;   //!
   TBranch        *b_tree_LLP_nTrks;   //!
   TBranch        *b_tree_LLP_Vtx_nTrks;   //!
   TBranch        *b_tree_LLP_Vtx_NChi2;   //!
   TBranch        *b_tree_LLP_Vtx_dx;   //!
   TBranch        *b_tree_LLP_Vtx_dy;   //!
   TBranch        *b_tree_LLP_Vtx_dz;   //!
   TBranch        *b_tree_LLP_Vtx_dist;   //!
   TBranch        *b_tree_LLP_Vtx_dd;   //!
   TBranch        *b_tree_LLP12_dR;   //!
   TBranch        *b_tree_LLP12_deta;   //!
   TBranch        *b_tree_LLP12_dphi;   //!
   TBranch        *b_tree_Hemi;   //!
   TBranch        *b_tree_Hemi_njet;   //!
   TBranch        *b_tree_Hemi_eta;   //!
   TBranch        *b_tree_Hemi_phi;   //!
   TBranch        *b_tree_Hemi_dR;   //!
   TBranch        *b_tree_Hemi_nTrks;   //!
   TBranch        *b_tree_Hemi_nTrks_sig;   //!
   TBranch        *b_tree_Hemi_nTrks_bad;   //!
   TBranch        *b_tree_Hemi_LLP;   //!
   TBranch        *b_tree_Hemi_LLP_pt;   //!
   TBranch        *b_tree_Hemi_LLP_eta;   //!
   TBranch        *b_tree_Hemi_LLP_phi;   //!
   TBranch        *b_tree_Hemi_LLP_dist;   //!
   TBranch        *b_tree_Hemi_LLP_x;   //!
   TBranch        *b_tree_Hemi_LLP_y;   //!
   TBranch        *b_tree_Hemi_LLP_z;   //!
   TBranch        *b_tree_Hemi_Vtx_step;   //!
   TBranch        *b_tree_Hemi_Vtx_NChi2;   //!
   TBranch        *b_tree_Hemi_Vtx_nTrks;   //!
   TBranch        *b_tree_Hemi_Vtx_nTrks_sig;   //!
   TBranch        *b_tree_Hemi_Vtx_nTrks_bad;   //!
   TBranch        *b_tree_Hemi_Vtx_x;   //!
   TBranch        *b_tree_Hemi_Vtx_y;   //!
   TBranch        *b_tree_Hemi_Vtx_r;   //!
   TBranch        *b_tree_Hemi_Vtx_z;   //!
   TBranch        *b_tree_Hemi_Vtx_dist;   //!
   TBranch        *b_tree_Hemi_Vtx_dx;   //!
   TBranch        *b_tree_Hemi_Vtx_dy;   //!
   TBranch        *b_tree_Hemi_Vtx_dz;   //!
   TBranch        *b_tree_Hemi_Vtx_dr;   //!
   TBranch        *b_tree_Hemi_Vtx_dd;   //!
   TBranch        *b_tree_Hemi_dR12;   //!
   TBranch        *b_tree_Hemi_LLP_dR12;   //!
   TBranch        *b_tree_Hemi_Vtx_ddbad;   //!
   TBranch        *b_tree_Hemi_Vtx_ntrk10;   //!
   TBranch        *b_tree_Hemi_Vtx_ntrk20;   //!
   TBranch        *b_tree_Hemi_Vtx_ddToBkg;   //!
   TBranch        *b_tree_Hemi_LLP_ping;   //!
   TBranch        *b_tree_event_LLP_ping;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v;   //!
   TBranch        *b_HLT_Ele27_WPTight_Gsf_v;   //!
   TBranch        *b_HLT_Ele32_WPTight_Gsf_v;   //!
   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v;   //!
   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight_v;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight_PFHT60_v;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_v;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v;   //!
   TBranch        *b_HLT_PFMET250_HBHECleaned_v;   //!
   TBranch        *b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_v;   //!
   TBranch        *b_HLT_IsoMu24_v;   //!
   TBranch        *b_HLT_IsoMu27_v;   //!
   TBranch        *b_HLT_PFHT500_PFMET100_PFMHT100_IDTight_v;   //!
   TBranch        *b_HLT_PFHT700_PFMET85_PFMHT85_IDTight_v;   //!
   TBranch        *b_HLT_PFHT800_PFMET75_PFMHT75_IDTight_v;   //!

   TreeReader(TTree *tree=0);
   TreeReader(TString inputfilename, TTree *tree, TString theSampleName);
   virtual ~TreeReader();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   //Own variables added :------------------------//
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
   int nSBr0 = 0;
   int nSBr1 = 0;
   int nSBr2 = 0;
   int nSBr3 = 0;
   int nSBr4 = 0;
   int nBBr2 = 0;
   int ntotjet = 0;
   int nEntriesBkg = 0;
   TTree * treeS;
   TTree * treeB;

   float mva_track_firstHit_x = -1000 ;
   float mva_track_firstHit_y =-1000;
   float mva_track_firstHit_z =-1000 ;
   float mva_track_dxy  = -1000;
   float mva_track_dxyError = -1000;
   float mva_track_dz =-1000 ;
   float mva_track_dzError = -1000;
   float mva_track_pt = -1000;
   float mva_track_eta = -1000;
   float mva_track_phi =-1000 ;
   float mva_track_nchi2 =-1000;
   float mva_track_nhits =-1000 ;
   float mva_track_isTight =-1000 ;
   float mva_track_isHighQuality = -1000;
   float mva_track_numberOfValidPixelHits =-1000;
   float mva_track_numberOfValidStripHits =-1000 ;
   float mva_track_isinjet =-1000 ;
   float mva_track_algo =-1000 ;

   //added variables by Paul (during internship 2022 on reco datatier )

   float mva_ntrk10 =-1000; 
   float mva_ntrk20 =-1000 ; 
   float mva_ntrk30 =-1000 ; 
   float mva_ntrk40 = -1000;
   float mva_ntrk1020 = -1000;
   float mva_ntrk2030 =-1000;
   float mva_drSig =-1000 ;
   float mva_dzSig = -1000;
   float mva_ddSig = -1000;
   float mva_dd =-1000 ;
   float mva_ValTIBHit =-1000;
   float mva_ValTOBHit =-1000 ;
   float mva_ValPixBarHit = -1000;
   float mva_nValTECHHit =-1000; 
   float mva_ntrk40XX = -1000;
   float mva_track_dR = -1000;
   float mva_track_dRmax = -1000;
   float mva_track_hitpattern = -1000;
   float mva_track_region =-1000 ;
   

//Added 10/02/2023 on MiniAOD datatier (1st year thesis)
   //HT
   float mva_HT=-1000;
   //PFMet
   float mva_MET_et=-1000;
   //jet-------------------------
   float mva_jet_nbr=-1000;
   float mva_jet_btag=-1000;
   //tracks---------------
   float mva_track_lost=-1000;
   //muon---------
   float mva_muon_pt=-1000;
   float mva_muon_eta=-1000;
   float mva_muon_phi=-1000;
   float mva_muon_energy=-1000;
   float mva_muon_isGlobal=-1000;
   float mva_muon_isoR3=-1000;
   float mva_muon_Mmumu=-1000;

   float mva_track_dzTOpu;
   float mva_track_dzSigTOpu;

   void LoadTreeSizes(TreeFormat theFormat);
   void LoadPFJetSize(TreeFormat theFormat);
   int LoadPVSize(TreeFormat theFormat);
};

#endif

#ifdef TreeReader_cxx
TreeReader::TreeReader(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Ntuple_50_test.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/opt/sbg/cms/ui2_data1/pvaucell/CMSSW_10_6_20_FLY/src/FlyingTop/FlyingTop/test/Ntuple_50_test.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/opt/sbg/cms/ui2_data1/pvaucell/CMSSW_10_6_20_FLY/src/FlyingTop/FlyingTop/test/Ntuple_50_test.root:/FlyingTop");
      dir->GetObject("ttree",tree);


   }

      //MINIAOD:
   // /opt/sbg/cms/ui2_data1/pvaucell/CMSSW_10_6_20_FLY/src/FlyingTop/FlyingTop/test/MINIAODSIM_v16_L1v1_1.root:/FlyingTop (50cm)
   // /opt/sbg/cms/ui2_data1/pvaucell/CMSSW_10_6_20_FLY/src/FlyingTop/FlyingTop/test/Ntuple.root:/FlyingTop
   // /opt/sbg/cms/ui2_data1/pvaucell/CMSSW_10_6_20_FLY/src/FlyingTop/FlyingTop/test/Ntuple_Daniel.root:/FlyingTop
   // Ntuple_50cm_TTNI_Treader_input.root
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
  
   outputfile = new TFile("output_50.root", "recreate");
   // outputfile = new TFile("output50_TTNI_MINI.root", "recreate");
    
   // theHistoManager->addHisto("MuonPt",      "noSel", "all", sampleName.Data(), 100, 0, 200);
   // theHistoManager->addHisto("FirstHitX_notDisplaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   // theHistoManager->addHisto("FirstHitY_notDisplaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   // theHistoManager->addHisto("FirstHitZ_notDisplaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   // theHistoManager->addHisto("FirstHitDist_notDisplaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);

   // theHistoManager->addHisto("FirstHitX_Displaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   // theHistoManager->addHisto("FirstHitY_Displaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   // theHistoManager->addHisto("FirstHitZ_Displaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   // theHistoManager->addHisto("FirstHitDist_Displaced",   "noSel", "all", sampleName.Data(), 100, 0, 80);
   // //Paul : potentially add histograms to check if what is computed in 
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
//    tree_allPV_i = 0;
//    tree_allPV_x = 0;
//    tree_allPV_y = 0;
//    tree_allPV_z = 0;
//    tree_allPV_ex = 0;
//    tree_allPV_ey = 0;
//    tree_allPV_ez = 0;
//    tree_allPV_NChi2 = 0;
//    tree_allPV_ndf = 0;
//    tree_K0_x = 0;
//    tree_K0_y = 0;
//    tree_K0_z = 0;
//    tree_K0_r = 0;
//    tree_K0_NChi2 = 0;
//    tree_K0_ndf = 0;
//    tree_K0_mass = 0;
//    tree_K0_pt = 0;
//    tree_K0_eta = 0;
//    tree_K0_phi = 0;
//    tree_K0_nDaughters = 0;
//    tree_L0_x = 0;
//    tree_L0_y = 0;
//    tree_L0_z = 0;
//    tree_L0_r = 0;
//    tree_L0_NChi2 = 0;
//    tree_L0_ndf = 0;
//    tree_L0_nDaughters = 0;
//    tree_L0_mass = 0;
//    tree_L0_pt = 0;
//    tree_L0_eta = 0;
//    tree_L0_phi = 0;
//    tree_V0_reco_x = 0;
//    tree_V0_reco_y = 0;
//    tree_V0_reco_z = 0;
//    tree_V0_reco_r = 0;
//    tree_V0_reco_drSig = 0;
//    tree_V0_reco_dzSig = 0;
//    tree_V0_reco_angleXY = 0;
//    tree_V0_reco_angleZ = 0;
//    tree_V0_reco_NChi2 = 0;
//    tree_V0_reco_ndf = 0;
//    tree_V0_reco_mass = 0;
//    tree_V0_reco_pt = 0;
//    tree_V0_reco_eta = 0;
//    tree_V0_reco_phi = 0;
//    tree_V0_reco_source = 0;
//    tree_V0_reco_badTkHit = 0;
//    tree_SecInt_x = 0;
//    tree_SecInt_y = 0;
//    tree_SecInt_z = 0;
//    tree_SecInt_r = 0;
//    tree_SecInt_drSig = 0;
//    tree_SecInt_dzSig = 0;
//    tree_SecInt_angleXY = 0;
//    tree_SecInt_angleZ = 0;
//    tree_SecInt_NChi2 = 0;
//    tree_SecInt_ndf = 0;
//    tree_SecInt_mass = 0;
//    tree_SecInt_pt = 0;
//    tree_SecInt_eta = 0;
//    tree_SecInt_phi = 0;
//    tree_SecInt_charge = 0;
//    tree_SecInt_badTkHit = 0;
//    tree_SecInt_dca = 0;
//    tree_SecInt_selec = 0;
//    tree_SecInt_layer = 0;
//    tree_SecInt_LLP = 0;
//    tree_SecInt_LLP_dr = 0;
//    tree_SecInt_LLP_dz = 0;
//    tree_Yc_x = 0;
//    tree_Yc_y = 0;
//    tree_Yc_z = 0;
//    tree_Yc_r = 0;
//    tree_Yc_dr0 = 0;
//    tree_Yc_dr1 = 0;
//    tree_Yc_dz0 = 0;
//    tree_Yc_dz1 = 0;
//    tree_Yc_costheta = 0;
//    tree_Yc_layer = 0;
//    tree_Yc_NChi2 = 0;
//    tree_Yc_ndf = 0;
//    tree_Yc_nDaughters = 0;
//    tree_Yc_pt = 0;
//    tree_Yc_eta = 0;
//    tree_Yc_phi = 0;
//    tree_Yc_mass = 0;
//    tree_Yc_tracks_index = 0;
//    tree_Yc_tracks_charge = 0;
//    tree_Yc_tracks_pt = 0;
//    tree_Yc_tracks_eta = 0;
//    tree_Yc_tracks_phi = 0;
//    tree_Yc_tracks_phi0 = 0;
//    tree_jet_E = 0;
//    tree_jet_pt = 0;
//    tree_jet_eta = 0;
//    tree_jet_phi = 0;
//    tree_jet_btag_DeepCSV = 0;
//    tree_jet_btag_DeepJet = 0;
//    tree_electron_pt = 0;
//    tree_electron_eta = 0;
//    tree_electron_phi = 0;
//    tree_electron_x = 0;
//    tree_electron_y = 0;
//    tree_electron_z = 0;
//    tree_electron_energy = 0;
//    tree_electron_charge = 0;
//    tree_electron_isoR4 = 0;
//    tree_muon_pt = 0;
//    tree_muon_eta = 0;
//    tree_muon_phi = 0;
//    tree_muon_x = 0;
//    tree_muon_y = 0;
//    tree_muon_z = 0;
//    tree_muon_energy = 0;
//    tree_muon_dxy = 0;
//    tree_muon_dxyError = 0;
//    tree_muon_dz = 0;
//    tree_muon_dzError = 0;
//    tree_muon_charge = 0;
//    tree_muon_isLoose = 0;
//    tree_muon_isTight = 0;
//    tree_muon_isGlobal = 0;
//    tree_muon_isoR3 = 0;
//    tree_track_ipc = 0;
//    tree_track_lost = 0;
//    tree_track_pt = 0;
//    tree_track_eta = 0;
//    tree_track_phi = 0;
//    tree_track_charge = 0;
//    tree_track_NChi2 = 0;
//    tree_track_isHighPurity = 0;
//    tree_track_dxy = 0;
//    tree_track_dxyError = 0;
//    tree_track_drSig = 0;
//    tree_track_dz = 0;
//    tree_track_dzError = 0;
//    tree_track_dzSig = 0;
//    tree_track_dzTOpu = 0;
//    tree_track_dzSigTOpu = 0;
//    tree_track_algo = 0;
//    tree_track_nHit = 0;
//    tree_track_nHitPixel = 0;
//    tree_track_nHitTIB = 0;
//    tree_track_nHitTID = 0;
//    tree_track_nHitTOB = 0;
//    tree_track_nHitTEC = 0;
//    tree_track_nHitPXB = 0;
//    tree_track_nHitPXF = 0;
//    tree_track_isHitPixel = 0;
//    tree_track_nLayers = 0;
//    tree_track_nLayersPixel = 0;
//    tree_track_x = 0;
//    tree_track_y = 0;
//    tree_track_z = 0;
//    tree_track_firstHit = 0;
//    tree_track_region = 0;
//    tree_track_firstHit_x = 0;
//    tree_track_firstHit_y = 0;
//    tree_track_firstHit_z = 0;
//    tree_track_iJet = 0;
//    tree_track_ntrk10 = 0;
//    tree_track_ntrk20 = 0;
//    tree_track_ntrk30 = 0;
//    tree_track_ntrk40 = 0;
//    tree_track_MVAval = 0;
//    tree_track_Hemi = 0;
//    tree_track_Hemi_dR = 0;
//    tree_track_Hemi_mva_NChi2 = 0;
//    tree_track_Hemi_ping = 0;
//    tree_track_Hemi_dFirstVtx = 0;
//    tree_track_Hemi_LLP = 0;
//    tree_track_sim_LLP = 0;
//    tree_track_sim_isFromB = 0;
//    tree_track_sim_isFromC = 0;
//    tree_track_sim_pt = 0;
//    tree_track_sim_eta = 0;
//    tree_track_sim_phi = 0;
//    tree_track_sim_charge = 0;
//    tree_track_sim_pdgId = 0;
//    tree_track_sim_mass = 0;
//    tree_track_sim_x = 0;
//    tree_track_sim_y = 0;
//    tree_track_sim_z = 0;
//    tree_track_sim_dFirstGen = 0;
//    tree_track_sim_LLP_r = 0;
//    tree_track_sim_LLP_z = 0;
//    tree_genParticle_pt = 0;
//    tree_genParticle_eta = 0;
//    tree_genParticle_phi = 0;
//    tree_genParticle_charge = 0;
//    tree_genParticle_pdgId = 0;
//    tree_genParticle_mass = 0;
//    tree_genParticle_x = 0;
//    tree_genParticle_y = 0;
//    tree_genParticle_z = 0;
//    tree_genParticle_statusCode = 0;
//    tree_genParticle_mother_pdgId = 0;
//    tree_genParticle_LLP = 0;
//    tree_genPackPart_pt = 0;
//    tree_genPackPart_eta = 0;
//    tree_genPackPart_phi = 0;
//    tree_genPackPart_charge = 0;
//    tree_genPackPart_pdgId = 0;
//    tree_genPackPart_mass = 0;
//    tree_genPackPart_x = 0;
//    tree_genPackPart_y = 0;
//    tree_genPackPart_z = 0;
//    tree_genPackPart_mother_pdgId = 0;
//    tree_genPackPart_isFromB = 0;
//    tree_genPackPart_isFromC = 0;
//    tree_genFromLLP_LLP = 0;
//    tree_genFromLLP_pt = 0;
//    tree_genFromLLP_eta = 0;
//    tree_genFromLLP_phi = 0;
//    tree_genFromLLP_charge = 0;
//    tree_genFromLLP_pdgId = 0;
//    tree_genFromLLP_mass = 0;
//    tree_genFromLLP_x = 0;
//    tree_genFromLLP_y = 0;
//    tree_genFromLLP_z = 0;
//    tree_genFromLLP_mother_pdgId = 0;
//    tree_genFromLLP_isFromB = 0;
//    tree_genFromLLP_isFromC = 0;
//    tree_genAxis_dRneuneu = 0;
//    tree_genFromC_pt = 0;
//    tree_genFromC_eta = 0;
//    tree_genFromC_phi = 0;
//    tree_genFromC_charge = 0;
//    tree_genFromC_pdgId = 0;
//    tree_genFromC_x = 0;
//    tree_genFromC_y = 0;
//    tree_genFromC_z = 0;
//    tree_genFromC_mother_pdgId = 0;
//    tree_genFromB_pt = 0;
//    tree_genFromB_eta = 0;
//    tree_genFromB_phi = 0;
//    tree_genFromB_charge = 0;
//    tree_genFromB_pdgId = 0;
//    tree_genFromB_x = 0;
//    tree_genFromB_y = 0;
//    tree_genFromB_z = 0;
//    tree_genFromB_mother_pdgId = 0;
//    tree_genJet_pt = 0;
//    tree_genJet_eta = 0;
//    tree_genJet_phi = 0;
//    tree_genJet_mass = 0;
//    tree_genJet_energy = 0;
//    tree_LLP = 0;
//    tree_LLP_pt = 0;
//    tree_LLP_eta = 0;
//    tree_LLP_phi = 0;
//    tree_LLP_x = 0;
//    tree_LLP_y = 0;
//    tree_LLP_z = 0;
//    tree_LLP_dist = 0;
//    tree_LLP_nTrks = 0;
//    tree_LLP_Vtx_nTrks = 0;
//    tree_LLP_Vtx_NChi2 = 0;
//    tree_LLP_Vtx_dx = 0;
//    tree_LLP_Vtx_dy = 0;
//    tree_LLP_Vtx_dz = 0;
//    tree_LLP_Vtx_dist = 0;
//    tree_LLP_Vtx_dd = 0;
//    tree_LLP12_dR = 0;
//    tree_LLP12_deta = 0;
//    tree_LLP12_dphi = 0;
//    tree_Hemi = 0;
//    tree_Hemi_njet = 0;
//    tree_Hemi_eta = 0;
//    tree_Hemi_phi = 0;
//    tree_Hemi_dR = 0;
//    tree_Hemi_nTrks = 0;
//    tree_Hemi_nTrks_sig = 0;
//    tree_Hemi_nTrks_bad = 0;
//    tree_Hemi_LLP = 0;
//    tree_Hemi_LLP_pt = 0;
//    tree_Hemi_LLP_eta = 0;
//    tree_Hemi_LLP_phi = 0;
//    tree_Hemi_LLP_dist = 0;
//    tree_Hemi_LLP_x = 0;
//    tree_Hemi_LLP_y = 0;
//    tree_Hemi_LLP_z = 0;
//    tree_Hemi_Vtx_step = 0;
//    tree_Hemi_Vtx_NChi2 = 0;
//    tree_Hemi_Vtx_nTrks = 0;
//    tree_Hemi_Vtx_nTrks_sig = 0;
//    tree_Hemi_Vtx_nTrks_bad = 0;
//    tree_Hemi_Vtx_x = 0;
//    tree_Hemi_Vtx_y = 0;
//    tree_Hemi_Vtx_r = 0;
//    tree_Hemi_Vtx_z = 0;
//    tree_Hemi_Vtx_dist = 0;
//    tree_Hemi_Vtx_dx = 0;
//    tree_Hemi_Vtx_dy = 0;
//    tree_Hemi_Vtx_dz = 0;
//    tree_Hemi_Vtx_dr = 0;
//    tree_Hemi_Vtx_dd = 0;
//    tree_Hemi_dR12 = 0;
//    tree_Hemi_LLP_dR12 = 0;
//    tree_Hemi_Vtx_ddbad = 0;
//    tree_Hemi_Vtx_ntrk10 = 0;
//    tree_Hemi_Vtx_ntrk20 = 0;
//    tree_Hemi_Vtx_ddToBkg = 0;
//    tree_Hemi_LLP_ping = 0;
//    tree_event_LLP_ping = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("lumiBlock", &lumiBlock, &b_lumiBlock);
   fChain->SetBranchAddress("tree_nPV", &theFormat.tree_nPV, &theFormat.b_tree_nPV);
   fChain->SetBranchAddress("tree_PV_x", &theFormat.tree_PV_x, &theFormat.b_tree_PV_x);
   fChain->SetBranchAddress("tree_PV_y", &theFormat.tree_PV_y, &theFormat.b_tree_PV_y);
   fChain->SetBranchAddress("tree_PV_z", &theFormat.tree_PV_z, &theFormat.b_tree_PV_z);
   fChain->SetBranchAddress("tree_PV_ez", &theFormat.tree_PV_ez, &theFormat.b_tree_PV_ez);
   fChain->SetBranchAddress("tree_PV_NChi2", &theFormat.tree_PV_NChi2, &theFormat.b_tree_PV_NChi2);
   fChain->SetBranchAddress("tree_PV_ndf", &theFormat.tree_PV_ndf, &theFormat.b_tree_PV_ndf);
   fChain->SetBranchAddress("tree_allPV_i", &theFormat.tree_allPV_i, &theFormat.b_tree_allPV_i);
   fChain->SetBranchAddress("tree_allPV_x", &theFormat.tree_allPV_x, &theFormat.b_tree_allPV_x);
   fChain->SetBranchAddress("tree_allPV_y", &theFormat.tree_allPV_y, &theFormat.b_tree_allPV_y);
   fChain->SetBranchAddress("tree_allPV_z", &theFormat.tree_allPV_z, &theFormat.b_tree_allPV_z);
   fChain->SetBranchAddress("tree_allPV_ex", &theFormat.tree_allPV_ex, &theFormat.b_tree_allPV_ex);
   fChain->SetBranchAddress("tree_allPV_ey", &theFormat.tree_allPV_ey, &theFormat.b_tree_allPV_ey);
   fChain->SetBranchAddress("tree_allPV_ez", &theFormat.tree_allPV_ez, &theFormat.b_tree_allPV_ez);
   fChain->SetBranchAddress("tree_allPV_NChi2", &theFormat.tree_allPV_NChi2, &theFormat.b_tree_allPV_NChi2);
   fChain->SetBranchAddress("tree_allPV_ndf", &theFormat.tree_allPV_ndf, &theFormat.b_tree_allPV_ndf);
   fChain->SetBranchAddress("tree_bs_PosX", &theFormat.tree_bs_PosX, &theFormat.b_tree_bs_PosX);
   fChain->SetBranchAddress("tree_bs_PosY", &theFormat.tree_bs_PosY, &theFormat.b_tree_bs_PosY);
   fChain->SetBranchAddress("tree_bs_PosZ", &theFormat.tree_bs_PosZ, &theFormat.b_tree_bs_PosZ);
   fChain->SetBranchAddress("tree_NbrOfZCand", &theFormat.tree_NbrOfZCand, &theFormat.b_tree_NbrOfZCand);
   fChain->SetBranchAddress("tree_Filter", &theFormat.tree_Filter, &theFormat.b_tree_Filter);
   fChain->SetBranchAddress("tree_nK0", &theFormat.tree_nK0, &theFormat.b_tree_nK0);
   fChain->SetBranchAddress("tree_K0_x", &theFormat.tree_K0_x, &theFormat.b_tree_K0_x);
   fChain->SetBranchAddress("tree_K0_y", &theFormat.tree_K0_y, &theFormat.b_tree_K0_y);
   fChain->SetBranchAddress("tree_K0_z", &theFormat.tree_K0_z, &theFormat.b_tree_K0_z);
   fChain->SetBranchAddress("tree_K0_r", &theFormat.tree_K0_r, &theFormat.b_tree_K0_r);
   fChain->SetBranchAddress("tree_K0_NChi2", &theFormat.tree_K0_NChi2, &theFormat.b_tree_K0_NChi2);
   fChain->SetBranchAddress("tree_K0_ndf", &theFormat.tree_K0_ndf, &theFormat.b_tree_K0_ndf);
   fChain->SetBranchAddress("tree_K0_mass", &theFormat.tree_K0_mass, &theFormat.b_tree_K0_mass);
   fChain->SetBranchAddress("tree_K0_pt", &theFormat.tree_K0_pt, &theFormat.b_tree_K0_pt);
   fChain->SetBranchAddress("tree_K0_eta", &theFormat.tree_K0_eta, &theFormat.b_tree_K0_eta);
   fChain->SetBranchAddress("tree_K0_phi", &theFormat.tree_K0_phi, &theFormat.b_tree_K0_phi);
   fChain->SetBranchAddress("tree_K0_nDaughters", &theFormat.tree_K0_nDaughters, &theFormat.b_tree_K0_nDaughters);
   fChain->SetBranchAddress("tree_nLambda", &theFormat.tree_nLambda, &theFormat.b_tree_nLambda);
   fChain->SetBranchAddress("tree_L0_x", &theFormat.tree_L0_x, &theFormat.b_tree_L0_x);
   fChain->SetBranchAddress("tree_L0_y", &theFormat.tree_L0_y, &theFormat.b_tree_L0_y);
   fChain->SetBranchAddress("tree_L0_z", &theFormat.tree_L0_z, &theFormat.b_tree_L0_z);
   fChain->SetBranchAddress("tree_L0_r", &theFormat.tree_L0_r, &theFormat.b_tree_L0_r);
   fChain->SetBranchAddress("tree_L0_NChi2", &theFormat.tree_L0_NChi2, &theFormat.b_tree_L0_NChi2);
   fChain->SetBranchAddress("tree_L0_ndf", &theFormat.tree_L0_ndf, &theFormat.b_tree_L0_ndf);
   fChain->SetBranchAddress("tree_L0_nDaughters", &theFormat.tree_L0_nDaughters, &theFormat.b_tree_L0_nDaughters);
   fChain->SetBranchAddress("tree_L0_mass", &theFormat.tree_L0_mass, &theFormat.b_tree_L0_mass);
   fChain->SetBranchAddress("tree_L0_pt", &theFormat.tree_L0_pt, &theFormat.b_tree_L0_pt);
   fChain->SetBranchAddress("tree_L0_eta", &theFormat.tree_L0_eta, &theFormat.b_tree_L0_eta);
   fChain->SetBranchAddress("tree_L0_phi", &theFormat.tree_L0_phi, &theFormat.b_tree_L0_phi);
   fChain->SetBranchAddress("tree_nV0_reco", &theFormat.tree_nV0_reco, &theFormat.b_tree_nV0_reco);
   fChain->SetBranchAddress("tree_V0_reco_x", &theFormat.tree_V0_reco_x, &theFormat.b_tree_V0_reco_x);
   fChain->SetBranchAddress("tree_V0_reco_y", &theFormat.tree_V0_reco_y, &theFormat.b_tree_V0_reco_y);
   fChain->SetBranchAddress("tree_V0_reco_z", &theFormat.tree_V0_reco_z, &theFormat.b_tree_V0_reco_z);
   fChain->SetBranchAddress("tree_V0_reco_r", &theFormat.tree_V0_reco_r, &theFormat.b_tree_V0_reco_r);
   fChain->SetBranchAddress("tree_V0_reco_drSig", &theFormat.tree_V0_reco_drSig, &theFormat.b_tree_V0_reco_drSig);
   fChain->SetBranchAddress("tree_V0_reco_dzSig", &theFormat.tree_V0_reco_dzSig, &theFormat.b_tree_V0_reco_dzSig);
   fChain->SetBranchAddress("tree_V0_reco_angleXY", &theFormat.tree_V0_reco_angleXY, &theFormat.b_tree_V0_reco_angleXY);
   fChain->SetBranchAddress("tree_V0_reco_angleZ", &theFormat.tree_V0_reco_angleZ, &theFormat.b_tree_V0_reco_angleZ);
   fChain->SetBranchAddress("tree_V0_reco_NChi2", &theFormat.tree_V0_reco_NChi2, &theFormat.b_tree_V0_reco_NChi2);
   fChain->SetBranchAddress("tree_V0_reco_ndf", &theFormat.tree_V0_reco_ndf, &theFormat.b_tree_V0_reco_ndf);
   fChain->SetBranchAddress("tree_V0_reco_mass", &theFormat.tree_V0_reco_mass, &theFormat.b_tree_V0_reco_mass);
   fChain->SetBranchAddress("tree_V0_reco_pt", &theFormat.tree_V0_reco_pt, &theFormat.b_tree_V0_reco_pt);
   fChain->SetBranchAddress("tree_V0_reco_eta", &theFormat.tree_V0_reco_eta, &theFormat.b_tree_V0_reco_eta);
   fChain->SetBranchAddress("tree_V0_reco_phi", &theFormat.tree_V0_reco_phi, &theFormat.b_tree_V0_reco_phi);
   fChain->SetBranchAddress("tree_V0_reco_source", &theFormat.tree_V0_reco_source, &theFormat.b_tree_V0_reco_source);
   fChain->SetBranchAddress("tree_V0_reco_badTkHit", &theFormat.tree_V0_reco_badTkHit, &theFormat.b_tree_V0_reco_badTkHit);
   fChain->SetBranchAddress("tree_nSecInt", &theFormat.tree_nSecInt, &theFormat.b_tree_nSecInt);
   fChain->SetBranchAddress("tree_SecInt_x", &theFormat.tree_SecInt_x, &theFormat.b_tree_SecInt_x);
   fChain->SetBranchAddress("tree_SecInt_y", &theFormat.tree_SecInt_y, &theFormat.b_tree_SecInt_y);
   fChain->SetBranchAddress("tree_SecInt_z", &theFormat.tree_SecInt_z, &theFormat.b_tree_SecInt_z);
   fChain->SetBranchAddress("tree_SecInt_r", &theFormat.tree_SecInt_r, &theFormat.b_tree_SecInt_r);
   fChain->SetBranchAddress("tree_SecInt_drSig", &theFormat.tree_SecInt_drSig, &theFormat.b_tree_SecInt_drSig);
   fChain->SetBranchAddress("tree_SecInt_dzSig", &theFormat.tree_SecInt_dzSig, &theFormat.b_tree_SecInt_dzSig);
   fChain->SetBranchAddress("tree_SecInt_angleXY", &theFormat.tree_SecInt_angleXY, &theFormat.b_tree_SecInt_angleXY);
   fChain->SetBranchAddress("tree_SecInt_angleZ", &theFormat.tree_SecInt_angleZ, &theFormat.b_tree_SecInt_angleZ);
   fChain->SetBranchAddress("tree_SecInt_NChi2", &theFormat.tree_SecInt_NChi2, &theFormat.b_tree_SecInt_NChi2);
   fChain->SetBranchAddress("tree_SecInt_ndf", &theFormat.tree_SecInt_ndf, &theFormat.b_tree_SecInt_ndf);
   fChain->SetBranchAddress("tree_SecInt_mass", &theFormat.tree_SecInt_mass, &theFormat.b_tree_SecInt_mass);
   fChain->SetBranchAddress("tree_SecInt_pt", &theFormat.tree_SecInt_pt, &theFormat.b_tree_SecInt_pt);
   fChain->SetBranchAddress("tree_SecInt_eta", &theFormat.tree_SecInt_eta, &theFormat.b_tree_SecInt_eta);
   fChain->SetBranchAddress("tree_SecInt_phi", &theFormat.tree_SecInt_phi, &theFormat.b_tree_SecInt_phi);
   fChain->SetBranchAddress("tree_SecInt_charge", &theFormat.tree_SecInt_charge, &theFormat.b_tree_SecInt_charge);
   fChain->SetBranchAddress("tree_SecInt_badTkHit", &theFormat.tree_SecInt_badTkHit, &theFormat.b_tree_SecInt_badTkHit);
   fChain->SetBranchAddress("tree_SecInt_dca", &theFormat.tree_SecInt_dca, &theFormat.b_tree_SecInt_dca);
   fChain->SetBranchAddress("tree_SecInt_selec", &theFormat.tree_SecInt_selec, &theFormat.b_tree_SecInt_selec);
   fChain->SetBranchAddress("tree_SecInt_layer", &theFormat.tree_SecInt_layer, &theFormat.b_tree_SecInt_layer);
   fChain->SetBranchAddress("tree_SecInt_LLP", &theFormat.tree_SecInt_LLP, &theFormat.b_tree_SecInt_LLP);
   fChain->SetBranchAddress("tree_SecInt_LLP_dr", &theFormat.tree_SecInt_LLP_dr, &theFormat.b_tree_SecInt_LLP_dr);
   fChain->SetBranchAddress("tree_SecInt_LLP_dz", &theFormat.tree_SecInt_LLP_dz, &theFormat.b_tree_SecInt_LLP_dz);
   fChain->SetBranchAddress("tree_nYConv", &theFormat.tree_nYConv, &theFormat.b_tree_nYConv);
   fChain->SetBranchAddress("tree_Yc_x", &theFormat.tree_Yc_x, &theFormat.b_tree_Yc_x);
   fChain->SetBranchAddress("tree_Yc_y", &theFormat.tree_Yc_y, &theFormat.b_tree_Yc_y);
   fChain->SetBranchAddress("tree_Yc_z", &theFormat.tree_Yc_z, &theFormat.b_tree_Yc_z);
   fChain->SetBranchAddress("tree_Yc_r", &theFormat.tree_Yc_r, &theFormat.b_tree_Yc_r);
   fChain->SetBranchAddress("tree_Yc_dr0", &theFormat.tree_Yc_dr0, &theFormat.b_tree_Yc_dr0);
   fChain->SetBranchAddress("tree_Yc_dr1", &theFormat.tree_Yc_dr1, &theFormat.b_tree_Yc_dr1);
   fChain->SetBranchAddress("tree_Yc_dz0", &theFormat.tree_Yc_dz0, &theFormat.b_tree_Yc_dz0);
   fChain->SetBranchAddress("tree_Yc_dz1", &theFormat.tree_Yc_dz1, &theFormat.b_tree_Yc_dz1);
   fChain->SetBranchAddress("tree_Yc_costheta", &theFormat.tree_Yc_costheta, &theFormat.b_tree_Yc_costheta);
   fChain->SetBranchAddress("tree_Yc_layer", &theFormat.tree_Yc_layer, &theFormat.b_tree_Yc_layer);
   fChain->SetBranchAddress("tree_Yc_NChi2", &theFormat.tree_Yc_NChi2, &theFormat.b_tree_Yc_NChi2);
   fChain->SetBranchAddress("tree_Yc_ndf", &theFormat.tree_Yc_ndf, &theFormat.b_tree_Yc_ndf);
   fChain->SetBranchAddress("tree_Yc_nDaughters", &theFormat.tree_Yc_nDaughters, &theFormat.b_tree_Yc_nDaughters);
   fChain->SetBranchAddress("tree_Yc_pt", &theFormat.tree_Yc_pt, &theFormat.b_tree_Yc_pt);
   fChain->SetBranchAddress("tree_Yc_eta", &theFormat.tree_Yc_eta, &theFormat.b_tree_Yc_eta);
   fChain->SetBranchAddress("tree_Yc_phi", &theFormat.tree_Yc_phi, &theFormat.b_tree_Yc_phi);
   fChain->SetBranchAddress("tree_Yc_mass", &theFormat.tree_Yc_mass, &theFormat.b_tree_Yc_mass);
   fChain->SetBranchAddress("tree_Yc_ntracks", &theFormat.tree_Yc_ntracks, &theFormat.b_tree_Yc_ntracks);
   fChain->SetBranchAddress("tree_Yc_tracks_index", &theFormat.tree_Yc_tracks_index, &theFormat.b_tree_Yc_tracks_index);
   fChain->SetBranchAddress("tree_Yc_tracks_charge", &theFormat.tree_Yc_tracks_charge, &theFormat.b_tree_Yc_tracks_charge);
   fChain->SetBranchAddress("tree_Yc_tracks_pt", &theFormat.tree_Yc_tracks_pt, &theFormat.b_tree_Yc_tracks_pt);
   fChain->SetBranchAddress("tree_Yc_tracks_eta", &theFormat.tree_Yc_tracks_eta, &theFormat.b_tree_Yc_tracks_eta);
   fChain->SetBranchAddress("tree_Yc_tracks_phi", &theFormat.tree_Yc_tracks_phi, &theFormat.b_tree_Yc_tracks_phi);
   fChain->SetBranchAddress("tree_Yc_tracks_phi0", &theFormat.tree_Yc_tracks_phi0, &theFormat.b_tree_Yc_tracks_phi0);
   fChain->SetBranchAddress("tree_PFMet_et", &theFormat.tree_PFMet_et, &theFormat.b_tree_PFMet_et);
   fChain->SetBranchAddress("tree_PFMet_phi", &theFormat.tree_PFMet_phi, &theFormat.b_tree_PFMet_phi);
   fChain->SetBranchAddress("tree_PFMet_sig", &theFormat.tree_PFMet_sig, &theFormat.b_tree_PFMet_sig);
   fChain->SetBranchAddress("tree_njet", &theFormat.tree_njet, &theFormat.b_tree_njet);
   fChain->SetBranchAddress("tree_jet_E", &theFormat.tree_jet_E, &theFormat.b_tree_jet_E);
   fChain->SetBranchAddress("tree_jet_pt", &theFormat.tree_jet_pt, &theFormat.b_tree_jet_pt);
   fChain->SetBranchAddress("tree_jet_eta", &theFormat.tree_jet_eta, &theFormat.b_tree_jet_eta);
   fChain->SetBranchAddress("tree_jet_phi", &theFormat.tree_jet_phi, &theFormat.b_tree_jet_phi);
   fChain->SetBranchAddress("tree_jet_btag_DeepCSV", &theFormat.tree_jet_btag_DeepCSV, &theFormat.b_tree_jet_btag_DeepCSV);
   fChain->SetBranchAddress("tree_jet_btag_DeepJet", &theFormat.tree_jet_btag_DeepJet, &theFormat.b_tree_jet_btag_DeepJet);
   fChain->SetBranchAddress("tree_HT", &theFormat.tree_HT, &theFormat.b_tree_HT);
   fChain->SetBranchAddress("tree_electron_pt", &theFormat.tree_electron_pt, &theFormat.b_tree_electron_pt);
   fChain->SetBranchAddress("tree_electron_eta", &theFormat.tree_electron_eta, &theFormat.b_tree_electron_eta);
   fChain->SetBranchAddress("tree_electron_phi", &theFormat.tree_electron_phi, &theFormat.b_tree_electron_phi);
   fChain->SetBranchAddress("tree_electron_x", &theFormat.tree_electron_x, &theFormat.b_tree_electron_x);
   fChain->SetBranchAddress("tree_electron_y", &theFormat.tree_electron_y, &theFormat.b_tree_electron_y);
   fChain->SetBranchAddress("tree_electron_z", &theFormat.tree_electron_z, &theFormat.b_tree_electron_z);
   fChain->SetBranchAddress("tree_electron_energy", &theFormat.tree_electron_energy, &theFormat.b_tree_electron_energy);
   fChain->SetBranchAddress("tree_electron_charge", &theFormat.tree_electron_charge, &theFormat.b_tree_electron_charge);
   fChain->SetBranchAddress("tree_electron_isoR4", &theFormat.tree_electron_isoR4, &theFormat.b_tree_electron_isoR4);
   fChain->SetBranchAddress("tree_Mmumu", &theFormat.tree_Mmumu, &theFormat.b_tree_Mmumu);
   fChain->SetBranchAddress("tree_muon_pt", &theFormat.tree_muon_pt, &theFormat.b_tree_muon_pt);
   fChain->SetBranchAddress("tree_muon_eta", &theFormat.tree_muon_eta, &theFormat.b_tree_muon_eta);
   fChain->SetBranchAddress("tree_muon_phi", &theFormat.tree_muon_phi, &theFormat.b_tree_muon_phi);
   fChain->SetBranchAddress("tree_muon_x", &theFormat.tree_muon_x, &theFormat.b_tree_muon_x);
   fChain->SetBranchAddress("tree_muon_y", &theFormat.tree_muon_y, &theFormat.b_tree_muon_y);
   fChain->SetBranchAddress("tree_muon_z", &theFormat.tree_muon_z, &theFormat.b_tree_muon_z);
   fChain->SetBranchAddress("tree_muon_energy", &theFormat.tree_muon_energy, &theFormat.b_tree_muon_energy);
   fChain->SetBranchAddress("tree_muon_dxy", &theFormat.tree_muon_dxy, &theFormat.b_tree_muon_dxy);
   fChain->SetBranchAddress("tree_muon_dxyError", &theFormat.tree_muon_dxyError, &theFormat.b_tree_muon_dxyError);
   fChain->SetBranchAddress("tree_muon_dz", &theFormat.tree_muon_dz, &theFormat.b_tree_muon_dz);
   fChain->SetBranchAddress("tree_muon_dzError", &theFormat.tree_muon_dzError, &theFormat.b_tree_muon_dzError);
   fChain->SetBranchAddress("tree_muon_charge", &theFormat.tree_muon_charge, &theFormat.b_tree_muon_charge);
   fChain->SetBranchAddress("tree_muon_isLoose", &theFormat.tree_muon_isLoose, &theFormat.b_tree_muon_isLoose);
   fChain->SetBranchAddress("tree_muon_isTight", &theFormat.tree_muon_isTight, &theFormat.b_tree_muon_isTight);
   fChain->SetBranchAddress("tree_muon_isGlobal", &theFormat.tree_muon_isGlobal, &theFormat.b_tree_muon_isGlobal);
   fChain->SetBranchAddress("tree_muon_isoR3", &theFormat.tree_muon_isoR3, &theFormat.b_tree_muon_isoR3);
   fChain->SetBranchAddress("tree_nTracks", &theFormat.tree_nTracks, &theFormat.b_tree_nTracks);
   fChain->SetBranchAddress("tree_nLostTracks", &theFormat.tree_nLostTracks, &theFormat.b_tree_nLostTracks);
   fChain->SetBranchAddress("tree_track_ipc", &theFormat.tree_track_ipc, &theFormat.b_tree_track_ipc);
   fChain->SetBranchAddress("tree_track_lost", &theFormat.tree_track_lost, &theFormat.b_tree_track_lost);
   fChain->SetBranchAddress("tree_track_pt", &theFormat.tree_track_pt, &theFormat.b_tree_track_pt);
   fChain->SetBranchAddress("tree_track_eta", &theFormat.tree_track_eta, &theFormat.b_tree_track_eta);
   fChain->SetBranchAddress("tree_track_phi", &theFormat.tree_track_phi, &theFormat.b_tree_track_phi);
   fChain->SetBranchAddress("tree_track_charge", &theFormat.tree_track_charge, &theFormat.b_tree_track_charge);
   fChain->SetBranchAddress("tree_track_NChi2", &theFormat.tree_track_NChi2, &theFormat.b_tree_track_NChi2);
   fChain->SetBranchAddress("tree_track_isHighPurity", &theFormat.tree_track_isHighPurity, &theFormat.b_tree_track_isHighPurity);
   fChain->SetBranchAddress("tree_track_dxy", &theFormat.tree_track_dxy, &theFormat.b_tree_track_dxy);
   fChain->SetBranchAddress("tree_track_dxyError", &theFormat.tree_track_dxyError, &theFormat.b_tree_track_dxyError);
   fChain->SetBranchAddress("tree_track_drSig", &theFormat.tree_track_drSig, &theFormat.b_tree_track_drSig);
   fChain->SetBranchAddress("tree_track_dz", &theFormat.tree_track_dz, &theFormat.b_tree_track_dz);
   fChain->SetBranchAddress("tree_track_dzError", &theFormat.tree_track_dzError, &theFormat.b_tree_track_dzError);
   fChain->SetBranchAddress("tree_track_dzSig", &theFormat.tree_track_dzSig, &theFormat.b_tree_track_dzSig);
   fChain->SetBranchAddress("tree_track_dzTOpu", &theFormat.tree_track_dzTOpu, &theFormat.b_tree_track_dzTOpu);
   fChain->SetBranchAddress("tree_track_dzSigTOpu", &theFormat.tree_track_dzSigTOpu, &theFormat.b_tree_track_dzSigTOpu);
   fChain->SetBranchAddress("tree_track_algo", &theFormat.tree_track_algo, &theFormat.b_tree_track_algo);
   fChain->SetBranchAddress("tree_track_nHit", &theFormat.tree_track_nHit, &theFormat.b_tree_track_nHit);
   fChain->SetBranchAddress("tree_track_nHitPixel", &theFormat.tree_track_nHitPixel, &theFormat.b_tree_track_nHitPixel);
   fChain->SetBranchAddress("tree_track_nHitTIB", &theFormat.tree_track_nHitTIB, &theFormat.b_tree_track_nHitTIB);
   fChain->SetBranchAddress("tree_track_nHitTID", &theFormat.tree_track_nHitTID, &theFormat.b_tree_track_nHitTID);
   fChain->SetBranchAddress("tree_track_nHitTOB", &theFormat.tree_track_nHitTOB, &theFormat.b_tree_track_nHitTOB);
   fChain->SetBranchAddress("tree_track_nHitTEC", &theFormat.tree_track_nHitTEC, &theFormat.b_tree_track_nHitTEC);
   fChain->SetBranchAddress("tree_track_nHitPXB", &theFormat.tree_track_nHitPXB, &theFormat.b_tree_track_nHitPXB);
   fChain->SetBranchAddress("tree_track_nHitPXF", &theFormat.tree_track_nHitPXF, &theFormat.b_tree_track_nHitPXF);
   fChain->SetBranchAddress("tree_track_isHitPixel", &theFormat.tree_track_isHitPixel, &theFormat.b_tree_track_isHitPixel);
   fChain->SetBranchAddress("tree_track_nLayers", &theFormat.tree_track_nLayers, &theFormat.b_tree_track_nLayers);
   fChain->SetBranchAddress("tree_track_nLayersPixel", &theFormat.tree_track_nLayersPixel, &theFormat.b_tree_track_nLayersPixel);
   fChain->SetBranchAddress("tree_track_x", &theFormat.tree_track_x, &theFormat.b_tree_track_x);
   fChain->SetBranchAddress("tree_track_y", &theFormat.tree_track_y, &theFormat.b_tree_track_y);
   fChain->SetBranchAddress("tree_track_z", &theFormat.tree_track_z, &theFormat.b_tree_track_z);
   fChain->SetBranchAddress("tree_track_firstHit", &theFormat.tree_track_firstHit, &theFormat.b_tree_track_firstHit);
   fChain->SetBranchAddress("tree_track_region", &theFormat.tree_track_region, &theFormat.b_tree_track_region);
   fChain->SetBranchAddress("tree_track_firstHit_x", &theFormat.tree_track_firstHit_x, &theFormat.b_tree_track_firstHit_x);
   fChain->SetBranchAddress("tree_track_firstHit_y", &theFormat.tree_track_firstHit_y, &theFormat.b_tree_track_firstHit_y);
   fChain->SetBranchAddress("tree_track_firstHit_z", &theFormat.tree_track_firstHit_z, &theFormat.b_tree_track_firstHit_z);
   fChain->SetBranchAddress("tree_track_iJet", &theFormat.tree_track_iJet, &theFormat.b_tree_track_iJet);
   fChain->SetBranchAddress("tree_track_ntrk10", &theFormat.tree_track_ntrk10, &theFormat.b_tree_track_ntrk10);
   fChain->SetBranchAddress("tree_track_ntrk20", &theFormat.tree_track_ntrk20, &theFormat.b_tree_track_ntrk20);
   fChain->SetBranchAddress("tree_track_ntrk30", &theFormat.tree_track_ntrk30, &theFormat.b_tree_track_ntrk30);
   fChain->SetBranchAddress("tree_track_ntrk40", &theFormat.tree_track_ntrk40, &theFormat.b_tree_track_ntrk40);
   fChain->SetBranchAddress("tree_track_MVAval", &theFormat.tree_track_MVAval, &theFormat.b_tree_track_MVAval);
   fChain->SetBranchAddress("tree_track_Hemi", &theFormat.tree_track_Hemi, &theFormat.b_tree_track_Hemi);
   fChain->SetBranchAddress("tree_track_Hemi_dR", &theFormat.tree_track_Hemi_dR, &theFormat.b_tree_track_Hemi_dR);
   fChain->SetBranchAddress("tree_track_Hemi_mva_NChi2", &theFormat.tree_track_Hemi_mva_NChi2, &theFormat.b_tree_track_Hemi_mva_NChi2);
   fChain->SetBranchAddress("tree_track_Hemi_ping", &theFormat.tree_track_Hemi_ping, &theFormat.b_tree_track_Hemi_ping);
   fChain->SetBranchAddress("tree_track_Hemi_dFirstVtx", &theFormat.tree_track_Hemi_dFirstVtx, &theFormat.b_tree_track_Hemi_dFirstVtx);
   fChain->SetBranchAddress("tree_track_Hemi_LLP", &theFormat.tree_track_Hemi_LLP, &theFormat.b_tree_track_Hemi_LLP);
   fChain->SetBranchAddress("tree_track_sim_LLP", &theFormat.tree_track_sim_LLP, &theFormat.b_tree_track_sim_LLP);
   fChain->SetBranchAddress("tree_track_sim_isFromB", &theFormat.tree_track_sim_isFromB, &theFormat.b_tree_track_sim_isFromB);
   fChain->SetBranchAddress("tree_track_sim_isFromC", &theFormat.tree_track_sim_isFromC, &theFormat.b_tree_track_sim_isFromC);
   fChain->SetBranchAddress("tree_track_sim_pt", &theFormat.tree_track_sim_pt, &theFormat.b_tree_track_sim_pt);
   fChain->SetBranchAddress("tree_track_sim_eta", &theFormat.tree_track_sim_eta, &theFormat.b_tree_track_sim_eta);
   fChain->SetBranchAddress("tree_track_sim_phi", &theFormat.tree_track_sim_phi, &theFormat.b_tree_track_sim_phi);
   fChain->SetBranchAddress("tree_track_sim_charge", &theFormat.tree_track_sim_charge, &theFormat.b_tree_track_sim_charge);
   fChain->SetBranchAddress("tree_track_sim_pdgId", &theFormat.tree_track_sim_pdgId, &theFormat.b_tree_track_sim_pdgId);
   fChain->SetBranchAddress("tree_track_sim_mass", &theFormat.tree_track_sim_mass, &theFormat.b_tree_track_sim_mass);
   fChain->SetBranchAddress("tree_track_sim_x", &theFormat.tree_track_sim_x, &theFormat.b_tree_track_sim_x);
   fChain->SetBranchAddress("tree_track_sim_y", &theFormat.tree_track_sim_y, &theFormat.b_tree_track_sim_y);
   fChain->SetBranchAddress("tree_track_sim_z", &theFormat.tree_track_sim_z, &theFormat.b_tree_track_sim_z);
   fChain->SetBranchAddress("tree_track_sim_dFirstGen", &theFormat.tree_track_sim_dFirstGen, &theFormat.b_tree_track_sim_dFirstGen);
   fChain->SetBranchAddress("tree_track_sim_LLP_r", &theFormat.tree_track_sim_LLP_r, &theFormat.b_tree_track_sim_LLP_r);
   fChain->SetBranchAddress("tree_track_sim_LLP_z", &theFormat.tree_track_sim_LLP_z, &theFormat.b_tree_track_sim_LLP_z);
   fChain->SetBranchAddress("tree_GenPVx", &theFormat.tree_GenPVx, &theFormat.b_tree_GenPVx);
   fChain->SetBranchAddress("tree_GenPVy", &theFormat.tree_GenPVy, &theFormat.b_tree_GenPVy);
   fChain->SetBranchAddress("tree_GenPVz", &theFormat.tree_GenPVz, &theFormat.b_tree_GenPVz);
   fChain->SetBranchAddress("tree_genParticle_pt", &theFormat.tree_genParticle_pt, &theFormat.b_tree_genParticle_pt);
   fChain->SetBranchAddress("tree_genParticle_eta", &theFormat.tree_genParticle_eta, &theFormat.b_tree_genParticle_eta);
   fChain->SetBranchAddress("tree_genParticle_phi", &theFormat.tree_genParticle_phi, &theFormat.b_tree_genParticle_phi);
   fChain->SetBranchAddress("tree_genParticle_charge", &theFormat.tree_genParticle_charge, &theFormat.b_tree_genParticle_charge);
   fChain->SetBranchAddress("tree_genParticle_pdgId", &theFormat.tree_genParticle_pdgId, &theFormat.b_tree_genParticle_pdgId);
   fChain->SetBranchAddress("tree_genParticle_mass", &theFormat.tree_genParticle_mass, &theFormat.b_tree_genParticle_mass);
   fChain->SetBranchAddress("tree_genParticle_x", &theFormat.tree_genParticle_x, &theFormat.b_tree_genParticle_x);
   fChain->SetBranchAddress("tree_genParticle_y", &theFormat.tree_genParticle_y, &theFormat.b_tree_genParticle_y);
   fChain->SetBranchAddress("tree_genParticle_z", &theFormat.tree_genParticle_z, &theFormat.b_tree_genParticle_z);
   fChain->SetBranchAddress("tree_genParticle_statusCode", &theFormat.tree_genParticle_statusCode, &theFormat.b_tree_genParticle_statusCode);
   fChain->SetBranchAddress("tree_genParticle_mother_pdgId", &theFormat.tree_genParticle_mother_pdgId, &theFormat.b_tree_genParticle_mother_pdgId);
   fChain->SetBranchAddress("tree_genParticle_LLP", &theFormat.tree_genParticle_LLP, &theFormat.b_tree_genParticle_LLP);
   fChain->SetBranchAddress("tree_ngenPackPart", &theFormat.tree_ngenPackPart, &theFormat.b_tree_ngenPackPart);
   fChain->SetBranchAddress("tree_genPackPart_pt", &theFormat.tree_genPackPart_pt, &theFormat.b_tree_genPackPart_pt);
   fChain->SetBranchAddress("tree_genPackPart_eta", &theFormat.tree_genPackPart_eta, &theFormat.b_tree_genPackPart_eta);
   fChain->SetBranchAddress("tree_genPackPart_phi", &theFormat.tree_genPackPart_phi, &theFormat.b_tree_genPackPart_phi);
   fChain->SetBranchAddress("tree_genPackPart_charge", &theFormat.tree_genPackPart_charge, &theFormat.b_tree_genPackPart_charge);
   fChain->SetBranchAddress("tree_genPackPart_pdgId", &theFormat.tree_genPackPart_pdgId, &theFormat.b_tree_genPackPart_pdgId);
   fChain->SetBranchAddress("tree_genPackPart_mass", &theFormat.tree_genPackPart_mass, &theFormat.b_tree_genPackPart_mass);
   fChain->SetBranchAddress("tree_genPackPart_x", &theFormat.tree_genPackPart_x, &theFormat.b_tree_genPackPart_x);
   fChain->SetBranchAddress("tree_genPackPart_y", &theFormat.tree_genPackPart_y, &theFormat.b_tree_genPackPart_y);
   fChain->SetBranchAddress("tree_genPackPart_z", &theFormat.tree_genPackPart_z, &theFormat.b_tree_genPackPart_z);
   fChain->SetBranchAddress("tree_genPackPart_mother_pdgId", &theFormat.tree_genPackPart_mother_pdgId, &theFormat.b_tree_genPackPart_mother_pdgId);
   fChain->SetBranchAddress("tree_genPackPart_isFromB", &theFormat.tree_genPackPart_isFromB, &theFormat.b_tree_genPackPart_isFromB);
   fChain->SetBranchAddress("tree_genPackPart_isFromC", &theFormat.tree_genPackPart_isFromC, &theFormat.b_tree_genPackPart_isFromC);
   fChain->SetBranchAddress("tree_ngenFromLLP", &theFormat.tree_ngenFromLLP, &theFormat.b_tree_ngenFromLLP);
   fChain->SetBranchAddress("tree_genFromLLP_LLP", &theFormat.tree_genFromLLP_LLP, &theFormat.b_tree_genFromLLP_LLP);
   fChain->SetBranchAddress("tree_genFromLLP_pt", &theFormat.tree_genFromLLP_pt, &theFormat.b_tree_genFromLLP_pt);
   fChain->SetBranchAddress("tree_genFromLLP_eta", &theFormat.tree_genFromLLP_eta, &theFormat.b_tree_genFromLLP_eta);
   fChain->SetBranchAddress("tree_genFromLLP_phi", &theFormat.tree_genFromLLP_phi, &theFormat.b_tree_genFromLLP_phi);
   fChain->SetBranchAddress("tree_genFromLLP_charge", &theFormat.tree_genFromLLP_charge, &theFormat.b_tree_genFromLLP_charge);
   fChain->SetBranchAddress("tree_genFromLLP_pdgId", &theFormat.tree_genFromLLP_pdgId, &theFormat.b_tree_genFromLLP_pdgId);
   fChain->SetBranchAddress("tree_genFromLLP_mass", &theFormat.tree_genFromLLP_mass, &theFormat.b_tree_genFromLLP_mass);
   fChain->SetBranchAddress("tree_genFromLLP_x", &theFormat.tree_genFromLLP_x, &theFormat.b_tree_genFromLLP_x);
   fChain->SetBranchAddress("tree_genFromLLP_y", &theFormat.tree_genFromLLP_y, &theFormat.b_tree_genFromLLP_y);
   fChain->SetBranchAddress("tree_genFromLLP_z", &theFormat.tree_genFromLLP_z, &theFormat.b_tree_genFromLLP_z);
   fChain->SetBranchAddress("tree_genFromLLP_mother_pdgId", &theFormat.tree_genFromLLP_mother_pdgId, &theFormat.b_tree_genFromLLP_mother_pdgId);
   fChain->SetBranchAddress("tree_genFromLLP_isFromB", &theFormat.tree_genFromLLP_isFromB, &theFormat.b_tree_genFromLLP_isFromB);
   fChain->SetBranchAddress("tree_genFromLLP_isFromC", &theFormat.tree_genFromLLP_isFromC, &theFormat.b_tree_genFromLLP_isFromC);
   fChain->SetBranchAddress("tree_genAxis_dRneuneu", &theFormat.tree_genAxis_dRneuneu, &theFormat.b_tree_genAxis_dRneuneu);
   fChain->SetBranchAddress("tree_nFromC", &theFormat.tree_nFromC, &theFormat.b_tree_nFromC);
   fChain->SetBranchAddress("tree_genFromC_pt", &theFormat.tree_genFromC_pt, &theFormat.b_tree_genFromC_pt);
   fChain->SetBranchAddress("tree_genFromC_eta", &theFormat.tree_genFromC_eta, &theFormat.b_tree_genFromC_eta);
   fChain->SetBranchAddress("tree_genFromC_phi", &theFormat.tree_genFromC_phi, &theFormat.b_tree_genFromC_phi);
   fChain->SetBranchAddress("tree_genFromC_charge", &theFormat.tree_genFromC_charge, &theFormat.b_tree_genFromC_charge);
   fChain->SetBranchAddress("tree_genFromC_pdgId", &theFormat.tree_genFromC_pdgId, &theFormat.b_tree_genFromC_pdgId);
   fChain->SetBranchAddress("tree_genFromC_x", &theFormat.tree_genFromC_x, &theFormat.b_tree_genFromC_x);
   fChain->SetBranchAddress("tree_genFromC_y", &theFormat.tree_genFromC_y, &theFormat.b_tree_genFromC_y);
   fChain->SetBranchAddress("tree_genFromC_z", &theFormat.tree_genFromC_z, &theFormat.b_tree_genFromC_z);
   fChain->SetBranchAddress("tree_genFromC_mother_pdgId", &theFormat.tree_genFromC_mother_pdgId, &theFormat.b_tree_genFromC_mother_pdgId);
   fChain->SetBranchAddress("tree_nFromB", &theFormat.tree_nFromB, &theFormat.b_tree_nFromB);
   fChain->SetBranchAddress("tree_genFromB_pt", &theFormat.tree_genFromB_pt, &theFormat.b_tree_genFromB_pt);
   fChain->SetBranchAddress("tree_genFromB_eta", &theFormat.tree_genFromB_eta, &theFormat.b_tree_genFromB_eta);
   fChain->SetBranchAddress("tree_genFromB_phi", &theFormat.tree_genFromB_phi, &theFormat.b_tree_genFromB_phi);
   fChain->SetBranchAddress("tree_genFromB_charge", &theFormat.tree_genFromB_charge, &theFormat.b_tree_genFromB_charge);
   fChain->SetBranchAddress("tree_genFromB_pdgId", &theFormat.tree_genFromB_pdgId, &theFormat.b_tree_genFromB_pdgId);
   fChain->SetBranchAddress("tree_genFromB_x", &theFormat.tree_genFromB_x, &theFormat.b_tree_genFromB_x);
   fChain->SetBranchAddress("tree_genFromB_y", &theFormat.tree_genFromB_y, &theFormat.b_tree_genFromB_y);
   fChain->SetBranchAddress("tree_genFromB_z", &theFormat.tree_genFromB_z, &theFormat.b_tree_genFromB_z);
   fChain->SetBranchAddress("tree_genFromB_mother_pdgId", &theFormat.tree_genFromB_mother_pdgId, &theFormat.b_tree_genFromB_mother_pdgId);
   fChain->SetBranchAddress("tree_genJet_pt", &theFormat.tree_genJet_pt, &theFormat.b_tree_genJet_pt);
   fChain->SetBranchAddress("tree_genJet_eta", &theFormat.tree_genJet_eta, &theFormat.b_tree_genJet_eta);
   fChain->SetBranchAddress("tree_genJet_phi", &theFormat.tree_genJet_phi, &theFormat.b_tree_genJet_phi);
   fChain->SetBranchAddress("tree_genJet_mass", &theFormat.tree_genJet_mass, &theFormat.b_tree_genJet_mass);
   fChain->SetBranchAddress("tree_genJet_energy", &theFormat.tree_genJet_energy, &theFormat.b_tree_genJet_energy);
   fChain->SetBranchAddress("tree_nLLP", &theFormat.tree_nLLP, &theFormat.b_tree_nLLP);
   fChain->SetBranchAddress("tree_LLP", &theFormat.tree_LLP, &theFormat.b_tree_LLP);
   fChain->SetBranchAddress("tree_LLP_pt", &theFormat.tree_LLP_pt, &theFormat.b_tree_LLP_pt);
   fChain->SetBranchAddress("tree_LLP_eta", &theFormat.tree_LLP_eta, &theFormat.b_tree_LLP_eta);
   fChain->SetBranchAddress("tree_LLP_phi", &theFormat.tree_LLP_phi, &theFormat.b_tree_LLP_phi);
   fChain->SetBranchAddress("tree_LLP_x", &theFormat.tree_LLP_x, &theFormat.b_tree_LLP_x);
   fChain->SetBranchAddress("tree_LLP_y", &theFormat.tree_LLP_y, &theFormat.b_tree_LLP_y);
   fChain->SetBranchAddress("tree_LLP_z", &theFormat.tree_LLP_z, &theFormat.b_tree_LLP_z);
   fChain->SetBranchAddress("tree_LLP_dist", &theFormat.tree_LLP_dist, &theFormat.b_tree_LLP_dist);
   fChain->SetBranchAddress("tree_LLP_nTrks", &theFormat.tree_LLP_nTrks, &theFormat.b_tree_LLP_nTrks);
   fChain->SetBranchAddress("tree_LLP_Vtx_nTrks", &theFormat.tree_LLP_Vtx_nTrks, &theFormat.b_tree_LLP_Vtx_nTrks);
   fChain->SetBranchAddress("tree_LLP_Vtx_NChi2", &theFormat.tree_LLP_Vtx_NChi2, &theFormat.b_tree_LLP_Vtx_NChi2);
   fChain->SetBranchAddress("tree_LLP_Vtx_dx", &theFormat.tree_LLP_Vtx_dx, &theFormat.b_tree_LLP_Vtx_dx);
   fChain->SetBranchAddress("tree_LLP_Vtx_dy", &theFormat.tree_LLP_Vtx_dy, &theFormat.b_tree_LLP_Vtx_dy);
   fChain->SetBranchAddress("tree_LLP_Vtx_dz", &theFormat.tree_LLP_Vtx_dz, &theFormat.b_tree_LLP_Vtx_dz);
   fChain->SetBranchAddress("tree_LLP_Vtx_dist", &theFormat.tree_LLP_Vtx_dist, &theFormat.b_tree_LLP_Vtx_dist);
   fChain->SetBranchAddress("tree_LLP_Vtx_dd", &theFormat.tree_LLP_Vtx_dd, &theFormat.b_tree_LLP_Vtx_dd);
   fChain->SetBranchAddress("tree_LLP12_dR", &theFormat.tree_LLP12_dR, &theFormat.b_tree_LLP12_dR);
   fChain->SetBranchAddress("tree_LLP12_deta", &theFormat.tree_LLP12_deta, &theFormat.b_tree_LLP12_deta);
   fChain->SetBranchAddress("tree_LLP12_dphi", &theFormat.tree_LLP12_dphi, &theFormat.b_tree_LLP12_dphi);
   fChain->SetBranchAddress("tree_Hemi", &theFormat.tree_Hemi, &theFormat.b_tree_Hemi);
   fChain->SetBranchAddress("tree_Hemi_njet", &theFormat.tree_Hemi_njet, &theFormat.b_tree_Hemi_njet);
   fChain->SetBranchAddress("tree_Hemi_eta", &theFormat.tree_Hemi_eta, &theFormat.b_tree_Hemi_eta);
   fChain->SetBranchAddress("tree_Hemi_phi", &theFormat.tree_Hemi_phi, &theFormat.b_tree_Hemi_phi);
   fChain->SetBranchAddress("tree_Hemi_dR", &theFormat.tree_Hemi_dR, &theFormat.b_tree_Hemi_dR);
   fChain->SetBranchAddress("tree_Hemi_nTrks", &theFormat.tree_Hemi_nTrks, &theFormat.b_tree_Hemi_nTrks);
   fChain->SetBranchAddress("tree_Hemi_nTrks_sig", &theFormat.tree_Hemi_nTrks_sig, &theFormat.b_tree_Hemi_nTrks_sig);
   fChain->SetBranchAddress("tree_Hemi_nTrks_bad", &theFormat.tree_Hemi_nTrks_bad, &theFormat.b_tree_Hemi_nTrks_bad);
   fChain->SetBranchAddress("tree_Hemi_LLP", &theFormat.tree_Hemi_LLP, &theFormat.b_tree_Hemi_LLP);
   fChain->SetBranchAddress("tree_Hemi_LLP_pt", &theFormat.tree_Hemi_LLP_pt, &theFormat.b_tree_Hemi_LLP_pt);
   fChain->SetBranchAddress("tree_Hemi_LLP_eta", &theFormat.tree_Hemi_LLP_eta, &theFormat.b_tree_Hemi_LLP_eta);
   fChain->SetBranchAddress("tree_Hemi_LLP_phi", &theFormat.tree_Hemi_LLP_phi, &theFormat.b_tree_Hemi_LLP_phi);
   fChain->SetBranchAddress("tree_Hemi_LLP_dist", &theFormat.tree_Hemi_LLP_dist, &theFormat.b_tree_Hemi_LLP_dist);
   fChain->SetBranchAddress("tree_Hemi_LLP_x", &theFormat.tree_Hemi_LLP_x, &theFormat.b_tree_Hemi_LLP_x);
   fChain->SetBranchAddress("tree_Hemi_LLP_y", &theFormat.tree_Hemi_LLP_y, &theFormat.b_tree_Hemi_LLP_y);
   fChain->SetBranchAddress("tree_Hemi_LLP_z", &theFormat.tree_Hemi_LLP_z, &theFormat.b_tree_Hemi_LLP_z);
   fChain->SetBranchAddress("tree_Hemi_Vtx_step", &theFormat.tree_Hemi_Vtx_step, &theFormat.b_tree_Hemi_Vtx_step);
   fChain->SetBranchAddress("tree_Hemi_Vtx_NChi2", &theFormat.tree_Hemi_Vtx_NChi2, &theFormat.b_tree_Hemi_Vtx_NChi2);
   fChain->SetBranchAddress("tree_Hemi_Vtx_nTrks", &theFormat.tree_Hemi_Vtx_nTrks, &theFormat.b_tree_Hemi_Vtx_nTrks);
   fChain->SetBranchAddress("tree_Hemi_Vtx_nTrks_sig", &theFormat.tree_Hemi_Vtx_nTrks_sig, &theFormat.b_tree_Hemi_Vtx_nTrks_sig);
   fChain->SetBranchAddress("tree_Hemi_Vtx_nTrks_bad", &theFormat.tree_Hemi_Vtx_nTrks_bad, &theFormat.b_tree_Hemi_Vtx_nTrks_bad);
   fChain->SetBranchAddress("tree_Hemi_Vtx_x", &theFormat.tree_Hemi_Vtx_x, &theFormat.b_tree_Hemi_Vtx_x);
   fChain->SetBranchAddress("tree_Hemi_Vtx_y", &theFormat.tree_Hemi_Vtx_y, &theFormat.b_tree_Hemi_Vtx_y);
   fChain->SetBranchAddress("tree_Hemi_Vtx_r", &theFormat.tree_Hemi_Vtx_r, &theFormat.b_tree_Hemi_Vtx_r);
   fChain->SetBranchAddress("tree_Hemi_Vtx_z", &theFormat.tree_Hemi_Vtx_z, &theFormat.b_tree_Hemi_Vtx_z);
   fChain->SetBranchAddress("tree_Hemi_Vtx_dist", &theFormat.tree_Hemi_Vtx_dist, &theFormat.b_tree_Hemi_Vtx_dist);
   fChain->SetBranchAddress("tree_Hemi_Vtx_dx", &theFormat.tree_Hemi_Vtx_dx, &theFormat.b_tree_Hemi_Vtx_dx);
   fChain->SetBranchAddress("tree_Hemi_Vtx_dy", &theFormat.tree_Hemi_Vtx_dy, &theFormat.b_tree_Hemi_Vtx_dy);
   fChain->SetBranchAddress("tree_Hemi_Vtx_dz", &theFormat.tree_Hemi_Vtx_dz, &theFormat.b_tree_Hemi_Vtx_dz);
   fChain->SetBranchAddress("tree_Hemi_Vtx_dr", &theFormat.tree_Hemi_Vtx_dr, &theFormat.b_tree_Hemi_Vtx_dr);
   fChain->SetBranchAddress("tree_Hemi_Vtx_dd", &theFormat.tree_Hemi_Vtx_dd, &theFormat.b_tree_Hemi_Vtx_dd);
   fChain->SetBranchAddress("tree_Hemi_dR12", &theFormat.tree_Hemi_dR12, &theFormat.b_tree_Hemi_dR12);
   fChain->SetBranchAddress("tree_Hemi_LLP_dR12", &theFormat.tree_Hemi_LLP_dR12, &theFormat.b_tree_Hemi_LLP_dR12);
   fChain->SetBranchAddress("tree_Hemi_Vtx_ddbad", &theFormat.tree_Hemi_Vtx_ddbad, &theFormat.b_tree_Hemi_Vtx_ddbad);
   fChain->SetBranchAddress("tree_Hemi_Vtx_ntrk10", &theFormat.tree_Hemi_Vtx_ntrk10, &theFormat.b_tree_Hemi_Vtx_ntrk10);
   fChain->SetBranchAddress("tree_Hemi_Vtx_ntrk20", &theFormat.tree_Hemi_Vtx_ntrk20, &theFormat.b_tree_Hemi_Vtx_ntrk20);
   fChain->SetBranchAddress("tree_Hemi_Vtx_ddToBkg", &theFormat.tree_Hemi_Vtx_ddToBkg, &theFormat.b_tree_Hemi_Vtx_ddToBkg);
   fChain->SetBranchAddress("tree_Hemi_LLP_ping", &theFormat.tree_Hemi_LLP_ping, &theFormat.b_tree_Hemi_LLP_ping);
   fChain->SetBranchAddress("tree_event_LLP_ping", &theFormat.tree_event_LLP_ping, &theFormat.b_tree_event_LLP_ping);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v", &theFormat.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v, &theFormat.b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v", &theFormat.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v, &theFormat.b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v", &theFormat.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v, &theFormat.b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v);
   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v", &theFormat.HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v, &theFormat.b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v);
   fChain->SetBranchAddress("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v", &theFormat.HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v, &theFormat.b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v);
   fChain->SetBranchAddress("HLT_Ele27_WPTight_Gsf_v", &theFormat.HLT_Ele27_WPTight_Gsf_v, &theFormat.b_HLT_Ele27_WPTight_Gsf_v);
   fChain->SetBranchAddress("HLT_Ele32_WPTight_Gsf_v", &theFormat.HLT_Ele32_WPTight_Gsf_v, &theFormat.b_HLT_Ele32_WPTight_Gsf_v);
   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v", &theFormat.HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v, &theFormat.b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v);
   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v", &theFormat.HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v, &theFormat.b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight_v", &theFormat.HLT_PFMET120_PFMHT120_IDTight_v, &theFormat.b_HLT_PFMET120_PFMHT120_IDTight_v);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight_PFHT60_v", &theFormat.HLT_PFMET120_PFMHT120_IDTight_PFHT60_v, &theFormat.b_HLT_PFMET120_PFMHT120_IDTight_PFHT60_v);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_v", &theFormat.HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_v, &theFormat.b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_v);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v", &theFormat.HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v, &theFormat.b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v);
   fChain->SetBranchAddress("HLT_PFMET250_HBHECleaned_v", &theFormat.HLT_PFMET250_HBHECleaned_v, &theFormat.b_HLT_PFMET250_HBHECleaned_v);
   fChain->SetBranchAddress("HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_v", &theFormat.HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_v, &theFormat.b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_v);
   fChain->SetBranchAddress("HLT_IsoMu24_v", &theFormat.HLT_IsoMu24_v, &theFormat.b_HLT_IsoMu24_v);
   fChain->SetBranchAddress("HLT_IsoMu27_v", &theFormat.HLT_IsoMu27_v, &theFormat.b_HLT_IsoMu27_v);
   fChain->SetBranchAddress("HLT_PFHT500_PFMET100_PFMHT100_IDTight_v", &theFormat.HLT_PFHT500_PFMET100_PFMHT100_IDTight_v, &theFormat.b_HLT_PFHT500_PFMET100_PFMHT100_IDTight_v);
   fChain->SetBranchAddress("HLT_PFHT700_PFMET85_PFMHT85_IDTight_v", &theFormat.HLT_PFHT700_PFMET85_PFMHT85_IDTight_v, &theFormat.b_HLT_PFHT700_PFMET85_PFMHT85_IDTight_v);
   fChain->SetBranchAddress("HLT_PFHT800_PFMET75_PFMHT75_IDTight_v", &theFormat.HLT_PFHT800_PFMET75_PFMHT75_IDTight_v, &theFormat.b_HLT_PFHT800_PFMET75_PFMHT75_IDTight_v);
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
   
   track_size     = theFormat.tree_track_pt->size();
   muon_size      = theFormat.tree_muon_pt->size();
   
   
   // PV_size        = theFormat.tree_PV_NChi2->size();
   //SV_size        = theFormat.tree_secondaryVtx_X->size();
   // PFJet_size     = theFormat.tree_jet_pt->size();
}

void TreeReader::LoadPFJetSize(TreeFormat theFormat)
{
	PFJet_size = theFormat.tree_jet_pt->size();
}

// int TreeReader::LoadPVSize(TreeFormat theFormat)
// {
//    std::cout<<"1"<<std::endl;
// 	PV_size = theFormat.tree_PV_x->size();
//    return PV_size;
// }
#endif // #ifdef TreeReader_cxx


// Header file for the classes stored in the TTree if any.
#include "vector"

//header file for home made classes
#include "include/TreeFormat.h"
#include "include/HistoManager.h"
#include "include/DeltaFunc.h"
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
   // virtual void     ReadXML();
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
   float mva_track_phi;
   float mva_track_nchi2;
   float mva_track_nhits;
   float mva_track_numberOfValidPixelHits;
   float mva_track_numberOfValidStripHits;
   float mva_track_isinjet;
   float mva_track_algo;  
   //added variables by Paul
   float mva_ntrk10 ;
   float mva_ntrk20 ; 
   float mva_ntrk30; 
   float mva_ntrk40 ;
   float mva_ntrk1020;
   float mva_ntrk2030;
   float mva_drSig ;
   float mva_dzSig;
   float mva_ddSig;
   float mva_dd;
   float mva_ValTIBHit;
   float mva_ValTOBHit;
   float mva_ValPixBarHit;
   float mva_nValTECHHit;
   float mva_ntrk40XX;
   float mva_track_dR;
   float mva_track_dRmax;
   void LoadTreeSizes(TreeFormat theFormat);
   void LoadPFJetSize(TreeFormat theFormat);
};

#endif


#ifdef TreeReader_cxx
TreeReader::TreeReader(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Ntuplebgctau50_090822.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/opt/sbg/cms/ui2_data1/pvaucell/CMSSW_10_6_20_LLP2/src/test_MC/step3/UDD_bgctau50_smu275_snu225/2018_step3_test/0000/Ntuplebgctau50_090822.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/opt/sbg/cms/ui2_data1/pvaucell/CMSSW_10_6_20_LLP2/src/test_MC/step3/UDD_bgctau50_smu275_snu225/2018_step3_test/0000/Ntuplebgctau50_090822.root:/trackingPerf");
      dir->GetObject("ttree",tree);

   }
   // /opt/sbg/cms/ui2_data1/pvaucell/CMSSW_10_6_20_LLP2/src/test_MC/step3/UDD_bgctau50_smu275_snu225/2018_step3_test/0000/Ntuplebgctau50dRpi_2.root
   Init(tree);
}
///opt/sbg/cms/ui2_data1/pvaucell/LLTopAna/CMSSW_10_6_20/MC/2018/UDD_bgctau50_smu275_snu225.root
// UDD_bgctau70_smu250_snu200.root
// UDD_bgctau30_smu300_snu250.root
// UDD_bgctau10_smu250_snu200.root

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
  
  // fChain->SetBranchAddress("tree_track_simtrack_charge", 
  // &theFormat.tree_track_simtrack_charge, &theFormat.b_tree_track_simtrack_charge);
  // fChain->SetBranchAddress("tree_track_simtrack_pt", //&theFormat.tree_track_simtrack_pt, &theFormat.b_tree_track_simtrack_pt);
  // fChain->SetBranchAddress("tree_track_simtrack_eta", //&theFormat.tree_track_simtrack_eta, &theFormat.b_tree_track_simtrack_eta);
 //  fChain->SetBranchAddress("tree_track_simtrack_phi", //&theFormat.tree_track_simtrack_phi, &theFormat.b_tree_track_simtrack_phi);
  // fChain->SetBranchAddress("tree_track_simtrack_longLived", //&theFormat.tree_track_simtrack_longLived, &theFormat.b_tree_track_simtrack_longLived);
  // fChain->SetBranchAddress("tree_track_simtrack_pdgId", //&theFormat.tree_track_simtrack_pdgId, &theFormat.b_tree_track_simtrack_pdgId);
  fChain->SetBranchAddress("tree_track_simtrack_isFromLLP", &theFormat.tree_track_simtrack_isFromLLP, &theFormat.b_tree_track_simtrack_isFromLLP);
 //  fChain->SetBranchAddress("tree_track_simtrack_numberOfTrackerHits", //&theFormat.tree_track_simtrack_numberOfTrackerHits, //&theFormat.b_tree_track_simtrack_numberOfTrackerHits);
  // fChain->SetBranchAddress("tree_track_simtrack_numberOfTrackerLayers", //&theFormat.tree_track_simtrack_numberOfTrackerLayers, //&theFormat.b_tree_track_simtrack_numberOfTrackerLayers);
  // fChain->SetBranchAddress("tree_track_simtrack_mass", //&theFormat.tree_track_simtrack_mass, &theFormat.b_tree_track_simtrack_mass);
  // fChain->SetBranchAddress("tree_track_simtrack_status", //&theFormat.tree_track_simtrack_status, &theFormat.b_tree_track_simtrack_status);
 //  fChain->SetBranchAddress("tree_track_genVertexPos_X", //&theFormat.tree_track_genVertexPos_X, &theFormat.b_tree_track_genVertexPos_X);
  // fChain->SetBranchAddress("tree_track_genVertexPos_Y", //&theFormat.tree_track_genVertexPos_Y, &theFormat.b_tree_track_genVertexPos_Y);
 //  fChain->SetBranchAddress("tree_track_genVertexPos_Z", //&theFormat.tree_track_genVertexPos_Z, &theFormat.b_tree_track_genVertexPos_Z);
   fChain->SetBranchAddress("tree_track_recoVertex_idx", &theFormat.tree_track_recoVertex_idx, &theFormat.b_tree_track_recoVertex_idx);
   fChain->SetBranchAddress("tree_track_recoAK4SlimmedJet_idx", &theFormat.tree_track_recoAK4SlimmedJet_idx, &theFormat.b_tree_track_recoAK4SlimmedJet_idx);
   fChain->SetBranchAddress("tree_track_recoAK4PFJet_idx", &theFormat.tree_track_recoAK4PFJet_idx, &theFormat.b_tree_track_recoAK4PFJet_idx);
   fChain->SetBranchAddress("tree_track_reco08Jet_idx", &theFormat.tree_track_reco08Jet_idx, &theFormat.b_tree_track_reco08Jet_idx);
   fChain->SetBranchAddress("tree_track_recoCaloJet_idx", &theFormat.tree_track_recoCaloJet_idx, &theFormat.b_tree_track_recoCaloJet_idx);
   //fChain->SetBranchAddress("tree_track_MVAval_FromDispTop", //&theFormat.tree_track_MVAval_FromDispTop, &theFormat.b_tree_track_MVAval_FromDispTop);
  // fChain->SetBranchAddress("tree_secondaryVtx_X", &theFormat.tree_secondaryVtx_X, //&theFormat.b_tree_secondaryVtx_X);
  // fChain->SetBranchAddress("tree_secondaryVtx_Y", &theFormat.tree_secondaryVtx_Y, &theFormat.b_tree_secondaryVtx_Y);
  // fChain->SetBranchAddress("tree_secondaryVtx_Z", &theFormat.tree_secondaryVtx_Z, &theFormat.b_tree_secondaryVtx_Z);
   //fChain->SetBranchAddress("tree_secondaryVtx_diff_X", &theFormat.tree_secondaryVtx_diff_X, &theFormat.b_tree_secondaryVtx_diff_X);
  // fChain->SetBranchAddress("tree_secondaryVtx_diff_Y", &theFormat.tree_secondaryVtx_diff_Y, &theFormat.b_tree_secondaryVtx_diff_Y);
  // fChain->SetBranchAddress("tree_secondaryVtx_diff_Z", &theFormat.tree_secondaryVtx_diff_Z, &theFormat.b_tree_secondaryVtx_diff_Z);
   //fChain->SetBranchAddress("tree_secondaryVtx_nTracks", &theFormat.tree_secondaryVtx_nTracks, &theFormat.b_tree_secondaryVtx_nTracks);
  // fChain->SetBranchAddress("tree_secondaryVtx_isValid", &theFormat.tree_secondaryVtx_isValid, &theFormat.b_tree_secondaryVtx_isValid);
   //fChain->SetBranchAddress("tree_secondaryVtx_NChi2", &theFormat.tree_secondaryVtx_NChi2, &theFormat.b_tree_secondaryVtx_NChi2);
  // fChain->SetBranchAddress("tree_secondaryVtx_iterative_X", &theFormat.tree_secondaryVtx_iterative_X, &theFormat.b_tree_secondaryVtx_iterative_X);
   //fChain->SetBranchAddress("tree_secondaryVtx_iterative_Y", &theFormat.tree_secondaryVtx_iterative_Y, &theFormat.b_tree_secondaryVtx_iterative_Y);
  // fChain->SetBranchAddress("tree_secondaryVtx_iterative_Z", &theFormat.tree_secondaryVtx_iterative_Z, &theFormat.b_tree_secondaryVtx_iterative_Z);
  // fChain->SetBranchAddress("tree_secondaryVtx_iterative_nTracks", &theFormat.tree_secondaryVtx_iterative_nTracks, &theFormat.b_tree_secondaryVtx_iterative_nTracks);
  // fChain->SetBranchAddress("tree_secondaryVtx_iterative_NChi2", &theFormat.tree_secondaryVtx_iterative_NChi2, &theFormat.b_tree_secondaryVtx_iterative_NChi2);
  // fChain->SetBranchAddress("tree_secondaryVtx_iterative_isSelected", &theFormat.tree_secondaryVtx_iterative_isSelected, &theFormat.b_tree_secondaryVtx_iterative_isSelected);
  // fChain->SetBranchAddress("tree_simtrack_simtrack_charge", &theFormat.tree_simtrack_simtrack_charge, &theFormat.b_tree_simtrack_simtrack_charge);
  // fChain->SetBranchAddress("tree_simtrack_simtrack_pt", &theFormat.tree_simtrack_simtrack_pt, &theFormat.b_tree_simtrack_simtrack_pt);
  // fChain->SetBranchAddress("tree_simtrack_simtrack_eta", &theFormat.tree_simtrack_simtrack_eta, &theFormat.b_tree_simtrack_simtrack_eta);
  // fChain->SetBranchAddress("tree_simtrack_simtrack_phi", &theFormat.tree_simtrack_simtrack_phi, &theFormat.b_tree_simtrack_simtrack_phi);
  // fChain->SetBranchAddress("tree_simtrack_simtrack_longLived", &theFormat.tree_simtrack_simtrack_longLived, &theFormat.b_tree_simtrack_simtrack_longLived);
  // fChain->SetBranchAddress("tree_simtrack_simtrack_pdgId", &theFormat.tree_simtrack_simtrack_pdgId, &theFormat.b_tree_simtrack_simtrack_pdgId);
  // fChain->SetBranchAddress("tree_simtrack_simtrack_mass", &theFormat.tree_simtrack_simtrack_mass, &theFormat.b_tree_simtrack_simtrack_mass);
  // fChain->SetBranchAddress("tree_simtrack_simtrack_status", &theFormat.tree_simtrack_simtrack_status, &theFormat.b_tree_simtrack_simtrack_status);
  // fChain->SetBranchAddress("tree_simtrack_genVertexPos_X", &theFormat.tree_simtrack_genVertexPos_X, &theFormat.b_tree_simtrack_genVertexPos_X);
  // fChain->SetBranchAddress("tree_simtrack_genVertexPos_Y", &theFormat.tree_simtrack_genVertexPos_Y, &theFormat.b_tree_simtrack_genVertexPos_Y);
   //fChain->SetBranchAddress("tree_simtrack_genVertexPos_Z", &theFormat.tree_simtrack_genVertexPos_Z, &theFormat.b_tree_simtrack_genVertexPos_Z);
   //fChain->SetBranchAddress("tree_simtrack_isRecoMatched", &theFormat.tree_simtrack_isRecoMatched, &theFormat.b_tree_simtrack_isRecoMatched);
  // fChain->SetBranchAddress("tree_simtrack_pca_dxy", &theFormat.tree_simtrack_pca_dxy, &theFormat.b_tree_simtrack_pca_dxy);
  // fChain->SetBranchAddress("tree_simtrack_pca_dz", &theFormat.tree_simtrack_pca_dz, &theFormat.b_tree_simtrack_pca_dz);
  // fChain->SetBranchAddress("tree_simtrack_trkIdx", &theFormat.tree_simtrack_trkIdx, &theFormat.b_tree_simtrack_trkIdx);
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

   //Added by Paul, not sure about it 
   //fChain->SetBranchAddress("tree_Hemi_Strack_dR", &theFormat.tree_Hemi_Strack_dR, &theFormat.b_tree_Hemi_Strack_dR);
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
   //SV_size        = theFormat.tree_secondaryVtx_X->size();
   //PFJet_size     = theFormat.tree_AK4Slimmedjet_pt->size();
}

void TreeReader::LoadPFJetSize(TreeFormat theFormat)
{
	PFJet_size = theFormat.tree_AK4Slimmedjet_pt->size();
}

#endif // #ifdef TreeReader_cxx
