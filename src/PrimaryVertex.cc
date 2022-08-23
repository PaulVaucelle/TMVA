#include <iostream>
#include <iomanip>
#include "../include/PrimaryVertex.h"
    
PrimaryVertex::PrimaryVertex()
{
}

PrimaryVertex::~PrimaryVertex()
{
}

void PrimaryVertex::read(int theIdx, TreeFormat * theContainer)
{
    _idx = theIdx;


    //_muon_pt=theContainer->tree_muon_pt->at(_idx) ;
     _vtx_PosX     =&theContainer->tree_vtx_PosX->at(_idx) ;
     _vtx_PosY     =&theContainer->tree_vtx_PosY->at(_idx) ;
     _vtx_PosZ     =&theContainer->tree_vtx_PosZ->at(_idx) ;
     _vtx_NChi2    =&theContainer->tree_vtx_NChi2->at(_idx) ;
     _vtx_PosXError=&theContainer->tree_vtx_PosXError->at(_idx) ;
     _vtx_PosYError=&theContainer->tree_vtx_PosYError->at(_idx) ;
     _vtx_PosZError=&theContainer->tree_vtx_PosZError->at(_idx) ;
     
    

}


