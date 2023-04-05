#ifndef Track_H
#define Track_H

#include "TObject.h"
#include "TLorentzVector.h"

//#include "include/TreeFormat.h"
#include "TreeFormat.h"
// #include "TreeFormatMINIAOD.h"
class Track {

    public:

        Track();
        virtual ~Track();
        //int ID()                                         {return _ID;};
        int idx()                   {return _idx;};

        // // float  pt()                 {return *_track_pt;};
        // float  outer_pt()           {return *_track_outerPt;};
        // // float  eta()                {return *_track_eta;};
        // // float  phi()                {return *_track_phi;};
        // // int    charge()             {return *_track_charge;};
        // // int    nHits()              {return *_track_nhits;};
        // // float  normChi2()           {return *_track_NChi2;};
        // bool   isHighQuality()      {return _track_isHighQuality;};
        // bool   isLoose()            {return _track_isLoose;};
        // bool   isTight()            {return _track_isTight;};
        // // float  dxy()                {return *_track_dxy;};
        // // float  dxyError()           {return *_track_dxyError;};
        // // float  dz()                 {return *_track_dz;};
        // // float  dzError()            {return *_track_dzError;};
        // int    numberOfLostHits()   {return *_track_numberOfLostHits;};
        // int    numberOfValidHits()  {return *_track_numberOfValidHits;};
        // unsigned int originalAlgo() {return *_track_originalAlgo;};
        // // unsigned int  algo()        {return *_track_algo;};
        // unsigned short stopReason() {return *_track_stopReason;};
        // bool   isSimMatched()                  {return _track_isSimMatched;};
        // int  numberOfValidPixelHits()          {return *_track_numberOfValidPixelHits;};
        // int  numberOfValidStripHits()          {return *_track_numberOfValidStripHits;};
        // int  numberOfValidStripTIBHits()       {return *_track_numberOfValidStripTIBHits;};
        // int  numberOfValidStripTIDHits()       {return *_track_numberOfValidStripTIDHits;};
        // int  numberOfValidStripTOBHits()       {return *_track_numberOfValidStripTOBHits;};
        // int  numberOfValidStripTECHits()       {return *_track_numberOfValidStripTECHits;};
        // int  numberOfValidPixelBarrelHits()    {return *_track_numberOfValidPixelBarrelHits;};
        // int  numberOfValidPixelEndcapHits ()   {return *_track_numberOfValidPixelEndcapHits;};
        // int  hasValidHitInPixelLayer()         {return *_track_hasValidHitInPixelLayer;};
        // int  trackerLayersWithMeasurement ()   {return *_track_trackerLayersWithMeasurement;};
        // int  pixelLayersWithMeasurement()      {return *_track_pixelLayersWithMeasurement;};
        // int  stripTECLayersWithMeasurement()   {return *_track_stripTECLayersWithMeasurement;};
        // int  stripTIBLayersWithMeasurement()   {return *_track_stripTIBLayersWithMeasurement;};
        // int  stripTIDLayersWithMeasurement()   {return *_track_stripTIDLayersWithMeasurement;};
        // int  stripTOBLayersWithMeasurement()   {return *_track_stripTOBLayersWithMeasurement;};
        // float  vx()                 {return *_track_vx;};
        // float  vy()                 {return *_track_vy;};
        // float  vz()                 {return *_track_vz;};
        // float  firsthit_X()         {return *_track_firsthit_X;};
        // float  firsthit_Y()         {return *_track_firsthit_Y;};
        // float  firsthit_Z()         {return *_track_firsthit_Z;};
        // float  firstHit_phi()       {return *_track_firsthit_phi;};
        // int    simTrack_charge()    {return *_track_simtrack_charge;};
        // float  simTrack_pt()        {return *_track_simtrack_pt;};
        // float  simTrack_eta()       {return *_track_simtrack_eta;};
        // float  simTrack_phi()       {return *_track_simtrack_phi;};
        // // int   simTrack_longLived() {return _track_simtrack_longLived;};
        // int    simTrack_pdgId()                {return *_track_simtrack_pdgId;};
        // int    simTrack_isFromLLP()            {return *_track_simtrack_isFromLLP;};
        // int    simTrack_numberOfTrackerHits()  {return *_track_simtrack_numberOfTrackerHits;};
        // int    simTrack_numberOfTrackerLayers(){return *_track_simtrack_numberOfTrackerLayers;};
        // float   simTrack_mass()                {return *_track_simtrack_mass;};
        // int     simTrack_status()              {return *_track_simtrack_status;};
        // float   genVertexPos_X()               {return *_track_genVertexPos_X;};
        // float   genVertexPos_Y()               {return *_track_genVertexPos_Y;};
        // float   genVertexPos_Z ()              {return *_track_genVertexPos_Z;};
        // int     recoVertex_idx()               {return *_track_recoVertex_idx;};
        // int     recoAK4SlimmedJet_idx()        {return *_track_recoAK4SlimmedJet_idx;};
        // int     recoAK4PFJet_idx()             {return *_track_recoAK4PFJet_idx;};
        // int     reco08Jet_idx()                {return *_track_reco08Jet_idx;};
        // int     recoCaloJet_idx()              {return *_track_recoCaloJet_idx;};
        // double  MVAval_FromDispTop()           {return *_track_MVAval_FromDispTop;};
        // float  dR()                            {return *_Hemi_Strack_dR;};


        void read(int theIdx, TreeFormat * theContainer);
        // void read(int theIdx, TreeFormatMINIAOD * theContainer);
        float  pt()                 {return *_track_pt;};
        float  eta()                {return *_track_eta;};
        float  phi()                {return *_track_phi;};
        int    charge()             {return *_track_charge;};
        // int    nHits()              {return *_track_nhits;};//miniaod
        int    nHits()              {return *_track_nHit;};
        float  normChi2()           {return *_track_NChi2;};
        int mini_isHighQuality()    {return _track_isHighPurity;};
                float  dxy()                {return *_track_dxy;};
        float  dxyError()           {return *_track_dxyError;};
        float  dz()                 {return *_track_dz;};
        float  dzError()            {return *_track_dzError;};
        unsigned int  algo()        {return *_track_algo;};
        int  mini_numberOfValidPixelHits()          {return *_track_nHitPixel;};
        int  mini_numberOfValidStripTIBHits()       {return *_track_nHitTIB;};
        int  mini_numberOfValidStripTIDHits()       {return *_track_nHitTID;};
        int  mini_numberOfValidStripTOBHits()       {return *_track_nHitTOB;};
        int  mini_numberOfValidStripTECHits()       {return *_track_nHitTEC;};
        int  mini_numberOfValidPixelBarrelHits()    {return *_track_nHitPXB;};
        int  mini_numberOfValidPixelEndcapHits ()   {return *_track_nHitPXF;};
        float  mini_vx()                 {return *_track_x;};
        float  mini_vy()                 {return *_track_y;};
        float  mini_vz()                 {return *_track_z;};
        // unsigned int hitpattern()        {return *_track_hitpattern;};
        float  firstHit_x()         {return *_track_firstHit_x;};
        float  firstHit_y()         {return *_track_firstHit_y;};
        float  firstHit_z()         {return *_track_firstHit_z;};
        int    iJet()               {return *_track_iJet;};
        float  Region()             {return *_track_region;};
        float  sim_pt()        {return *_track_sim_pt;};
        float  sim_eta()       {return *_track_sim_eta;};
        float  sim_phi()       {return *_track_sim_phi;};
        int    sim_charge()    {return *_track_sim_charge;};
        int    sim_pdgId()     {return *_track_sim_pdgId;};
        float  sim_mass()      {return *_track_sim_mass;};
        float  sim_x()         {return *_track_sim_x;};
        float  sim_y()         {return *_track_sim_y;};
        float  sim_z()         {return *_track_sim_z;};
        int    sim_LLP()       {return *_track_sim_LLP;};
        // int   isFromB()        {return *_track_sim_isFromB;};
        // int   isFromC()        {return *_track_sim_isFromC;};
        // bool  isLost()        {return *_track_lost;};


    protected:
        //int _ID;
        int     _idx;

        // // float *_track_pt;
        // float *_track_outerPt;
        // // float *_track_eta;
        // // float *_track_phi;
        // // int   *_track_charge;
        // // int   *_track_nhits;
        // // float *_track_NChi2;
        // bool  _track_isHighQuality;
        // bool  _track_isLoose;
        // bool  _track_isTight;
        // // float *_track_dxy;
        // // float *_track_dxyError;
        // // float *_track_dz;
        // // float *_track_dzError;
        // int   *_track_numberOfLostHits;
        // int   *_track_numberOfValidHits;
        // unsigned int  *_track_originalAlgo;
        // // unsigned int   *_track_algo;
        // unsigned short *_track_stopReason;
        // bool  _track_isSimMatched;
        // int   *_track_numberOfValidPixelHits;
        // int   *_track_numberOfValidStripHits;
        // int   *_track_numberOfValidStripTIBHits;
        // int   *_track_numberOfValidStripTIDHits;
        // int   *_track_numberOfValidStripTOBHits;
        // int   *_track_numberOfValidStripTECHits;
        // int   *_track_numberOfValidPixelBarrelHits;
        // int   *_track_numberOfValidPixelEndcapHits;
        // int   *_track_hasValidHitInPixelLayer;
        // int   *_track_trackerLayersWithMeasurement;
        // int   *_track_pixelLayersWithMeasurement;
        // int   *_track_stripTECLayersWithMeasurement;
        // int   *_track_stripTIBLayersWithMeasurement;
        // int   *_track_stripTIDLayersWithMeasurement;
        // int   *_track_stripTOBLayersWithMeasurement;
        // float *_track_vx;
        // float *_track_vy;
        // float *_track_vz;
        // float *_track_firsthit_X;
        // float *_track_firsthit_Y;
        // float *_track_firsthit_Z;
        // float *_track_firsthit_phi;
        // int   *_track_simtrack_charge;
        // float *_track_simtrack_pt;
        // float *_track_simtrack_eta;
        // float *_track_simtrack_phi;
        // // bool   _track_simtrack_longLived;
        // int   *_track_simtrack_pdgId;
        // int   *_track_simtrack_isFromLLP;
        // int   *_track_simtrack_numberOfTrackerHits;
        // int   *_track_simtrack_numberOfTrackerLayers;
        // float *_track_simtrack_mass;
        // int   *_track_simtrack_status;
        // float *_track_genVertexPos_X;
        // float *_track_genVertexPos_Y;
        // float *_track_genVertexPos_Z;
        // int   *_track_recoVertex_idx;
        // int   *_track_recoAK4SlimmedJet_idx;
        // int   *_track_recoAK4PFJet_idx;
        // int   *_track_reco08Jet_idx;
        // int   *_track_recoCaloJet_idx;
        // double *_track_MVAval_FromDispTop;
        // float *_Hemi_Strack_dR;



        float *_track_pt;
        float *_track_eta;
        float *_track_phi;
        int   *_track_charge;
        // int   *_track_nhits;
        int *_track_nHit;
        float *_track_NChi2;
        bool  _track_isHighPurity;
                float *_track_dxy;
        float *_track_dxyError;
        float *_track_dz;
        float *_track_dzError;
        unsigned int   *_track_algo;
        int   *_track_nHitPixel;
        int   *_track_nHitTIB;
        int   *_track_nHitTID;
        int   *_track_nHitTOB;
        int   *_track_nHitTEC;
        int   *_track_nHitPXB;
        int   *_track_nHitPXF;
        float   *_track_x;
        float   *_track_y;
        float   *_track_z;
        // unsigned int  *_track_hitpattern;
        float   *_track_firstHit_x;
        float   *_track_firstHit_y;
        float   *_track_firstHit_z;
        int     *_track_iJet;
        float   *_track_region;
        float   *_track_sim_pt;
        float  *_track_sim_eta;
        float  *_track_sim_phi;
        int    *_track_sim_charge;
        int    *_track_sim_pdgId;
        float   *_track_sim_mass;
        float  *_track_sim_x;
        float   *_track_sim_y;
        float   *_track_sim_z;
        int     *_track_sim_LLP;
        // bool   *_track_lost;
        // int    *_track_sim_isFromB;
        // int   *_track_sim_isFromC;
};

#endif
