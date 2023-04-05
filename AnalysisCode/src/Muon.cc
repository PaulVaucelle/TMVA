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

    _muon_pt = &theContainer->tree_muon_pt->at(_idx);
    _muon_eta=&theContainer->tree_muon_eta->at(_idx);
    _muon_phi=&theContainer->tree_muon_phi->at(_idx);
    _muon_x=&theContainer->tree_muon_x->at(_idx);
    _muon_y=&theContainer->tree_muon_y->at(_idx);
    _muon_z=&theContainer->tree_muon_z->at(_idx);
    _muon_energy=&theContainer->tree_muon_energy->at(_idx);
    _muon_dxy=&theContainer->tree_muon_dxy->at(_idx);
    _muon_dxyError=&theContainer->tree_muon_dxyError->at(_idx);
    _muon_dz=&theContainer->tree_muon_dz->at(_idx);
    _muon_dzError=&theContainer->tree_muon_dzError->at(_idx);
    _muon_charge=&theContainer->tree_muon_charge->at(_idx);
    _muon_isLoose=theContainer->tree_muon_isLoose->at(_idx);
    _muon_isTight=theContainer->tree_muon_isTight->at(_idx);
    _muon_isGlobal=theContainer->tree_muon_isGlobal->at(_idx);
    _muon_isoR3 = &theContainer->tree_muon_isoR3->at(_idx);

}


