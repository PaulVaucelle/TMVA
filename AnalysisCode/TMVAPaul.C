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
    //27 variables
    //end of added by Paul
    
    // global event weights per tree (see below for setting event-wise weights)
    Double_t signalWeight     = 1.0;//1.0
    Double_t backgroundWeight = 1.0;//1.0

    dataloader->AddSignalTree( signalTree,     signalWeight );//train and test with bgctau50 0.885
    dataloader->AddBackgroundTree( background, backgroundWeight );

    // dataloader->AddSignalTree    ( signalTree,     signalWeight, "Training" );//train and test with bgctau50 0.887
    // dataloader->AddBackgroundTree( background, backgroundWeight,"Training" );

    // dataloader->AddSignalTree    ( signalTreeTest,     signalWeight, "Test" );
    // dataloader->AddBackgroundTree( backgroundTest, backgroundWeight,"Test" );

    //----------------------------------------------------Replace the 4 lines above---------------------------------------//
       // Use the following code instead of the above two or four lines to add signal and background
   // training and test events "by hand"
   // NOTE that in this case one should not give expressions (such as "var1+var2") in the input
   //      variable definition, but simply compute the expression before adding the event
   // ```cpp
   // // --- begin ----------------------------------------------------------
//    int nbvar = 9;
//    std::vector<Double_t> vars( nbvar ); // vector has size of number of input variables
//    Float_t  treevars[nbvar], weight; //Becareful with the size of the arrays
   
//    // Signal
//    signalTree->SetBranchAddress( "mva_track_pt", &(treevars[0]) );
//    signalTree->SetBranchAddress( "mva_track_eta",&(treevars[1]) );
//    signalTree->SetBranchAddress( "mva_track_nchi2", &(treevars[2]) );
//    signalTree->SetBranchAddress( "mva_track_algo", &(treevars[3]) );
//    signalTree->SetBranchAddress( "mva_ntrk10", &(treevars[4]) );
//    signalTree->SetBranchAddress( "mva_ntrk20", &(treevars[5]) );
//    signalTree->SetBranchAddress( "mva_ntrk30", &(treevars[6]) );
//    signalTree->SetBranchAddress( "mva_drSig", &(treevars[7]) );
//    signalTree->SetBranchAddress( "mva_track_isinjet", &(treevars[8]) );
      
//       for (UInt_t i=0; i<signalTree->GetEntries(); i++) {
//       signalTree->GetEntry(i);
//       for (UInt_t ivar=0; ivar<nbvar; ivar++) vars[ivar] = treevars[ivar];
//       // add training and test events; here: first half is training, second is testing
//       // note that the weight can also be event-wise
//       if (i < signalTree->GetEntries()/2.0) dataloader->AddSignalTrainingEvent( vars, signalWeight );
//       else                              dataloader->AddSignalTestEvent    ( vars, signalWeight );
//    }
   
//    // Background (has event weights)
//    // background->SetBranchAddress( "weight", &weight );
//    background->SetBranchAddress( "mva_track_pt", &(treevars[0]) );
//    background->SetBranchAddress( "mva_track_eta",&(treevars[1]) );
//    background->SetBranchAddress( "mva_track_nchi2", &(treevars[2]) );
//    background->SetBranchAddress( "mva_track_algo", &(treevars[3]) );
//    background->SetBranchAddress( "mva_ntrk10", &(treevars[4]) );
//    background->SetBranchAddress( "mva_ntrk20", &(treevars[5]) );
//    background->SetBranchAddress( "mva_ntrk30", &(treevars[6]) );
//    background->SetBranchAddress( "mva_drSig", &(treevars[7]) );
//    background->SetBranchAddress( "mva_track_isinjet", &(treevars[8]) );
//    for (UInt_t i=0; i<background->GetEntries(); i++) {
//       background->GetEntry(i);
//       for (UInt_t ivar=0; ivar<nbvar; ivar++) vars[ivar] = treevars[ivar];
//       // add training and test events; here: first half is training, second is testing
//       // note that the weight can also be event-wise
//       if (i < background->GetEntries()/2) dataloader->AddBackgroundTrainingEvent( vars, backgroundWeight );
//       else                                dataloader->AddBackgroundTestEvent    ( vars, backgroundWeight );
//    }


   ////////////////------------end of replacement-----------------////
    
    // Set individual event weights (the variables must exist in the original TTree)
    // -  for signal    : `
    // dataloader->SetSignalWeightExpression("");
    // -  for background: `
    // dataloader->SetBackgroundWeightExpression("");
    //dataloader->SetBackgroundWeightExpression( "" );
    // Apply additional cuts on the signal and background samples (can be different)
    TCut mycuts = ""; // for example: TCut mycuts = "abs(var1)<0.5 && abs(var2-0.5)<1";
    TCut mycutb = ""; // for example: TCut mycutb = "abs(var1)<0.5";
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
                                        // "nTrain_Signal=10000:nTrain_Background=10000:SplitMode=Random:NormMode=NumEvents:!V" );
    
    //
//     factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDT",
//          "!H:!V:NTrees=1000:MinNodeSize=2.5%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.5:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20" );
    //Paul//
    factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG",
         "!H:!V:NTrees=1000:MinNodeSize=2.5%:MaxDepth=3:BoostType=Grad:UseBaggedBoost=True:GradBaggingFraction=0.6:Shrinkage=0.1:SeparationType=GiniIndex:nCuts=20:UseYesNoLeaf=False:UseRandomisedTrees=False:DoBoostMonitor=True");//Possible overtraining
//     factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG1",
//          "!H:!V:NTrees=500:MinNodeSize=2.5%:MaxDepth=4:BoostType=Grad:UseBaggedBoost=True:GradBaggingFraction=0.6:Shrinkage=0.1:SeparationType=GiniIndex:nCuts=20:UseYesNoLeaf=True:UseRandomisedTrees=False:DoBoostMonitor=True");//Possible overtraining

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
