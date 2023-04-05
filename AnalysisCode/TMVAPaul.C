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
    
    TFile *input = new TFile("output_50.root");//output50 is for Reco/ output50_MINI is for miniaod. Better overall training is obtained with the benchmark 50cm 
    // TFile *input2 = new TFile("output50_MINI.root");//input is for training and input2 is for test
    TFile *input3 = new TFile("output_TT.root");//input3 is useful for training on a background sample != from the signal sample 

    // -- Choose configuration : 
    //1: test and trainign on same sample with 50/50 of the events
            // TTree *signalTree     = (TTree*)input->Get("Signal");
            // TTree *background     = (TTree*)input->Get("Background");
    //---------------------------------------------------------------

    //2 : Sample training != sample test => useful when trained for a certain benchmark and testing on antoher one

    //testing decomment when training!=test
            // TTree *signalTreeTest    = (TTree*)input2->Get("Signal");//
            // TTree *backgroundTest    = (TTree*)input2->Get("Background");//
    //---------------------------------------------------------------

    //3 : Sample of signal != from ssample of background and Test=Training
            TTree *signalTree    = (TTree*)input->Get("Signal");// MC Signal
            TTree *background    = (TTree*)input3->Get("Background");//  MC TTbar => Main Background
    //---------------------------------------------------------------

    //4 : Sample of signal != from sample of background and Test!=Training
            // TTree *signalTreeTest          = (TTree*)input->Get("Signal");// MC Signal
            // TTree *signalTreeTraining      = (TTree*)input2->Get("Signal");// MC Signal
            // TTree *backgroundTest          = (TTree*)input3->Get("Background");//  MC TTbar => Main Background
            // TTree *backgroundTraining      = (TTree*)input4->Get("Background");//  MC TTbar => Main Background
    //---------------------------------------------------------------


    //Configuration of the MVA methods
    TString outfileName("mva_training50_wTrigger.root");
    TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

    TMVA::Factory *factory = new TMVA::Factory( "TMVAClassification", outputFile,
                                               "!V:!Silent:Color:DrawProgressBar:AnalysisType=Classification");
    TMVA::DataLoader *dataloader=new TMVA::DataLoader("dataset");

    /////////////////////////////-------------TRACK SELECTION VARIABLES------------------//////////////////////////
    //-------------------//
    dataloader->AddVariable( "mva_track_firstHit_x", 'F' );//exclude variables that higly depend on the flight distance
    dataloader->AddVariable( "mva_track_firstHit_y", 'F' );//exclude variables that higly depend on the flight distance
    dataloader->AddVariable( "mva_track_firstHit_z", 'F' );//exclude variables that higly depend on the flight distance
    dataloader->AddVariable( "mva_track_dxy", 'F' );
    dataloader->AddVariable( "mva_track_dxyError", 'F' );
    dataloader->AddVariable( "mva_track_dz", 'F' );
    // dataloader->AddVariable( "mva_track_dzError", 'F' );
    dataloader->AddVariable( "mva_track_pt", 'F' );
    dataloader->AddVariable( "mva_track_eta", 'F' );
    dataloader->AddVariable( "mva_track_nchi2", 'F' );
    dataloader->AddVariable( "mva_track_nhits", 'F' );//exclude variables that higly depend on the flight distance
    dataloader->AddVariable( "mva_ntrk10", 'F');
    dataloader->AddVariable( "mva_ntrk20", 'F');
    dataloader->AddVariable( "mva_ntrk30", 'F');
    dataloader->AddVariable( "mva_ntrk40", 'F');
    dataloader->AddVariable( "mva_dzSig", 'F');
    dataloader->AddVariable( "mva_drSig", 'F');
    dataloader->AddVariable( "mva_track_isinjet", 'F');
    dataloader->AddVariable( "mva_track_dR",'F');
    dataloader->AddVariable( "mva_track_dRmax",'F');

   //-------------------//
    // dataloader->AddVariable( "mva_ddSig", 'F');
    // dataloader->AddVariable( "mva_ValTIBHit", 'F');//exclude variables that higly depend on the flight distance
    // dataloader->AddVariable( "mva_ValTOBHit", 'F');//exclude variables that higly depend on the flight distance
    // dataloader->AddVariable( "mva_ValPixBarHit", 'F');//exclude variables that higly depend on the flight distance
    // dataloader->AddVariable( "mva_ntrk40XX;", 'F');
    // dataloader->AddVariable( "mva_nValTECHHit", 'F');//exclude variables that higly depend on the flight distance
    // dataloader->AddVariable("mva_track_isHighQuality",'F');
    // dataloader->AddVariable( "mva_track_algo", 'F');//12 not available in miniaod
    /////////////////////////////------------END of -TRACK SELECTION--------------------//////////////////////////

//Added 10/02/2023 on MiniAOD datatier (1st year thesis)
//---------------Event selection variables -------------//
   //HT
//    dataloader->AddVariable("mva_HT",'F');
//    //PFMet
//    dataloader->AddVariable("mva_MET_et",'F');
// //    //jet-------------------------
// //    dataloader->AddVariable("mva_jet_nbr",'F');
// //    dataloader->AddVariable("mva_jet_btag",'F');
// // //    //tracks---------------
// //    dataloader->AddVariable("mva_track_lost",'F');
// //    //muon---------
//    dataloader->AddVariable("mva_muon_pt",'F');
//    dataloader->AddVariable("mva_muon_eta",'F');
//    dataloader->AddVariable("mva_muon_phi",'F');
//    dataloader->AddVariable("mva_muon_energy",'F');
//    dataloader->AddVariable("mva_muon_isGlobal",'F');
//    dataloader->AddVariable("mva_muon_isoR3",'F');
//    dataloader->AddVariable("mva_muon_Mmumu",'F');


   //Added 21/03/2023 on MiniAOD datatier (1st year thesis)
//    dataloader->AddVariable("mva_track_dzTOpu",'F');
//    dataloader->AddVariable("mva_track_dzSigTOpu",'F');
//---------------Event selection variables -------------//
    //end of added by Paul


    //---------------------------Vertex Selection Variables-----------------------------------------------------//

    //----------------------------------------------------------------------------------------------------------//


    // global event weights per tree (see below for setting event-wise weights)
    Double_t signalWeight     = 1.0;//1.0
    Double_t backgroundWeight = 1.0;//1.0

    //- Choose Configuration according to the confugration chosen above:

    //---------------when Training=TEST: uncomment this-----------------------------------------//
    // dataloader->AddSignalTree( signalTree,     signalWeight );//train and test with bgctau50 0.885
    // dataloader->AddBackgroundTree( background, backgroundWeight );

    //---------------when Training!=TEST: uncomment this-----------------------------------------//
    // dataloader->AddSignalTree    ( signalTree,     signalWeight, "Training" );//train and test with bgctau50 0.887 => -0.0401
    // dataloader->AddBackgroundTree( background, backgroundWeight,"Training" );//train and test with bgctau50 0.887 => -0.0401

    // dataloader->AddSignalTree    ( signalTreeTest,     signalWeight, "Test" );//train and test with bgctau50 0.887 => -0.0401
    // dataloader->AddBackgroundTree( backgroundTest, backgroundWeight,"Test" );//train and test with bgctau50 0.887 => -0.0401
    
    //---------------when signal!=bkg (Training = test): uncomment this-----------------------------------------//
    // (TO BE VERIFIED)

        dataloader->AddSignalTree( signalTree,     signalWeight );
        dataloader->AddBackgroundTree( background, backgroundWeight );

    //---------------when signal!=bkg (Training != test): uncomment this-----------------------------------------//
    // (TO BE VERIFIED)
    // dataloader->AddSignalTree    ( signalTree,     signalWeight, "Training" );//train and test with bgctau50 0.887 => -0.0401
    // dataloader->AddBackgroundTree( background, backgroundWeight,"Training" );//train and test with bgctau50 0.887 => -0.0401

    // dataloader->AddSignalTree    ( signalTreeTest,     signalWeight, "Test" );//train and test with bgctau50 0.887 => -0.0401
    // dataloader->AddBackgroundTree( backgroundTest, backgroundWeight,"Test" );//train and test with bgctau50 0.887 => -0.0401

    //----------------------------------------------------------------------------------------------//

    // Apply additional cuts on the signal and background samples (can be different)
    TCut mycuts = ""; 
    
   //  mva_track_firstHit_x>-1000 && mva_track_firstHit_y>-1000 && mva_track_firstHit_z>-1000 && mva_track_dxy>-1000 && mva_track_dxyError>-1000 && mva_track_dz>-1000 && mva_track_pt>-1000 && mva_track_eta>-1000 && mva_track_nchi2>-1000 && mva_track_nhits>-1000 && mva_ntrk10>-1000 && mva_ntrk20>-1000 && mva_ntrk30>-1000 && mva_ntrk40>-1000 && mva_drSig>-1000 &&  mva_dzSig>-1000 && mva_track_isinjet>-1000 && mva_track_dR>-1000 && mva_track_dRmax>-1000 && mva_HT>-1000 && mva_MET_et>-1000 && mva_jet_nbr>-1000 && mva_track_lost>-1000  && mva_muon_pt>-1000 && mva_muon_eta>-1000 && mva_muon_phi>-1000 && mva_muon_energy>-1000 && mva_muon_isGlobal>-1000 && mva_muon_isoR3>-1000 && mva_muon_Mmumu >-1000
    // for example: TCut mycuts = "abs(var1)<0.5 && abs(var2-0.5)<1";
    TCut mycutb = ""; // for example: TCut mycutb = "abs(var1)<0.5";
   // mva_track_firstHit_x>-1000 && mva_track_firstHit_y>-1000 && mva_track_firstHit_z>-1000 && mva_track_dxy>-1000 && mva_track_dxyError>-1000 && mva_track_dz>-1000 && mva_track_pt>-1000 && mva_track_eta>-1000 && mva_track_nchi2>-1000 && mva_track_nhits>-1000 && mva_ntrk10>-1000 && mva_ntrk20>-1000 && mva_ntrk30>-1000 && mva_ntrk40>-1000 && mva_drSig>-1000 &&  mva_dzSig>-1000 && mva_track_isinjet>-1000 && mva_track_dR>-1000 && mva_track_dRmax>-1000 && mva_HT>-1000 && mva_MET_et>-1000 && mva_jet_nbr>-1000 && mva_track_lost>-1000  && mva_muon_pt>-1000 && mva_muon_eta>-1000 && mva_muon_phi>-1000 && mva_muon_energy>-1000 && mva_muon_isGlobal>-1000 && mva_muon_isoR3>-1000 && mva_muon_Mmumu >-1000

    //abs(mva_track_dR)>1.
    // abs(mva_track_dR)>1.5
    // abs(mva_track_eta)>1.5
    // abs(mva_track_eta)<1.5

    //- Choose method :
    //Jeremy Andrea
    //factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG",
    //     "!H:!V:NTrees=1000:MinNodeSize=2.5%:BoostType=Grad:Shrinkage=0.10:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=2" );
    
    // ##########the one that should be used, for equal amount of training and test events################//
  dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
                                        "SplitMode=Random:NormMode=NumEvents:!V" );////nTrain_Signal=32500:nTrain_Background=44444:nTest_Signal=32500:nTest_Background=44444
    // ################################################################################

                                                //-------RECO------------//
    // dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
    //                                     "nTrain_Signal=45590:nTrain_Background=88444:nTest_Signal=45590:nTest_Background=88444:SplitMode=Random:NormMode=NumEvents:!V" );

                                                //-------RECO-to miniaod-----------//
    // dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
    //                                     "nTrain_Signal=51657:nTrain_Background=57582:nTest_Signal=51657:nTest_Background=57582:SplitMode=Random:NormMode=NumEvents:!V" );
    
                                                //--------miniaod-------//
//  dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
//                                         "nTrain_Signal=83171:nTrain_Background=84043:nTest_Signal=83171:nTest_Background=84043:SplitMode=Random:NormMode=NumEvents:!V" );
    
    // dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
    //                                     "nTrain_Signal=10000:nTrain_Background=10000:SplitMode=Random:NormMode=NumEvents:!V" );
    
    //
    // factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDT",
    //      "!H:!V:NTrees=1000:MinNodeSize=2.5%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.5:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20" );
    // Paul//
    factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG",
         "!H:!V:NTrees=500:MinNodeSize=2.5%:MaxDepth=4:BoostType=Grad:UseBaggedBoost=True:GradBaggingFraction=0.6:Shrinkage=0.1:SeparationType=GiniIndex:nCuts=20:UseYesNoLeaf=False:UseRandomisedTrees=False:DoBoostMonitor=True");//Possible overtraining
//     factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG1",
//          "!H:!V:NTrees=500:MinNodeSize=2.5%:MaxDepth=4:BoostType=Grad:UseBaggedBoost=True:GradBaggingFraction=0.6:Shrinkage=0.1:SeparationType=GiniIndex:nCuts=20:UseYesNoLeaf=True:UseRandomisedTrees=False:DoBoostMonitor=True");//Possible overtraining

////////////////////////////////TEST NEW METHOD OF CLASSIFICATION//////////////////////////////////
//////SVM////////
//dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,"nTrain_Signal=4000:nTrain_Background=4000:SplitMode=Random:NormMode=NumEvents:!V" );
//factory->BookMethod( dataloader, TMVA::Types::kSVM, "SVM",       "!H:!V:Gamma=1:C=3:Tol=0.75:MaxIter=100:VarTransform=Norm" );
/////////////////


/////////////////
//////DNN////////
// //dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,"nTrain_Signal=4000:nTrain_Background=4000:SplitMode=Random:NormMode=NumEvents:!V" );
// factory->BookMethod( dataloader, TMVA::Types::kDL, "DNN",
//    "!H:!V:Architecture=CPU:ErrorStrategy=CROSSENTROPY:Layout=TANH|128,TANH|128,TANH|128,LINEAR:TrainingStrategy=LearningRate=1e-3,MaxEpoch=40:WeightInitialization=XAVIER" );
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
