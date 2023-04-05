#ifndef PFJet_H
#define PFJet_H

#include "TObject.h"
#include "TLorentzVector.h"

//#include "include/TreeFormat.h"
#include "TreeFormat.h"
// #include "TreeFormatMINIAOD.h"
class PFJet {

    public:

        PFJet();
        virtual ~PFJet();
        //int ID()                                         {return _ID;};
        int idx()          {return _idx;};
        // float  e()         {return *_AK4Slimmedjet_E;};
        // float  pt()        {return *_AK4Slimmedjet_pt;};
        // float  eta()       {return *_AK4Slimmedjet_eta;};
        // float  phi()       {return *_AK4Slimmedjet_phi;};
        // int idxTrack()     {return *_AK4Slimmedjet_idxTrack;};

//reco with miniaod names
        float  e()         {return *_jet_E;};
        float  pt()        {return *_jet_pt;};
        float  eta()       {return *_jet_eta;};
        float  phi()       {return *_jet_phi;};
        // int idxTrack()     {return *_AK4Slimmedjet_idxTrack;};
//----------------------      
        float  mini_e()         {return *_jet_E;};
        float  mini_pt()        {return *_jet_pt;};
        float  mini_eta()       {return *_jet_eta;};
        float  mini_phi()       {return *_jet_phi;};
        // int idxTrack()     {return *_AK4Slimmedjet_idxTrack;};
        

        void read(int theIdx, TreeFormat * theContainer);
        // void read(int theIdx, TreeFormatMINIAOD * theContainer);
    protected:
        //int _ID;
        int     _idx;
        // float   *_AK4Slimmedjet_E;
        // float   *_AK4Slimmedjet_pt;
        // float   *_AK4Slimmedjet_eta;
        // float   *_AK4Slimmedjet_phi;
        // int     *_AK4Slimmedjet_idxTrack;

        float   *_jet_E;
        float   *_jet_pt;
        float   *_jet_eta;
        float   *_jet_phi;
        

};

#endif
