#include <iostream>
#include <iomanip>
#include "../include/Track.h"
    
Track::Track()
{
}

Track::~Track()
{
}

void Track::read(int theIdx, TreeFormat * theContainer)
{
    _idx = theIdx;


    _track_pt                                       =&theContainer->tree_track_pt->at(_idx);
    _track_outerPt                                  =&theContainer->tree_track_outerPt->at(_idx);
    _track_eta                                      =&theContainer->tree_track_eta->at(_idx);
    _track_phi                                      =&theContainer->tree_track_phi->at(_idx);
    _track_charge                                   =&theContainer->tree_track_charge->at(_idx);
    _track_nhits                                    =&theContainer->tree_track_nhits->at(_idx);
    _track_NChi2                                    =&theContainer->tree_track_NChi2->at(_idx);
    _track_isHighQuality                            =theContainer->tree_track_isHighQuality->at(_idx);
    _track_isLoose                                  =theContainer->tree_track_isLoose->at(_idx);
    _track_isTight                                  =theContainer->tree_track_isTight->at(_idx);
    _track_dxy                                      =&theContainer->tree_track_dxy->at(_idx);
    _track_dxyError                                 =&theContainer->tree_track_dxyError->at(_idx);
    _track_dz                                       =&theContainer->tree_track_dz->at(_idx);
    _track_dzError                                  =&theContainer->tree_track_dzError->at(_idx);
    _track_numberOfLostHits                         =&theContainer->tree_track_numberOfLostHits->at(_idx);
    _track_numberOfValidHits                        =&theContainer->tree_track_numberOfValidHits->at(_idx);
    _track_originalAlgo                             =&theContainer->tree_track_originalAlgo->at(_idx);
    _track_algo                                     =&theContainer->tree_track_algo->at(_idx);
    _track_stopReason                               =&theContainer->tree_track_stopReason->at(_idx);
    _track_isSimMatched                             =theContainer->tree_track_isSimMatched->at(_idx);
    _track_numberOfValidPixelHits                   =&theContainer->tree_track_numberOfValidPixelHits->at(_idx);
    _track_numberOfValidStripHits                   =&theContainer->tree_track_numberOfValidStripHits->at(_idx);
    _track_numberOfValidStripTIBHits                =&theContainer->tree_track_numberOfValidStripTIBHits->at(_idx);
    _track_numberOfValidStripTIDHits                =&theContainer->tree_track_numberOfValidStripTIDHits->at(_idx);
    _track_numberOfValidStripTOBHits                =&theContainer->tree_track_numberOfValidStripTOBHits->at(_idx);
    _track_numberOfValidStripTECHits                =&theContainer->tree_track_numberOfValidStripTECHits->at(_idx);
    _track_numberOfValidPixelBarrelHits             =&theContainer->tree_track_numberOfValidPixelBarrelHits->at(_idx);
    _track_numberOfValidPixelEndcapHits             =&theContainer->tree_track_numberOfValidPixelEndcapHits->at(_idx);
    _track_hasValidHitInPixelLayer                  =&theContainer->tree_track_hasValidHitInPixelLayer->at(_idx);
    _track_trackerLayersWithMeasurement             =&theContainer->tree_track_trackerLayersWithMeasurement->at(_idx);
    _track_pixelLayersWithMeasurement               =&theContainer->tree_track_pixelLayersWithMeasurement->at(_idx);
    _track_stripTECLayersWithMeasurement            =&theContainer->tree_track_stripTECLayersWithMeasurement->at(_idx);
    _track_stripTIBLayersWithMeasurement            =&theContainer->tree_track_stripTIBLayersWithMeasurement->at(_idx);
    _track_stripTIDLayersWithMeasurement            =&theContainer->tree_track_stripTIDLayersWithMeasurement->at(_idx);
    _track_stripTOBLayersWithMeasurement            =&theContainer->tree_track_stripTOBLayersWithMeasurement->at(_idx);
    _track_vx                                       =&theContainer->tree_track_vx->at(_idx);
    _track_vy                                       =&theContainer->tree_track_vy->at(_idx);
    _track_vz                                       =&theContainer->tree_track_vz->at(_idx);
    _track_firsthit_X                               =&theContainer->tree_track_firsthit_X->at(_idx);
    _track_firsthit_Y                               =&theContainer->tree_track_firsthit_Y->at(_idx);
    _track_firsthit_Z                               =&theContainer->tree_track_firsthit_Z->at(_idx);
    _track_firsthit_phi                             =&theContainer->tree_track_firsthit_phi->at(_idx);
    _track_simtrack_charge                          =&theContainer->tree_track_simtrack_charge->at(_idx);
    _track_simtrack_pt                              =&theContainer->tree_track_simtrack_pt->at(_idx);
    _track_simtrack_eta                             =&theContainer->tree_track_simtrack_eta->at(_idx);
    _track_simtrack_phi                             =&theContainer->tree_track_simtrack_phi->at(_idx);
    _track_simtrack_longLived                       =theContainer->tree_track_simtrack_longLived->at(_idx);
    _track_simtrack_pdgId                           =&theContainer->tree_track_simtrack_pdgId->at(_idx);
    _track_simtrack_isFromLLP                       =&theContainer->tree_track_simtrack_isFromLLP->at(_idx);
    _track_simtrack_numberOfTrackerHits             =&theContainer->tree_track_simtrack_numberOfTrackerHits->at(_idx);
    _track_simtrack_numberOfTrackerLayers           =&theContainer->tree_track_simtrack_numberOfTrackerLayers->at(_idx);
    _track_simtrack_mass                            =&theContainer->tree_track_simtrack_mass->at(_idx);
    _track_simtrack_status                          =&theContainer->tree_track_simtrack_status->at(_idx);
    _track_genVertexPos_X                           =&theContainer->tree_track_genVertexPos_X->at(_idx);
    _track_genVertexPos_Y                           =&theContainer->tree_track_genVertexPos_Y->at(_idx);
    _track_genVertexPos_Z                           =&theContainer->tree_track_genVertexPos_Z->at(_idx);
    _track_recoVertex_idx                           =&theContainer->tree_track_recoVertex_idx->at(_idx);
    _track_recoAK4SlimmedJet_idx                    =&theContainer->tree_track_recoAK4SlimmedJet_idx->at(_idx);
    _track_recoAK4PFJet_idx                         =&theContainer->tree_track_recoAK4PFJet_idx->at(_idx);
    _track_reco08Jet_idx                            =&theContainer->tree_track_reco08Jet_idx->at(_idx);
    _track_recoCaloJet_idx                          =&theContainer->tree_track_recoCaloJet_idx->at(_idx);
    _track_MVAval_FromDispTop                       =&theContainer->tree_track_MVAval_FromDispTop->at(_idx);








}


