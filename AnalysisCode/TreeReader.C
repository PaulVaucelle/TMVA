#define TreeReader_cxx
#include "TreeReader.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "include/Muon.h"
#include "include/Track.h"
#include <iostream>

void TreeReader::Loop()
{
   createHistograms();
  
   treeS = new TTree("Signal",     "signal tracks");
   treeB = new TTree("Background", "Background tracks");

   treeS->Branch("mva_track_firstHit_x",        &mva_track_firstHit_x);
   treeS->Branch("mva_track_firstHit_y",        &mva_track_firstHit_y);
   treeS->Branch("mva_track_firstHit_z",        &mva_track_firstHit_z);
   treeS->Branch("mva_track_dxy",               &mva_track_dxy);
   treeS->Branch("mva_track_dxyError",          &mva_track_dxyError);
   treeS->Branch("mva_track_dz",                &mva_track_dz);
   treeS->Branch("mva_track_dzError",           &mva_track_dzError);
   treeS->Branch("mva_track_pt",                &mva_track_pt);
   treeS->Branch("mva_track_eta",               &mva_track_eta);
   treeS->Branch("mva_track_nchi2",             &mva_track_nchi2);
   treeS->Branch("mva_track_nhits",             &mva_track_nhits);
   treeS->Branch("mva_track_numberOfValidPixelHits", &mva_track_numberOfValidPixelHits);
   treeS->Branch("mva_track_numberOfValidStripHits", &mva_track_numberOfValidStripHits);
   treeS->Branch("mva_track_isinjet",                &mva_track_isinjet);
   treeS->Branch("mva_track_algo",              &mva_track_algo);
   //added by Paul
   treeS->Branch("mva_ntrk10",              &mva_ntrk10);
   treeS->Branch("mva_ntrk20",              &mva_ntrk20);
   treeS->Branch("mva_ntrk30",              &mva_ntrk30);
   treeS->Branch("mva_ntrk40",              &mva_ntrk40);
   treeS->Branch("mva_ntrk1020",              &mva_ntrk1020);
   treeS->Branch("mva_ntrk2030",              &mva_ntrk2030);
   treeS->Branch("mva_drSig",              &mva_drSig);
   treeS->Branch("mva_dzSig",              &mva_dzSig);
   treeS->Branch("mva_ddSig",              &mva_ddSig);
   treeS->Branch("mva_ValTIBHit",              &mva_ValTIBHit);
   treeS->Branch("mva_ValTOBHit",              &mva_ValTOBHit);
   treeS->Branch("mva_ValPixBarHit",              &mva_ValPixBarHit);
   treeS->Branch("mva_nValTECHHit",              &mva_nValTECHHit);
   treeS->Branch("mva_ntrk40XX",              &mva_ntrk40XX);

   ///BKG
   treeB->Branch("mva_track_firstHit_x",        &mva_track_firstHit_x);
   treeB->Branch("mva_track_firstHit_y",        &mva_track_firstHit_y);
   treeB->Branch("mva_track_firstHit_z",        &mva_track_firstHit_z);
   treeB->Branch("mva_track_dxy",               &mva_track_dxy);
   treeB->Branch("mva_track_dxyError",          &mva_track_dxyError);
   treeB->Branch("mva_track_dz",                &mva_track_dz);
   treeB->Branch("mva_track_dzError",           &mva_track_dzError);
   treeB->Branch("mva_track_pt",                &mva_track_pt);
   treeB->Branch("mva_track_eta",               &mva_track_eta);
   treeB->Branch("mva_track_nchi2",             &mva_track_nchi2);
   treeB->Branch("mva_track_nhits",             &mva_track_nhits);
   treeB->Branch("mva_track_numberOfValidPixelHits", &mva_track_numberOfValidPixelHits);
   treeB->Branch("mva_track_numberOfValidStripHits", &mva_track_numberOfValidStripHits);
   treeB->Branch("mva_track_isinjet",                &mva_track_isinjet);
   treeB->Branch("mva_track_algo",              &mva_track_algo);
   //to be added
   treeB->Branch("mva_ntrk10",              &mva_ntrk10);
   treeB->Branch("mva_ntrk20",              &mva_ntrk20);
   treeB->Branch("mva_ntrk30",              &mva_ntrk30);
   treeB->Branch("mva_ntrk40",              &mva_ntrk40);
   treeB->Branch("mva_ntrk1020",              &mva_ntrk1020);
   treeB->Branch("mva_ntrk2030",              &mva_ntrk2030);
   treeB->Branch("mva_drSig",              &mva_drSig);
   treeB->Branch("mva_dzSig",              &mva_dzSig);
   treeB->Branch("mva_ddSig",              &mva_ddSig);
   treeB->Branch("mva_ValTIBHit",              &mva_ValTIBHit);
   treeB->Branch("mva_ValTOBHit",              &mva_ValTOBHit);
   treeB->Branch("mva_ValPixBarHit",              &mva_ValPixBarHit);
   treeB->Branch("mva_nValTECHHit",              &mva_nValTECHHit);
   treeB->Branch("mva_ntrk40XX",              &mva_ntrk40XX);

   //void HistoManager::fillHisto(TString var, TString selstep, TString channel, TString sample, float val, float weight)
   //void HistoManager::addHisto( TString var, TString selstep, TString channel, TString sample, int nbins, float min, float max)

   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
 std::cout << "Total Entries : " << nentries << std::endl;

   Long64_t nbytes = 0, nb = 0;

   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
   if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      LoadTreeSizes(theFormat);

      if (jentry%500 == 0) cout << "# of processed events " << jentry << endl;

//$$
   if ( tree_NbrOfZCand == 0 || !tree_passesHTFilter ) continue;
//$$

      for(int imu=0; imu< muon_size; imu++){
         Muon themuon; themuon.read(imu, &theFormat);
         theHistoManager->fillHisto("MuonPt",      "noSel", "all", sampleName.Data(),  themuon.pt(), 1);
      }  
         
   //added by Paul
      bool track_SELEC[1000];//care with this size
      //std::cout << "track size : " << track_size << std::endl;
      for(int itk=0; itk< track_size; itk++){
         track_SELEC[itk] = false;
         Track thetrack; thetrack.read(itk, &theFormat);
         mva_ntrk10 = 0; 
         mva_ntrk20 = 0; 
         mva_ntrk30 = 0; 
         mva_ntrk40 = 0;
         mva_ntrk1020 = 0;
         mva_ntrk2030 = 0; 
         mva_ntrk1020 = 0; 
      // mva_ntrk3040 = 0; 
         mva_ntrk40XX = 0;
         mva_track_firstHit_x        = thetrack.firstHit_x();
         mva_track_firstHit_y        = thetrack.firstHit_y();
         mva_track_firstHit_z        = thetrack.firstHit_z();
         mva_track_dxy               = thetrack.dxy();//dr
         mva_track_dxyError          = thetrack.dxyError() ;
         mva_track_dz                = thetrack.dz();
         mva_track_dzError           = thetrack.dzError() ;
         mva_track_pt                = thetrack.pt();
         mva_track_eta               = thetrack.eta();
         mva_track_nchi2             = thetrack.normChi2();
         mva_track_nhits             = thetrack.nHits();
         mva_track_numberOfValidPixelHits = thetrack.numberOfValidPixelHits();
         mva_track_numberOfValidStripHits = thetrack.numberOfValidStripHits();
         mva_nValTECHHit = thetrack.numberOfValidStripTECHits();
         
         
         //to be added

         if ( mva_track_dxyError > 0 ) mva_drSig = mva_track_dxy / mva_track_dxyError;
         if ( mva_track_dzError > 0 )  mva_dzSig = mva_track_dz / mva_track_dzError;
         float mva_dd = TMath::Sqrt( mva_track_dxy*mva_track_dxy + mva_track_dz*mva_track_dz );
         if ( mva_drSig>0 && mva_dzSig>0 ) mva_ddSig = TMath::Sqrt( mva_drSig*mva_drSig + mva_dzSig*mva_dzSig );

         mva_ValTIBHit = thetrack.numberOfValidStripTIBHits();
         mva_ValTOBHit = thetrack.numberOfValidStripTOBHits();
         mva_ValPixBarHit = thetrack.numberOfValidPixelBarrelHits();
         //Until this point, the histos are good; then the dist is not well computed=> only the first bin
         if ( mva_track_pt >= 1. && mva_track_nchi2 <= 5. && mva_drSig >= 5. ) track_SELEC[itk] = true;
         if ( !track_SELEC[itk] ) continue;
         for(int k=0; k< track_size; k++){
            if ( k == itk ) continue;
            Track thetrack2; thetrack2.read(k, &theFormat);
         float pt2  = thetrack2.pt();
         float dr2 = abs(thetrack2.dxy());
         float drSig2 = -1.;
         if ( thetrack2.dxyError() > 0 ) drSig2 = dr2 / thetrack2.dxyError();
         float chi2 = thetrack2.normChi2();
         if ( !(pt2 >= 1. && chi2 <= 5. && drSig2 >= 5.) ) continue;//On regarde les autres track_selec[i] qui sont True donc de potnetielles tracks secondaires
         float x2 = thetrack2.firstHit_x();
         float y2 = thetrack2.firstHit_y();
         float z2 = abs(thetrack2.firstHit_z());
         float mva_dist = TMath::Sqrt( (mva_track_firstHit_x-x2)*(mva_track_firstHit_x-x2) + (mva_track_firstHit_y-y2)*(mva_track_firstHit_y-y2) + (mva_track_firstHit_z-z2)*(mva_track_firstHit_z-z2) );//pour chaque reconstuite, on regarde les autres tracks, 
         if ( mva_dist < 10. ) {mva_ntrk10++;}
         if (mva_dist > 10 && mva_dist < 20) {mva_ntrk1020++;}
         if ( mva_dist < 20. ) {mva_ntrk20++;}
         if (mva_dist > 20 && mva_dist < 30) {mva_ntrk2030++;} 
         if ( mva_dist < 30. ) {mva_ntrk30++;} 
         //if (mva_dist > 30 && mva_dist < 40) {mva_ntrk3040++;}
         if ( mva_dist < 40. ) {mva_ntrk40++;}//used in BDT, peut �tre une variable discriminante
         if (mva_dist > 40) {mva_ntrk40XX++;}//dist>40
         }

         //End of added by Paul
         if ( thetrack.recoAK4SlimmedJet_idx() >= 0 ) mva_track_isinjet = 1; else mva_track_isinjet = 0;
         mva_track_algo              = thetrack.algo(); 

         if ( thetrack.simTrack_isFromLLP() >= 1 ){
            theHistoManager->fillHisto("FirstHitX_Displaced",      "noSel", "all", sampleName.Data(), thetrack.firstHit_x()  , 1);
            theHistoManager->fillHisto("FirstHitY_Displaced",      "noSel", "all", sampleName.Data(), thetrack.firstHit_y()  , 1);
            theHistoManager->fillHisto("FirstHitZ_Displaced",      "noSel", "all", sampleName.Data(), thetrack.firstHit_z()  , 1);
            double dist = pow( pow(thetrack.firstHit_x(),2) + pow(thetrack.firstHit_y(), 2) + pow(thetrack.firstHit_z(), 2), 0.5);
            theHistoManager->fillHisto("FirstHitDist_Displaced",      "noSel", "all", sampleName.Data(), dist , 1);
            treeS->Fill();
         }
         else {
            theHistoManager->fillHisto("FirstHitX_notDisplaced",      "noSel", "all", sampleName.Data(), thetrack.firstHit_x()  , 1);
            theHistoManager->fillHisto("FirstHitY_notDisplaced",      "noSel", "all", sampleName.Data(), thetrack.firstHit_y()  , 1);
            theHistoManager->fillHisto("FirstHitZ_notDisplaced",      "noSel", "all", sampleName.Data(), thetrack.firstHit_z()  , 1);
            double dist = pow( pow(thetrack.firstHit_x(),2) + pow(thetrack.firstHit_y(), 2) + pow(thetrack.firstHit_z(), 2), 0.5);
            theHistoManager->fillHisto("FirstHitDist_notDisplaced",      "noSel", "all", sampleName.Data(), dist , 1);
            treeB->Fill();
         }
      }  

   }

   writeHistograms();
   treeS->Write();
   treeB->Write();
}
