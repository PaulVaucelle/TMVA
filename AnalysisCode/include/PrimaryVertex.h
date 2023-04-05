#ifndef PrimaryVertex_H
#define PrimaryVertex_H

#include "TObject.h"
#include "TLorentzVector.h"

//#include "include/TreeFormat.h"
#include "TreeFormat.h"
// #include "TreeFormatMINIAOD.h"
class PrimaryVertex {

    public:

        PrimaryVertex();
        virtual ~PrimaryVertex();
        //int ID()                                         {return _ID;};
        int idx()           {return _idx;};

        void read(int theIdx, TreeFormat * theContainer);
        // void read(int theIdx, TreeFormatMINIAOD * theContainer);


        // float  mini_x()          {return *_PV_x;};
        // float  mini_y()          {return *_PV_y;};
        // float  mini_z()          {return *_PV_z;};
        // float  mini_normChi2()   {return *_PV_NChi2;};
        // float  mini_zErr()       {return *_PV_ez;};
        float  mini_x()          {return _PV_x;};
        float  mini_y()          {return _PV_y;};
        float  mini_z()          {return _PV_z;};
        float  mini_normChi2()   {return _PV_NChi2;};
        float  mini_zErr()       {return _PV_ez;};

    protected:
        //int _ID;
        int     _idx;

        // float   *_PV_x;
        // float   *_PV_y;
        // float   *_PV_z;
        // float   *_PV_NChi2;
        // float   *_PV_ez;
        float   _PV_x;
        float   _PV_y;
        float   _PV_z;
        float   _PV_NChi2;
        float   _PV_ez;

};

#endif
