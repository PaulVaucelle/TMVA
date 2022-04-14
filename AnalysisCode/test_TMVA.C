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
    
    TFile *input = new TFile("output.root");

    TTree *signalTree     = (TTree*)input->Get("Signal");
    TTree *background     = (TTree*)input->Get("Background");
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
    // dataloader->AddVariable( "mva_track_nhits", 'F' );//exclude variables that higly depend on the flight distance
    dataloader->AddVariable( "mva_track_algo", 'F');

    //added by Paul
    //dataloader->AddVariable( "mva_track_z1", 'F');
    //dataloader->AddVariable( "mva_track_r1", 'F');
    dataloader->AddVariable( "mva_ntrk10", 'F');
    dataloader->AddVariable( "mva_ntrk20", 'F');
    dataloader->AddVariable( "mva_ntrk30", 'F');
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
    // dataloader->AddVariable( "mva_nValTECHHit", 'F');
   
    
    //end of added by Paul
    
    // global event weights per tree (see below for setting event-wise weights)
    Double_t signalWeight     = 1.0;//1.0
    Double_t backgroundWeight = 1.0;//1.0
    dataloader->AddSignalTree    ( signalTree,     signalWeight );
    dataloader->AddBackgroundTree( background, backgroundWeight );

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
    
    dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
                                        "nTrain_Signal=10000:nTrain_Background=10000:SplitMode=Random:NormMode=NumEvents:!V" );
    //Duja
    // factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDT",
    //      "!H:!V:NTrees=850:MinNodeSize=2.5%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.5:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20" );

    //Paul//
    factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG",
         "!H:!V:NTrees=1000:MinNodeSize=2.5%:MaxDepth=3:BoostType=Grad:UseBaggedBoost=True:GradBaggingFraction=0.6:Shrinkage=0.1:SeparationType=GiniIndex:nCuts=20:UseYesNoLeaf=True:UseRandomisedTrees=False:DoBoostMonitor=True");//Possible overtraining
            //////Parameter tested independantly: (with S= 10 000 and bkg =10000)
                        // Best ROC obtained is 0.894 (20000,20000, NTrees=1000:MinNodeSize=2.5%:MaxDepth=5:BoostType=Grad:UseBaggedBoost=True:GradBaggingFraction=0.6:Shrinkage=0.1:SeparationType=GiniIndex:nCuts=20:UseYesNoLeaf=True:UseRandomisedTrees=False:DoBoostMonitor=True"
                        // 
                        //"!H:!V:NTrees=1000:MinNodeSize=5%:MaxDepth=2:BoostType=Grad:UseBaggedBoost=True:GradBaggingFraction=0.6:Shrinkage=0.1:SeparationType=GiniIndex:nCuts=20:UseYesNoLeaf=True:UseRandomisedTrees=True"
                        //Putting max depth to higher values does not increase the performances.
                        //Same goes for MinNodeSize : 5% ~ 2.5%
                        //Same for shrinkage 0.1->0.3 h\e the decrease begins to be rly noticeable for Shrinkage=0.5 and the performance decreases by a little for higher values ;
                        //nTree=1000 <=> 2000<=> 500 ~= 200 <=> 100 decreases perf by a little (even 10 is not that bad)
                        //Nothing changed without using UseBaggedBoost
                        // ROC = 0.853 with (1000,1000) and more overtraining (visually speaking)
                        // ROC = 0.873 with (20000,20000) overtraining seems good ,pt is literally not used once.
                        // ROC = 0.873 with (10 000 , 10 000) with UseRandomisedTrees = False 
                        //UseRandomisedTrees = False 
                        // Pour le test de Kolmogorov, voir les conditions : https://root.cern/doc/master/classTH1.html#aeadcf087afe6ba203bcde124cfabbee4
                        //General Comment: all the parameters above can be less "strict" to save computational time if needed since few parameters can change
                        // by a large value the ROC value 
            //////Parameter tested : Adaboost, slightly worse

   // Now you can tell the factory to train, test, and evaluate the MVAs
   //
   // Train MVAs using the set of training events
   factory->TrainAllMethods();
   // Evaluate all MVAs using the set of test events
   factory->TestAllMethods();
   // Evaluate and compare performance of all configured MVAs
   factory->EvaluateAllMethods();
       // Save the output
   outputFile->Close();
   
   if (!gROOT->IsBatch()) TMVA::TMVAGui( outfileName );

}