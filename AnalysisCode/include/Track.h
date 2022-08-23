#ifndef Track_H
#define Track_H

#include "TObject.h"
#include "TLorentzVector.h"

//#include "include/TreeFormat.h"
#include "TreeFormat.h"

class Track {

    public:

        Track();
        virtual ~Track();
        //int ID()                                         {return _ID;};
        int idx()                   {return _idx;};
        float  pt()                 {return *_track_pt;};
        float  outer_pt()           {return *_track_outerPt;};
        float  eta()                {return *_track_eta;};
        float  phi()                {return *_track_phi;};
        int    charge()             {return *_track_charge;};
        int    nHits()              {return *_track_nhits;};
        float  normChi2()           {return *_track_NChi2;};
        bool   isHighQuality()      {return _track_isHighQuality;};
        bool   isLoose()            {return _track_isLoose;};
        bool   isTight()            {return _track_isTight;};
        float  dxy()                {return *_track_dxy;};
        float  dxyError()           {return *_track_dxyError;};
        float  dz()                 {return *_track_dz;};
        float  dzError()            {return *_track_dzError;};
        int    numberOfLostHits()   {return *_track_numberOfLostHits;};
        int    numberOfValidHits()  {return *_track_numberOfValidHits;};
        unsigned int originalAlgo() {return *_track_originalAlgo;};
        unsigned int  algo()        {return *_track_algo;};
        unsigned short stopReason() {return *_track_stopReason;};
        bool   isSimMatched()                  {return _track_isSimMatched;};
        int  numberOfValidPixelHits()          {return *_track_numberOfValidPixelHits;};
        int  numberOfValidStripHits()          {return *_track_numberOfValidStripHits;};
        int  numberOfValidStripTIBHits()       {return *_track_numberOfValidStripTIBHits;};
        int  numberOfValidStripTIDHits()       {return *_track_numberOfValidStripTIDHits;};
        int  numberOfValidStripTOBHits()       {return *_track_numberOfValidStripTOBHits;};
        int  numberOfValidStripTECHits()       {return *_track_numberOfValidStripTECHits;};
        int  numberOfValidPixelBarrelHits()    {return *_track_numberOfValidPixelBarrelHits;};
        int  numberOfValidPixelEndcapHits ()   {return *_track_numberOfValidPixelEndcapHits;};
        int  hasValidHitInPixelLayer()         {return *_track_hasValidHitInPixelLayer;};
        int  trackerLayersWithMeasurement ()   {return *_track_trackerLayersWithMeasurement;};
        int  pixelLayersWithMeasurement()      {return *_track_pixelLayersWithMeasurement;};
        int  stripTECLayersWithMeasurement()   {return *_track_stripTECLayersWithMeasurement;};
        int  stripTIBLayersWithMeasurement()   {return *_track_stripTIBLayersWithMeasurement;};
        int  stripTIDLayersWithMeasurement()   {return *_track_stripTIDLayersWithMeasurement;};
        int  stripTOBLayersWithMeasurement()   {return *_track_stripTOBLayersWithMeasurement;};
        float  vx()                 {return *_track_vx;};
        float  vy()                 {return *_track_vy;};
        float  vz()                 {return *_track_vz;};
        float  firstHit_x()         {return *_track_firsthit_X;};
        float  firstHit_y()         {return *_track_firsthit_Y;};
        float  firstHit_z()         {return *_track_firsthit_Z;};
        float  firstHit_phi()       {return *_track_firsthit_phi;};
        int    simTrack_charge()    {return *_track_simtrack_charge;};
        float  simTrack_pt()        {return *_track_simtrack_pt;};
        float  simTrack_eta()       {return *_track_simtrack_eta;};
        float  simTrack_phi()       {return *_track_simtrack_phi;};
        bool   simTrack_longLived() {return _track_simtrack_longLived;};
        int    simTrack_pdgId()                {return *_track_simtrack_pdgId;};
        int    simTrack_isFromLLP()            {return *_track_simtrack_isFromLLP;};
        int    simTrack_numberOfTrackerHits()  {return *_track_simtrack_numberOfTrackerHits;};
        int    simTrack_numberOfTrackerLayers(){return *_track_simtrack_numberOfTrackerLayers;};
        float   simTrack_mass()                {return *_track_simtrack_mass;};
        int     simTrack_status()              {return *_track_simtrack_status;};
        float   genVertexPos_X()               {return *_track_genVertexPos_X;};
        float   genVertexPos_Y()               {return *_track_genVertexPos_Y;};
        float   genVertexPos_Z ()              {return *_track_genVertexPos_Z;};
        int     recoVertex_idx()               {return *_track_recoVertex_idx;};
        int     recoAK4SlimmedJet_idx()        {return *_track_recoAK4SlimmedJet_idx;};
        int     recoAK4PFJet_idx()             {return *_track_recoAK4PFJet_idx;};
        int     reco08Jet_idx()                {return *_track_reco08Jet_idx;};
        int     recoCaloJet_idx()              {return *_track_recoCaloJet_idx;};
        double  MVAval_FromDispTop()           {return *_track_MVAval_FromDispTop;};
        float  dR()                            {return *_Hemi_Strack_dR;};
        void read(int theIdx, TreeFormat * theContainer);

    protected:
        //int _ID;
        int     _idx;

        float *_track_pt;
        float *_track_outerPt;
        float *_track_eta;
        float *_track_phi;
        int   *_track_charge;
        int   *_track_nhits;
        float *_track_NChi2;
        bool  _track_isHighQuality;
        bool  _track_isLoose;
        bool  _track_isTight;
        float *_track_dxy;
        float *_track_dxyError;
        float *_track_dz;
        float *_track_dzError;
        int   *_track_numberOfLostHits;
        int   *_track_numberOfValidHits;
        unsigned int  *_track_originalAlgo;
        unsigned int   *_track_algo;
        unsigned short *_track_stopReason;
        bool  _track_isSimMatched;
        int   *_track_numberOfValidPixelHits;
        int   *_track_numberOfValidStripHits;
        int   *_track_numberOfValidStripTIBHits;
        int   *_track_numberOfValidStripTIDHits;
        int   *_track_numberOfValidStripTOBHits;
        int   *_track_numberOfValidStripTECHits;
        int   *_track_numberOfValidPixelBarrelHits;
        int   *_track_numberOfValidPixelEndcapHits;
        int   *_track_hasValidHitInPixelLayer;
        int   *_track_trackerLayersWithMeasurement;
        int   *_track_pixelLayersWithMeasurement;
        int   *_track_stripTECLayersWithMeasurement;
        int   *_track_stripTIBLayersWithMeasurement;
        int   *_track_stripTIDLayersWithMeasurement;
        int   *_track_stripTOBLayersWithMeasurement;
        float *_track_vx;
        float *_track_vy;
        float *_track_vz;
        float *_track_firsthit_X;
        float *_track_firsthit_Y;
        float *_track_firsthit_Z;
        float *_track_firsthit_phi;
        int   *_track_simtrack_charge;
        float *_track_simtrack_pt;
        float *_track_simtrack_eta;
        float *_track_simtrack_phi;
        bool   _track_simtrack_longLived;
        int   *_track_simtrack_pdgId;
        int   *_track_simtrack_isFromLLP;
        int   *_track_simtrack_numberOfTrackerHits;
        int   *_track_simtrack_numberOfTrackerLayers;
        float *_track_simtrack_mass;
        int   *_track_simtrack_status;
        float *_track_genVertexPos_X;
        float *_track_genVertexPos_Y;
        float *_track_genVertexPos_Z;
        int   *_track_recoVertex_idx;
        int   *_track_recoAK4SlimmedJet_idx;
        int   *_track_recoAK4PFJet_idx;
        int   *_track_reco08Jet_idx;
        int   *_track_recoCaloJet_idx;
        double *_track_MVAval_FromDispTop;
        float *_Hemi_Strack_dR;
};

#endif
