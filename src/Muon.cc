#include <iostream>
#include <iomanip>
#include "../include/Muon.h"
    
Muon::Muon()
{
}

Muon::~Muon()
{
}

void Muon::read(int theIdx, TreeFormat * theContainer)
{
    _idx = theIdx;


    _slimmedmuon_pt                      =&theContainer->tree_slimmedmuon_pt->at(_idx) ;
    _slimmedmuon_eta                     =&theContainer->tree_slimmedmuon_eta->at(_idx) ;
    _slimmedmuon_phi                     =&theContainer->tree_slimmedmuon_phi->at(_idx);
    _slimmedmuon_vx                      =&theContainer->tree_slimmedmuon_vx->at(_idx);
    _slimmedmuon_vy                      =&theContainer->tree_slimmedmuon_vy->at(_idx);
    _slimmedmuon_vz                      =&theContainer->tree_slimmedmuon_vz->at(_idx);
    _slimmedmuon_energy                  =&theContainer->tree_slimmedmuon_energy->at(_idx);
    _slimmedmuon_dxy                     =&theContainer->tree_slimmedmuon_dxy->at(_idx);
    _slimmedmuon_dxyError                =&theContainer->tree_slimmedmuon_dxyError->at(_idx);
    _slimmedmuon_dz                      =&theContainer->tree_slimmedmuon_dz->at(_idx);
    _slimmedmuon_dzError                 =&theContainer->tree_slimmedmuon_dzError->at(_idx);
    _slimmedmuon_charge                  =&theContainer->tree_slimmedmuon_charge->at(_idx);
    _slimmedmuon_PFisoVeryTight          =theContainer->tree_slimmedmuon_PFisoVeryTight->at(_idx);
    _slimmedmuon_PFisoTight              =theContainer->tree_slimmedmuon_PFisoTight->at(_idx);
    _slimmedmuon_PFisoMedium             =theContainer->tree_slimmedmuon_PFisoMedium->at(_idx);
    _slimmedmuon_PFisoLoose              =theContainer->tree_slimmedmuon_PFisoLoose->at(_idx);
    _slimmedmuon_MVAisoLoose             =theContainer->tree_slimmedmuon_MVAisoLoose->at(_idx);
    _slimmedmuon_MVAisoMedium            =theContainer->tree_slimmedmuon_MVAisoMedium->at(_idx);
    _slimmedmuon_MVAisoTight             =theContainer->tree_slimmedmuon_MVAisoTight->at(_idx);
    _slimmedmuon_isGlobalMuon            =theContainer->tree_slimmedmuon_isGlobalMuon->at(_idx);
    _slimmedmuon_isStandAloneMuon        =theContainer->tree_slimmedmuon_isStandAloneMuon->at(_idx);
    _slimmedmuon_CutBasedIdLoose         =theContainer->tree_slimmedmuon_CutBasedIdLoose->at(_idx);
    _slimmedmuon_CutBasedIdMedium        =theContainer->tree_slimmedmuon_CutBasedIdMedium->at(_idx);
    _slimmedmuon_CutBasedIdMediumPrompt  =theContainer->tree_slimmedmuon_CutBasedIdMediumPrompt->at(_idx);
    _slimmedmuon_CutBasedIdTight         =theContainer->tree_slimmedmuon_CutBasedIdTight->at(_idx);

}


