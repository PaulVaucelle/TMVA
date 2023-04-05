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
     
    // _PV_x = &theContainer->tree_PV_x->at(_idx);
    // _PV_y = &theContainer->tree_PV_y->at(_idx);
    // _PV_z = &theContainer->tree_PV_z->at(_idx);
    //     _PV_NChi2 = &theContainer->tree_PV_NChi2->at(_idx);
    // _PV_ez = &theContainer->tree_PV_ez->at(_idx);
        _PV_x = theContainer->tree_PV_x;
    _PV_y = theContainer->tree_PV_y;
    _PV_z = theContainer->tree_PV_z;
    _PV_NChi2 = theContainer->tree_PV_NChi2;
    _PV_ez = theContainer->tree_PV_ez;

}


