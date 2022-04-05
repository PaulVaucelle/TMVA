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
   Float_t         tree_bs_PosX;
   Float_t         tree_bs_PosY;
   Float_t         tree_bs_PosZ;
   vector<float>   *tree_vtx_PosX;
   vector<float>   *tree_vtx_PosY;
   vector<float>   *tree_vtx_PosZ;
   vector<float>   *tree_vtx_NChi2;
   vector<float>   *tree_vtx_PosXError;
   vector<float>   *tree_vtx_PosYError;
   vector<float>   *tree_vtx_PosZError;
   vector<string>  *tree_trigger_names;
   vector<bool>    *tree_trigger_bits;
   Int_t           tree_NbrOfZCand;
   vector<bool>    *tree_passesHTFilter;
   vector<float>   *tree_track_pt;
   vector<float>   *tree_track_outerPt;
   vector<float>   *tree_track_eta;
   vector<float>   *tree_track_phi;
   vector<int>     *tree_track_charge;
   vector<int>     *tree_track_nhits;
   vector<float>   *tree_track_NChi2;
   vector<bool>    *tree_track_isHighQuality;
   vector<bool>    *tree_track_isLoose;
   vector<bool>    *tree_track_isTight;
   vector<float>   *tree_track_dxy;
   vector<float>   *tree_track_dxyError;
   vector<float>   *tree_track_dz;
   vector<float>   *tree_track_dzError;
   vector<int>     *tree_track_numberOfLostHits;
   vector<int>     *tree_track_numberOfValidHits;
   vector<unsigned int> *tree_track_originalAlgo;
   vector<unsigned int> *tree_track_algo;
   vector<unsigned short> *tree_track_stopReason;
   vector<bool>    *tree_track_isSimMatched;
   vector<int>     *tree_track_numberOfValidPixelHits;
   vector<int>     *tree_track_numberOfValidStripHits;
   vector<int>     *tree_track_numberOfValidStripTIBHits;
   vector<int>     *tree_track_numberOfValidStripTIDHits;
   vector<int>     *tree_track_numberOfValidStripTOBHits;
   vector<int>     *tree_track_numberOfValidStripTECHits;
   vector<int>     *tree_track_numberOfValidPixelBarrelHits;
   vector<int>     *tree_track_numberOfValidPixelEndcapHits;
   vector<int>     *tree_track_hasValidHitInPixelLayer;
   vector<int>     *tree_track_trackerLayersWithMeasurement;
   vector<int>     *tree_track_pixelLayersWithMeasurement;
   vector<int>     *tree_track_stripTECLayersWithMeasurement;
   vector<int>     *tree_track_stripTIBLayersWithMeasurement;
   vector<int>     *tree_track_stripTIDLayersWithMeasurement;
   vector<int>     *tree_track_stripTOBLayersWithMeasurement;
   vector<float>   *tree_track_vx;
   vector<float>   *tree_track_vy;
   vector<float>   *tree_track_vz;
   vector<float>   *tree_track_firsthit_X;
   vector<float>   *tree_track_firsthit_Y;
   vector<float>   *tree_track_firsthit_Z;
   vector<float>   *tree_track_firsthit_phi;
   vector<int>     *tree_track_simtrack_charge;
   vector<float>   *tree_track_simtrack_pt;
   vector<float>   *tree_track_simtrack_eta;
   vector<float>   *tree_track_simtrack_phi;
   vector<bool>    *tree_track_simtrack_longLived;
   vector<int>     *tree_track_simtrack_pdgId;
   vector<int>     *tree_track_simtrack_isFromLLP;
   vector<int>     *tree_track_simtrack_numberOfTrackerHits;
   vector<int>     *tree_track_simtrack_numberOfTrackerLayers;
   vector<float>   *tree_track_simtrack_mass;
   vector<int>     *tree_track_simtrack_status;
   vector<float>   *tree_track_genVertexPos_X;
   vector<float>   *tree_track_genVertexPos_Y;
   vector<float>   *tree_track_genVertexPos_Z;
   vector<int>     *tree_track_recoVertex_idx;
   vector<int>     *tree_track_recoAK4SlimmedJet_idx;
   vector<int>     *tree_track_recoAK4PFJet_idx;
   vector<int>     *tree_track_reco08Jet_idx;
   vector<int>     *tree_track_recoCaloJet_idx;
   vector<double>  *tree_track_MVAval_FromDispTop;
   vector<float>   *tree_secondaryVtx_X;
   vector<float>   *tree_secondaryVtx_Y;
   vector<float>   *tree_secondaryVtx_Z;
   vector<float>   *tree_secondaryVtx_diff_X;
   vector<float>   *tree_secondaryVtx_diff_Y;
   vector<float>   *tree_secondaryVtx_diff_Z;
   vector<int>     *tree_secondaryVtx_nTracks;
   vector<int>     *tree_secondaryVtx_isValid;
   vector<float>   *tree_secondaryVtx_NChi2;
   vector<float>   *tree_secondaryVtx_iterative_X;
   vector<float>   *tree_secondaryVtx_iterative_Y;
   vector<float>   *tree_secondaryVtx_iterative_Z;
   vector<int>     *tree_secondaryVtx_iterative_nTracks;
   vector<float>   *tree_secondaryVtx_iterative_NChi2;
   vector<bool>    *tree_secondaryVtx_iterative_isSelected;
   vector<int>     *tree_simtrack_simtrack_charge;
   vector<float>   *tree_simtrack_simtrack_pt;
   vector<float>   *tree_simtrack_simtrack_eta;
   vector<float>   *tree_simtrack_simtrack_phi;
   vector<bool>    *tree_simtrack_simtrack_longLived;
   vector<int>     *tree_simtrack_simtrack_pdgId;
   vector<float>   *tree_simtrack_simtrack_mass;
   vector<int>     *tree_simtrack_simtrack_status;
   vector<float>   *tree_simtrack_genVertexPos_X;
   vector<float>   *tree_simtrack_genVertexPos_Y;
   vector<float>   *tree_simtrack_genVertexPos_Z;
   vector<bool>    *tree_simtrack_isRecoMatched;
   vector<float>   *tree_simtrack_pca_dxy;
   vector<float>   *tree_simtrack_pca_dz;
   vector<vector<int> > *tree_simtrack_trkIdx;
   vector<float>   *tree_AK4Slimmedjet_E;
   vector<float>   *tree_AK4Slimmedjet_pt;
   vector<float>   *tree_AK4Slimmedjet_eta;
   vector<float>   *tree_AK4Slimmedjet_phi;
   vector<int>     *tree_AK4Slimmedjet_idxTrack;
   vector<float>   *tree_AK4PFjet_E;
   vector<float>   *tree_AK4PFjet_pt;
   vector<float>   *tree_AK4PFjet_eta;
   vector<float>   *tree_AK4PFjet_phi;
   vector<int>     *tree_AK4PFjet_idxTrack;
   vector<float>   *tree_CaloJet_E;
   vector<float>   *tree_CaloJet_pt;
   vector<float>   *tree_CaloJet_eta;
   vector<float>   *tree_CaloJet_phi;
   vector<int>     *tree_CaloJet_idxTrack;
   vector<float>   *tree_jet08_E;
   vector<float>   *tree_jet08_pt;
   vector<float>   *tree_jet08_eta;
   vector<float>   *tree_jet08_phi;
   vector<int>     *tree_jet08_idxTrack;
   vector<float>   *tree_PFMet_et;
   vector<float>   *tree_PFMet_phi;
   vector<float>   *tree_PFMet_sig;
   vector<float>   *tree_genParticle_pt;
   vector<float>   *tree_genParticle_eta;
   vector<float>   *tree_genParticle_phi;
   vector<float>   *tree_genParticle_charge;
   vector<float>   *tree_genParticle_pdgId;
   vector<float>   *tree_genParticle_vx;
   vector<float>   *tree_genParticle_vy;
   vector<float>   *tree_genParticle_vz;
   vector<float>   *tree_genParticle_mass;
   vector<int>     *tree_genParticle_statusCode;
   vector<int>     *tree_genParticle_mother_pdgId;
   vector<float>   *tree_genParticle_mother_pt;
   vector<float>   *tree_genParticle_mother_eta;
   vector<float>   *tree_genParticle_mother_phi;
   vector<float>   *tree_genJet_pt;
   vector<float>   *tree_genJet_eta;
   vector<float>   *tree_genJet_phi;
   vector<float>   *tree_genJet_mass;
   vector<float>   *tree_genJet_energy;
   vector<float>   *tree_ak8GenJet_pt;
   vector<float>   *tree_ak8GenJet_eta;
   vector<float>   *tree_ak8GenJet_phi;
   vector<float>   *tree_ak8GenJet_mass;
   vector<float>   *tree_ak8GenJet_energy;
   vector<float>   *tree_electron_pt;
   vector<float>   *tree_electron_eta;
   vector<float>   *tree_electron_phi;
   vector<float>   *tree_electron_vx;
   vector<float>   *tree_electron_vy;
   vector<float>   *tree_electron_vz;
   vector<float>   *tree_electron_energy;
   vector<float>   *tree_slimmedmuon_pt;
   vector<float>   *tree_slimmedmuon_eta;
   vector<float>   *tree_slimmedmuon_phi;
   vector<float>   *tree_slimmedmuon_vx;
   vector<float>   *tree_slimmedmuon_vy;
   vector<float>   *tree_slimmedmuon_vz;
   vector<float>   *tree_slimmedmuon_energy;
   vector<float>   *tree_slimmedmuon_dxy;
   vector<float>   *tree_slimmedmuon_dxyError;
   vector<float>   *tree_slimmedmuon_dz;
   vector<float>   *tree_slimmedmuon_dzError;
   vector<float>   *tree_slimmedmuon_charge;
   vector<bool>    *tree_slimmedmuon_PFisoVeryTight;
   vector<bool>    *tree_slimmedmuon_PFisoTight;
   vector<bool>    *tree_slimmedmuon_PFisoMedium;
   vector<bool>    *tree_slimmedmuon_PFisoLoose;
   vector<bool>    *tree_slimmedmuon_MVAisoLoose;
   vector<bool>    *tree_slimmedmuon_MVAisoMedium;
   vector<bool>    *tree_slimmedmuon_MVAisoTight;
   vector<bool>    *tree_slimmedmuon_isGlobalMuon;
   vector<bool>    *tree_slimmedmuon_isStandAloneMuon;
   vector<bool>    *tree_slimmedmuon_CutBasedIdLoose;
   vector<bool>    *tree_slimmedmuon_CutBasedIdMedium;
   vector<bool>    *tree_slimmedmuon_CutBasedIdMediumPrompt;
   vector<bool>    *tree_slimmedmuon_CutBasedIdTight;

   // List of branches
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_tree_bs_PosX;   //!
   TBranch        *b_tree_bs_PosY;   //!
   TBranch        *b_tree_bs_PosZ;   //!
   TBranch        *b_tree_vtx_PosX;   //!
   TBranch        *b_tree_vtx_PosY;   //!
   TBranch        *b_tree_vtx_PosZ;   //!
   TBranch        *b_tree_vtx_NChi2;   //!
   TBranch        *b_tree_vtx_PosXError;   //!
   TBranch        *b_tree_vtx_PosYError;   //!
   TBranch        *b_tree_vtx_PosZError;   //!
   TBranch        *b_tree_trigger_names;   //!
   TBranch        *b_tree_trigger_bits;   //!
   TBranch        *b_tree_NbrOfZCand;   //!
   TBranch        *b_tree_passesHTFilter;   //!
   TBranch        *b_tree_track_pt;   //!
   TBranch        *b_tree_track_outerPt;   //!
   TBranch        *b_tree_track_eta;   //!
   TBranch        *b_tree_track_phi;   //!
   TBranch        *b_tree_track_charge;   //!
   TBranch        *b_tree_track_nhits;   //!
   TBranch        *b_tree_track_NChi2;   //!
   TBranch        *b_tree_track_isHighQuality;   //!
   TBranch        *b_tree_track_isLoose;   //!
   TBranch        *b_tree_track_isTight;   //!
   TBranch        *b_tree_track_dxy;   //!
   TBranch        *b_tree_track_dxyError;   //!
   TBranch        *b_tree_track_dz;   //!
   TBranch        *b_tree_track_dzError;   //!
   TBranch        *b_tree_track_numberOfLostHits;   //!
   TBranch        *b_tree_track_numberOfValidHits;   //!
   TBranch        *b_tree_track_originalAlgo;   //!
   TBranch        *b_tree_track_algo;   //!
   TBranch        *b_tree_track_stopReason;   //!
   TBranch        *b_tree_track_isSimMatched;   //!
   TBranch        *b_tree_track_numberOfValidPixelHits;   //!
   TBranch        *b_tree_track_numberOfValidStripHits;   //!
   TBranch        *b_tree_track_numberOfValidStripTIBHits;   //!
   TBranch        *b_tree_track_numberOfValidStripTIDHits;   //!
   TBranch        *b_tree_track_numberOfValidStripTOBHits;   //!
   TBranch        *b_tree_track_numberOfValidStripTECHits;   //!
   TBranch        *b_tree_track_numberOfValidPixelBarrelHits;   //!
   TBranch        *b_tree_track_numberOfValidPixelEndcapHits;   //!
   TBranch        *b_tree_track_hasValidHitInPixelLayer;   //!
   TBranch        *b_tree_track_trackerLayersWithMeasurement;   //!
   TBranch        *b_tree_track_pixelLayersWithMeasurement;   //!
   TBranch        *b_tree_track_stripTECLayersWithMeasurement;   //!
   TBranch        *b_tree_track_stripTIBLayersWithMeasurement;   //!
   TBranch        *b_tree_track_stripTIDLayersWithMeasurement;   //!
   TBranch        *b_tree_track_stripTOBLayersWithMeasurement;   //!
   TBranch        *b_tree_track_vx;   //!
   TBranch        *b_tree_track_vy;   //!
   TBranch        *b_tree_track_vz;   //!
   TBranch        *b_tree_track_firsthit_X;   //!
   TBranch        *b_tree_track_firsthit_Y;   //!
   TBranch        *b_tree_track_firsthit_Z;   //!
   TBranch        *b_tree_track_firsthit_phi;   //!
   TBranch        *b_tree_track_simtrack_charge;   //!
   TBranch        *b_tree_track_simtrack_pt;   //!
   TBranch        *b_tree_track_simtrack_eta;   //!
   TBranch        *b_tree_track_simtrack_phi;   //!
   TBranch        *b_tree_track_simtrack_longLived;   //!
   TBranch        *b_tree_track_simtrack_pdgId;   //!
   TBranch        *b_tree_track_simtrack_isFromLLP;   //!
   TBranch        *b_tree_track_simtrack_numberOfTrackerHits;   //!
   TBranch        *b_tree_track_simtrack_numberOfTrackerLayers;   //!
   TBranch        *b_tree_track_simtrack_mass;   //!
   TBranch        *b_tree_track_simtrack_status;   //!
   TBranch        *b_tree_track_genVertexPos_X;   //!
   TBranch        *b_tree_track_genVertexPos_Y;   //!
   TBranch        *b_tree_track_genVertexPos_Z;   //!
   TBranch        *b_tree_track_recoVertex_idx;   //!
   TBranch        *b_tree_track_recoAK4SlimmedJet_idx;   //!
   TBranch        *b_tree_track_recoAK4PFJet_idx;   //!
   TBranch        *b_tree_track_reco08Jet_idx;   //!
   TBranch        *b_tree_track_recoCaloJet_idx;   //!
   TBranch        *b_tree_track_MVAval_FromDispTop;   //!
   TBranch        *b_tree_secondaryVtx_X;   //!
   TBranch        *b_tree_secondaryVtx_Y;   //!
   TBranch        *b_tree_secondaryVtx_Z;   //!
   TBranch        *b_tree_secondaryVtx_diff_X;   //!
   TBranch        *b_tree_secondaryVtx_diff_Y;   //!
   TBranch        *b_tree_secondaryVtx_diff_Z;   //!
   TBranch        *b_tree_secondaryVtx_nTracks;   //!
   TBranch        *b_tree_secondaryVtx_isValid;   //!
   TBranch        *b_tree_secondaryVtx_NChi2;   //!
   TBranch        *b_tree_secondaryVtx_iterative_X;   //!
   TBranch        *b_tree_secondaryVtx_iterative_Y;   //!
   TBranch        *b_tree_secondaryVtx_iterative_Z;   //!
   TBranch        *b_tree_secondaryVtx_iterative_nTracks;   //!
   TBranch        *b_tree_secondaryVtx_iterative_NChi2;   //!
   TBranch        *b_tree_secondaryVtx_iterative_isSelected;   //!
   TBranch        *b_tree_simtrack_simtrack_charge;   //!
   TBranch        *b_tree_simtrack_simtrack_pt;   //!
   TBranch        *b_tree_simtrack_simtrack_eta;   //!
   TBranch        *b_tree_simtrack_simtrack_phi;   //!
   TBranch        *b_tree_simtrack_simtrack_longLived;   //!
   TBranch        *b_tree_simtrack_simtrack_pdgId;   //!
   TBranch        *b_tree_simtrack_simtrack_mass;   //!
   TBranch        *b_tree_simtrack_simtrack_status;   //!
   TBranch        *b_tree_simtrack_genVertexPos_X;   //!
   TBranch        *b_tree_simtrack_genVertexPos_Y;   //!
   TBranch        *b_tree_simtrack_genVertexPos_Z;   //!
   TBranch        *b_tree_simtrack_isRecoMatched;   //!
   TBranch        *b_tree_simtrack_pca_dxy;   //!
   TBranch        *b_tree_simtrack_pca_dz;   //!
   TBranch        *b_tree_simtrack_trkIdx;   //!
   TBranch        *b_tree_AK4Slimmedjet_E;   //!
   TBranch        *b_tree_AK4Slimmedjet_pt;   //!
   TBranch        *b_tree_AK4Slimmedjet_eta;   //!
   TBranch        *b_tree_AK4Slimmedjet_phi;   //!
   TBranch        *b_tree_AK4Slimmedjet_idxTrack;   //!
   TBranch        *b_tree_AK4PFjet_E;   //!
   TBranch        *b_tree_AK4PFjet_pt;   //!
   TBranch        *b_tree_AK4PFjet_eta;   //!
   TBranch        *b_tree_AK4PFjet_phi;   //!
   TBranch        *b_tree_AK4PFjet_idxTrack;   //!
   TBranch        *b_tree_CaloJet_E;   //!
   TBranch        *b_tree_CaloJet_pt;   //!
   TBranch        *b_tree_CaloJet_eta;   //!
   TBranch        *b_tree_CaloJet_phi;   //!
   TBranch        *b_tree_CaloJet_idxTrack;   //!
   TBranch        *b_tree_jet08_E;   //!
   TBranch        *b_tree_jet08_pt;   //!
   TBranch        *b_tree_jet08_eta;   //!
   TBranch        *b_tree_jet08_phi;   //!
   TBranch        *b_tree_jet08_idxTrack;   //!
   TBranch        *b_tree_PFMet_et;   //!
   TBranch        *b_tree_PFMet_phi;   //!
   TBranch        *b_tree_PFMet_sig;   //!
   TBranch        *b_tree_genParticle_pt;   //!
   TBranch        *b_tree_genParticle_eta;   //!
   TBranch        *b_tree_genParticle_phi;   //!
   TBranch        *b_tree_genParticle_charge;   //!
   TBranch        *b_tree_genParticle_pdgId;   //!
   TBranch        *b_tree_genParticle_vx;   //!
   TBranch        *b_tree_genParticle_vy;   //!
   TBranch        *b_tree_genParticle_vz;   //!
   TBranch        *b_tree_genParticle_mass;   //!
   TBranch        *b_tree_genParticle_statusCode;   //!
   TBranch        *b_tree_genParticle_mother_pdgId;   //!
   TBranch        *b_tree_genParticle_mother_pt;   //!
   TBranch        *b_tree_genParticle_mother_eta;   //!
   TBranch        *b_tree_genParticle_mother_phi;   //!
   TBranch        *b_tree_genJet_pt;   //!
   TBranch        *b_tree_genJet_eta;   //!
   TBranch        *b_tree_genJet_phi;   //!
   TBranch        *b_tree_genJet_mass;   //!
   TBranch        *b_tree_genJet_energy;   //!
   TBranch        *b_tree_ak8GenJet_pt;   //!
   TBranch        *b_tree_ak8GenJet_eta;   //!
   TBranch        *b_tree_ak8GenJet_phi;   //!
   TBranch        *b_tree_ak8GenJet_mass;   //!
   TBranch        *b_tree_ak8GenJet_energy;   //!
   TBranch        *b_tree_electron_pt;   //!
   TBranch        *b_tree_electron_eta;   //!
   TBranch        *b_tree_electron_phi;   //!
   TBranch        *b_tree_electron_vx;   //!
   TBranch        *b_tree_electron_vy;   //!
   TBranch        *b_tree_electron_vz;   //!
   TBranch        *b_tree_electron_energy;   //!
   TBranch        *b_tree_slimmedmuon_pt;   //!
   TBranch        *b_tree_slimmedmuon_eta;   //!
   TBranch        *b_tree_slimmedmuon_phi;   //!
   TBranch        *b_tree_slimmedmuon_vx;   //!
   TBranch        *b_tree_slimmedmuon_vy;   //!
   TBranch        *b_tree_slimmedmuon_vz;   //!
   TBranch        *b_tree_slimmedmuon_energy;   //!
   TBranch        *b_tree_slimmedmuon_dxy;   //!
   TBranch        *b_tree_slimmedmuon_dxyError;   //!
   TBranch        *b_tree_slimmedmuon_dz;   //!
   TBranch        *b_tree_slimmedmuon_dzError;   //!
   TBranch        *b_tree_slimmedmuon_charge;   //!
   TBranch        *b_tree_slimmedmuon_PFisoVeryTight;   //!
   TBranch        *b_tree_slimmedmuon_PFisoTight;   //!
   TBranch        *b_tree_slimmedmuon_PFisoMedium;   //!
   TBranch        *b_tree_slimmedmuon_PFisoLoose;   //!
   TBranch        *b_tree_slimmedmuon_MVAisoLoose;   //!
   TBranch        *b_tree_slimmedmuon_MVAisoMedium;   //!
   TBranch        *b_tree_slimmedmuon_MVAisoTight;   //!
   TBranch        *b_tree_slimmedmuon_isGlobalMuon;   //!
   TBranch        *b_tree_slimmedmuon_isStandAloneMuon;   //!
   TBranch        *b_tree_slimmedmuon_CutBasedIdLoose;   //!
   TBranch        *b_tree_slimmedmuon_CutBasedIdMedium;   //!
   TBranch        *b_tree_slimmedmuon_CutBasedIdMediumPrompt;   //!
   TBranch        *b_tree_slimmedmuon_CutBasedIdTight;   //!
 };


#endif
