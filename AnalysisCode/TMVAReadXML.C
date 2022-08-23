#include <iostream>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "include/Muon.h"
#include "include/Track.h"
#include "TTree.h"
#include "TFile.h"
#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TMVA/Tools.h"
#include "TMVA/TMVAGui.h"

#include "TreeReader.h"


void TreeReader::ReadXML()
{
// Loads the library
TMVA::Tools::Instance();
TreeFormat theFormat;
TString outfileName("mva_training.root");
TFile* outputFile = TFile::Open(outfileName,"RECREATE");

TString XMLFILE1("TMVAClassification_BDTG.weights.xml");
TString XMLFILE2("TMVAClassification_BDT.weights.xml");
   Float_t mva_track_pt, mva_track_eta;
   Float_t mva_track_nchi2, mva_track_nhits;
   Float_t mva_track_algo;
   Float_t mva_ntrk10;
   Float_t mva_drSig;
   Float_t mva_track_isinjet;
 
TMVA::Reader *reader = new TMVA::Reader("!Color:!Silent");
    reader->AddVariable( "mva_track_pt", &mva_track_pt );
    reader->AddVariable( "mva_track_eta", &mva_track_eta );
    reader->AddVariable( "mva_track_nchi2", &mva_track_nchi2 );
    reader->AddVariable( "mva_track_nhits", &mva_track_nhits );
    reader->AddVariable( "mva_track_algo", &mva_track_algo);
    reader->AddVariable( "mva_ntrk10", &mva_ntrk10);
    reader->AddVariable( "mva_drSig", &mva_drSig);
    reader->AddVariable( "mva_track_isinjet", &mva_track_isinjet);
reader->BookMVA("BDTG",XMLFILE1);
reader->BookMVA("BDT",XMLFILE2);

Double_t bdtgOutput=reader->EvaluateMVA("BDTG");
Double_t bdtOutput=reader->EvaluateMVA("BDT");

std::cout<< "bdtgOutput = "<< bdtgOutput << "\n" << "bdtOutput = "<< bdtOutput <<std::endl;

}