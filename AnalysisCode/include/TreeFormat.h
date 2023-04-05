#ifndef TREEFORMAT_H
#define TREEFORMAT_H
#include "TBranch.h"
 
 class TreeFormat
 {
     public :

        TreeFormat(){};
        virtual ~TreeFormat(){};

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
 };


#endif
