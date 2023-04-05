#ifndef MUON_H
#define MUON_H

#include "TObject.h"
#include "TLorentzVector.h"

//#include "include/TreeFormat.h"
#include "TreeFormat.h"
class Muon {

    public:

        Muon();
        virtual ~Muon();
        //int ID()                                         {return _ID;};
        int idx()          {return _idx;};

//-----------------------------------------------------------

        float mini_pt()         {return *_muon_pt;};
        float mini_eta()        {return *_muon_eta;};
        float mini_phi()        {return *_muon_phi;};
        float mini_vx()         {return *_muon_x;};
        float mini_vy()         {return *_muon_y;};
        float mini_vz()         {return *_muon_z;};
        float mini_energy()     {return *_muon_energy;};
        float mini_dxy()        {return *_muon_dxy;};
        float mini_dxyError()   {return *_muon_dxyError;};
        float mini_dz()         {return *_muon_dz;};
        float mini_dzError()    {return *_muon_dzError;};
        int mini_charge()       {return *_muon_charge;};
        bool  mini_isLoose()        {return _muon_isLoose;};
        bool  mini_isTight()        {return _muon_isTight;};
        bool  mini_isGlobal()       {return _muon_isGlobal;};
        float mini_isoR3()    {return *_muon_isoR3;};

        void read(int theIdx, TreeFormat * theContainer);
        // void read(int theIdx, TreeFormatMINIAOD * theContainer);
    protected:
        //int _ID;
        int     _idx;

        float  *_muon_pt;
        float *_muon_eta;
        float *_muon_phi;
        float *_muon_x;
        float *_muon_y;
        float  *_muon_z;
        float  *_muon_energy;
        float *_muon_dxy;
        float  *_muon_dxyError;
        float *_muon_dz;
        float  *_muon_dzError;
        int  *_muon_charge;
        bool  _muon_isLoose;
        bool   _muon_isTight;
        bool   _muon_isGlobal;
        float *_muon_isoR3;
};

#endif
