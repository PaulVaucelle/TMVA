#ifndef PFJet_H
#define PFJet_H

#include "TObject.h"
#include "TLorentzVector.h"

//#include "include/TreeFormat.h"
#include "TreeFormat.h"

class PFJet {

    public:

        PFJet();
        virtual ~PFJet();
        //int ID()                                         {return _ID;};
        int idx()          {return _idx;};
        float  e()         {return *_AK4Slimmedjet_E;};
        float  pt()        {return *_AK4Slimmedjet_pt;};
        float  eta()       {return *_AK4Slimmedjet_eta;};
        float  phi()       {return *_AK4Slimmedjet_phi;};
        int idxTrack()     {return *_AK4Slimmedjet_idxTrack;};
        
        

        void read(int theIdx, TreeFormat * theContainer);

    protected:
        //int _ID;
        int     _idx;
        float   *_AK4Slimmedjet_E;
        float   *_AK4Slimmedjet_pt;
        float   *_AK4Slimmedjet_eta;
        float   *_AK4Slimmedjet_phi;
        int     *_AK4Slimmedjet_idxTrack;
        

};

#endif
