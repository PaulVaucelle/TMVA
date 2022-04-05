#ifndef PrimaryVertex_H
#define PrimaryVertex_H

#include "TObject.h"
#include "TLorentzVector.h"

//#include "include/TreeFormat.h"
#include "TreeFormat.h"

class PrimaryVertex {

    public:

        PrimaryVertex();
        virtual ~PrimaryVertex();
        //int ID()                                         {return _ID;};
        int idx()           {return _idx;};
        float  x()          {return *_vtx_PosX;};
        float  y()          {return *_vtx_PosY;};
        float  z()          {return *_vtx_PosZ;};
        float  normChi2()   {return *_vtx_NChi2;};
        float  xErr()       {return *_vtx_PosXError;};
        float  yErr()       {return *_vtx_PosYError;};
        float  zErr()       {return *_vtx_PosZError;};

        void read(int theIdx, TreeFormat * theContainer);

    protected:
        //int _ID;
        int     _idx;
        float   *_vtx_PosX;
        float   *_vtx_PosY;
        float   *_vtx_PosZ;
        float   *_vtx_NChi2;
        float   *_vtx_PosXError;
        float   *_vtx_PosYError;
        float   *_vtx_PosZError;
        

};

#endif