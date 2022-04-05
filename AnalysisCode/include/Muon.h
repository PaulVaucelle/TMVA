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
        float pt()         {return *_slimmedmuon_pt;};
        float eta()        {return *_slimmedmuon_eta;};
        float phi()        {return *_slimmedmuon_phi;};
        float vx()         {return *_slimmedmuon_vx;};
        float vy()         {return *_slimmedmuon_vy;};
        float vz()         {return *_slimmedmuon_vz;};
        float energy()     {return *_slimmedmuon_energy;};
        float dxy()        {return *_slimmedmuon_dxy;};
        float dxyError()   {return *_slimmedmuon_dxyError;};
        float dz()         {return *_slimmedmuon_dz;};
        float dzError()    {return *_slimmedmuon_dzError;};
        float charge()     {return *_slimmedmuon_charge;};
        bool  PFisoVeryTight()     {return _slimmedmuon_PFisoVeryTight;};
        bool  PFisoTight()         {return _slimmedmuon_PFisoTight;};
        bool  PFisoMedium()        {return _slimmedmuon_PFisoMedium;};
        bool  PFisoLoose()         {return _slimmedmuon_PFisoLoose;};
        bool  MVAisoLoose()        {return _slimmedmuon_MVAisoLoose;};
        bool  MVAisoMedium()       {return _slimmedmuon_MVAisoMedium;};
        bool  MVAisoTight()        {return _slimmedmuon_MVAisoTight;};
        bool  isGlobalMuon()       {return _slimmedmuon_isGlobalMuon;};
        bool  isStandAloneMuon()   {return _slimmedmuon_isStandAloneMuon;};
        bool  CutBasedIdLoose()    {return _slimmedmuon_CutBasedIdLoose;};
        bool  CutBasedIdMedium()   {return _slimmedmuon_CutBasedIdMedium;};
        bool  CutBasedIdMediumPrompt()   {return _slimmedmuon_CutBasedIdMediumPrompt;};
        bool  CutBasedIdTight()          {return _slimmedmuon_CutBasedIdTight;};

        void read(int theIdx, TreeFormat * theContainer);

    protected:
        //int _ID;
        int     _idx;
        float   * _slimmedmuon_pt;
        float   * _slimmedmuon_eta;
        float   * _slimmedmuon_phi;
        float   * _slimmedmuon_vx;
        float   * _slimmedmuon_vy;
        float   * _slimmedmuon_vz;
        float   * _slimmedmuon_energy;
        float   * _slimmedmuon_dxy;
        float   * _slimmedmuon_dxyError;
        float   * _slimmedmuon_dz;
        float   * _slimmedmuon_dzError;
        float   * _slimmedmuon_charge;
        bool     _slimmedmuon_PFisoVeryTight;
        bool     _slimmedmuon_PFisoTight;
        bool     _slimmedmuon_PFisoMedium;
        bool     _slimmedmuon_PFisoLoose;
        bool     _slimmedmuon_MVAisoLoose;
        bool     _slimmedmuon_MVAisoMedium;
        bool     _slimmedmuon_MVAisoTight;
        bool     _slimmedmuon_isGlobalMuon;
        bool     _slimmedmuon_isStandAloneMuon;
        bool     _slimmedmuon_CutBasedIdLoose;
        bool     _slimmedmuon_CutBasedIdMedium;
        bool     _slimmedmuon_CutBasedIdMediumPrompt;
        bool     _slimmedmuon_CutBasedIdTight;

};

#endif
