#include <iostream>
#include <iomanip>
#include "../include/PFJet.h"
    
PFJet::PFJet()
{
}

PFJet::~PFJet()
{
}

void PFJet::read(int theIdx, TreeFormat * theContainer)
{
    _idx = theIdx;


    // _AK4Slimmedjet_E        = &theContainer->tree_AK4Slimmedjet_E->at(_idx) ;
    // _AK4Slimmedjet_pt       = &theContainer->tree_AK4Slimmedjet_pt->at(_idx) ;
    // _AK4Slimmedjet_eta      = &theContainer->tree_AK4Slimmedjet_eta->at(_idx) ;
    // _AK4Slimmedjet_phi      = &theContainer->tree_AK4Slimmedjet_phi->at(_idx) ;
    // _AK4Slimmedjet_idxTrack = &theContainer->tree_AK4Slimmedjet_idxTrack->at(_idx) ;


    _jet_E= &theContainer->tree_jet_E->at(_idx);
    _jet_pt= &theContainer->tree_jet_pt->at(_idx);
    _jet_eta= &theContainer->tree_jet_eta->at(_idx);
    _jet_phi= &theContainer->tree_jet_phi->at(_idx);
}


