#include "TTree.h"
#include "TFile.h"
#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TMVA/Tools.h"
#include "TMVA/TMVAGui.h"

void doTraining(){
    //---------------------------------------------------------------
    // This loads the library
    TMVA::Tools::Instance();
    
    TFile *input = new TFile("output.root");//output is for 5O. Better overall training is obtained with 50 
    TFile *input2 = new TFile("output.root");//input is for training and input2 is for test

    //training
    TTree *signalTree     = (TTree*)input->Get("Signal");
    TTree *background     = (TTree*)input->Get("Background");

    //testing
    TTree *signalTreeTest    = (TTree*)input2->Get("Signal");//
    TTree *backgroundTest    = (TTree*)input2->Get("Background");//

    TString outfileName( "mva_training.root" );
    TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

    TMVA::Factory *factory = new TMVA::Factory( "TMVAClassification", outputFile,
                                               "!V:!Silent:Color:DrawProgressBar:AnalysisType=Classification");
    TMVA::DataLoader *dataloader=new TMVA::DataLoader("dataset");
    // dataloader->AddVariable( "mva_track_firstHit_x", 'F' );//exclude variables that higly depend on the flight distance
    // dataloader->AddVariable( "mva_track_firstHit_y", 'F' );//exclude variables that higly depend on the flight distance
    // dataloader->AddVariable( "mva_track_firstHit_z", 'F' );//exclude variables that higly depend on the flight distance
    // dataloader->AddVariable( "mva_track_dxy", 'F' );
    // dataloader->AddVariable( "mva_track_dxyError", 'F' );
    // dataloader->AddVariable( "mva_track_dz", 'F' );
    // dataloader->AddVariable( "mva_track_dzError", 'F' );
    dataloader->AddVariable( "mva_track_pt", 'F' );
    dataloader->AddVariable( "mva_track_eta", 'F' );
    dataloader->AddVariable( "mva_track_nchi2", 'F' );
    dataloader->AddVariable( "mva_track_nhits", 'F' );//exclude variables that higly depend on the flight distance
    dataloader->AddVariable( "mva_track_algo", 'F');//12

// //     added by Paul
// //     dataloader->AddVariable( "mva_track_z1", 'F');
// //     dataloader->AddVariable( "mva_track_r1", 'F');
    dataloader->AddVariable( "mva_ntrk10", 'F');
    // dataloader->AddVariable( "mva_ntrk20", 'F');
    // dataloader->AddVariable( "mva_ntrk30", 'F');
    // dataloader->AddVariable( "mva_ntrk40", 'F');
    // dataloader->AddVariable( "mva_ntrk1020", 'F');
    // dataloader->AddVariable( "mva_ntrk2030", 'F');
    // dataloader->AddVariable( "mva_dzSig", 'F');
    dataloader->AddVariable( "mva_drSig", 'F');
    // dataloader->AddVariable( "mva_ddSig", 'F');
    // dataloader->AddVariable( "mva_ValTIBHit", 'F');//exclude variables that higly depend on the flight distance
    // dataloader->AddVariable( "mva_ValTOBHit", 'F');//exclude variables that higly depend on the flight distance
    // dataloader->AddVariable( "mva_ValPixBarHit", 'F');//exclude variables that higly depend on the flight distance
    dataloader->AddVariable( "mva_track_isinjet", 'F');
    // dataloader->AddVariable( "mva_ntrk40XX;", 'F');
    // dataloader->AddVariable( "mva_nValTECHHit", 'F');//exclude variables that higly depend on the flight distance

// dataloader->AddVariable( "mva_track_dR",'F');//New
// dataloader->AddVariable( "mva_track_dRmax",'F');//New

    //end of added by Paul
    
    // global event weights per tree (see below for setting event-wise weights)
    Double_t signalWeight     = 1.0;//1.0
    Double_t backgroundWeight = 1.0;//1.0

    dataloader->AddSignalTree( signalTree,     signalWeight );//train and test with bgctau50 0.885
    dataloader->AddBackgroundTree( background, backgroundWeight );

    // dataloader->AddSignalTree    ( signalTree,     signalWeight, "Training" );//train and test with bgctau50 0.887 => -0.0401
    // dataloader->AddBackgroundTree( background, backgroundWeight,"Training" );//train and test with bgctau50 0.887 => -0.0401

    // dataloader->AddSignalTree    ( signalTreeTest,     signalWeight, "Test" );//train and test with bgctau50 0.887 => -0.0401
    // dataloader->AddBackgroundTree( backgroundTest, backgroundWeight,"Test" );//train and test with bgctau50 0.887 => -0.0401
    
    // Set individual event weights (the variables must exist in the original TTree)
    // -  for signal    : `
    // dataloader->SetSignalWeightExpression("");
    // -  for background: `
    // dataloader->SetBackgroundWeightExpression("");
    //dataloader->SetBackgroundWeightExpression( "" );
    // Apply additional cuts on the signal and background samples (can be different)
    TCut mycuts = ""; // for example: TCut mycuts = "abs(var1)<0.5 && abs(var2-0.5)<1";
    TCut mycutb = ""; // for example: TCut mycutb = "abs(var1)<0.5";
    //abs(mva_track_dR)>1.
    // abs(mva_track_dR)>1.5
    // abs(mva_track_eta)>1.5
    // abs(mva_track_eta)<1.5
    //Jeremy Andrea
    //factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG",
    //     "!H:!V:NTrees=1000:MinNodeSize=2.5%:BoostType=Grad:Shrinkage=0.10:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=2" );
    
    // ##########the one that shoul be used, for eaqual amoutn of training and test events################//
  dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
                                        "SplitMode=Random:NormMode=NumEvents:!V" );
    // ################################################################################

    // dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
    //                                     "nTrain_Signal=44790:nTrain_Background=86838:nTest_Signal=44790:nTest_Background=86838:SplitMode=Random:NormMode=NumEvents:!V" );
    
    // dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
    //                                     "nTrain_Signal=10000:nTrain_Background=10000:SplitMode=Random:NormMode=NumEvents:!V" );
    
    //
    // factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDT",
    //      "!H:!V:NTrees=1000:MinNodeSize=2.5%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.5:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20" );
    // Paul//
    factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG",
         "!H:!V:NTrees=1000:MinNodeSize=2.5%:MaxDepth=4:BoostType=Grad:UseBaggedBoost=True:GradBaggingFraction=0.6:Shrinkage=0.1:SeparationType=GiniIndex:nCuts=20:UseYesNoLeaf=False:UseRandomisedTrees=False:DoBoostMonitor=True");//Possible overtraining
//     factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG1",
//          "!H:!V:NTrees=500:MinNodeSize=2.5%:MaxDepth=4:BoostType=Grad:UseBaggedBoost=True:GradBaggingFraction=0.6:Shrinkage=0.1:SeparationType=GiniIndex:nCuts=20:UseYesNoLeaf=True:UseRandomisedTrees=False:DoBoostMonitor=True");//Possible overtraining

////////////////////////////////TEST NEW METHOD OF CLASSIFICATION//////////////////////////////////
//////SVM////////
//dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,"nTrain_Signal=4000:nTrain_Background=4000:SplitMode=Random:NormMode=NumEvents:!V" );
//factory->BookMethod( dataloader, TMVA::Types::kSVM, "SVM",       "!H:!V:Gamma=1:C=3:Tol=0.75:MaxIter=100:VarTransform=Norm" );
/////////////////


/////////////////
//////DNN////////

////////////////


   // Now you can tell the factory to train, test, and evaluate the MVAs
   //
   // Train MVAs using the set of training events on intput
   factory->TrainAllMethods();
   // Evaluate all MVAs using the set of test events on input2
   factory->TestAllMethods();
   // Evaluate and compare performance of all configured MVAs
   factory->EvaluateAllMethods();
       // Save the output
   outputFile->Close();
   
   if (!gROOT->IsBatch()) TMVA::TMVAGui( outfileName );


}
