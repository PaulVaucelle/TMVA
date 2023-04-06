#define TreeReader_cxx
#include "TreeReader.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "include/PFJet.h"
#include "include/Muon.h"
#include "include/Track.h"
#include "include/PrimaryVertex.h"
#include <iostream>
#include <cmath>
#include <TLorentzVector.h>
#include <stdio.h>
#include <TBranch.h>

void TreeReader::Loop()
{

   createHistograms();
  
  //Set branches of Signal and Bkg trees

   treeS = new TTree("Signal",     "signal tracks");
   treeB = new TTree("Background", "Background tracks");

   treeS->Branch("mva_track_firstHit_x",        &mva_track_firstHit_x);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_track_firstHit_y",        &mva_track_firstHit_y);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_track_firstHit_z",        &mva_track_firstHit_z);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_track_dxy",               &mva_track_dxy);
   treeS->Branch("mva_track_dxyError",          &mva_track_dxyError);
   treeS->Branch("mva_track_dz",                &mva_track_dz);
//    treeS->Branch("mva_track_dzError",           &mva_track_dzError);
   treeS->Branch("mva_track_pt",                &mva_track_pt);
   treeS->Branch("mva_track_eta",               &mva_track_eta);
   treeS->Branch("mva_track_phi",               &mva_track_phi);
   treeS->Branch("mva_track_nchi2",             &mva_track_nchi2);
   treeS->Branch("mva_track_nhits",             &mva_track_nhits);
   treeS->Branch("mva_track_numberOfValidPixelHits", &mva_track_numberOfValidPixelHits);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_track_numberOfValidStripHits", &mva_track_numberOfValidStripHits);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_track_isinjet",                &mva_track_isinjet);
//    treeS->Branch("mva_track_algo",              &mva_track_algo);
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
   treeS->Branch("mva_ValTIBHit",              &mva_ValTIBHit);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_ValTOBHit",              &mva_ValTOBHit);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_ValPixBarHit",              &mva_ValPixBarHit);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_nValTECHHit",              &mva_nValTECHHit);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_ntrk40XX",              &mva_ntrk40XX);
   treeS->Branch("mva_track_dR",&mva_track_dR);
   treeS->Branch("mva_track_dRmax",&mva_track_dRmax);
//    treeS->Branch("mva_track_isTight",&mva_track_isTight);
   treeS->Branch("mva_track_isHighQuality",&mva_track_isHighQuality);
// treeS->Branch("mva_track_region",&mva_track_region);
// treeS->Branch("mva_track_hitpattern",&mva_track_hitpattern);

   //Added 10/02/2023 on MiniAOD datatier (1st year thesis)
   //HT
   treeS->Branch("mva_HT",&mva_HT);
   //PFMet
   treeS->Branch("mva_MET_et",&mva_MET_et);
   //jet-------------------------
   treeS->Branch("mva_jet_nbr",&mva_jet_nbr);
   treeS->Branch("mva_jet_btag",&mva_jet_btag);
   //tracks---------------
   treeS->Branch("mva_track_lost",&mva_track_lost);
   //muon---------
   treeS->Branch("mva_muon_pt",&mva_muon_pt);
   treeS->Branch("mva_muon_eta",&mva_muon_eta);
   treeS->Branch("mva_muon_phi",&mva_muon_phi);
   treeS->Branch("mva_muon_energy",&mva_muon_energy);
   treeS->Branch("mva_muon_isGlobal",&mva_muon_isGlobal);
   treeS->Branch("mva_muon_isoR3",&mva_muon_isoR3);
   treeS->Branch("mva_muon_Mmumu",&mva_muon_Mmumu);

   //Added 21/03/2023 on MiniAOD datatier (1st year thesis)
   treeS->Branch("mva_track_dzTOpu",&mva_track_dzTOpu);
   treeS->Branch("mva_track_dzSigTOpu",&mva_track_dzSigTOpu);

//    ///BKG
   treeB->Branch("mva_track_firstHit_x",        &mva_track_firstHit_x);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_firstHit_y",        &mva_track_firstHit_y);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_firstHit_z",        &mva_track_firstHit_z);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_dxy",               &mva_track_dxy);
   treeB->Branch("mva_track_dxyError",          &mva_track_dxyError);
   treeB->Branch("mva_track_dz",                &mva_track_dz);
//    treeB->Branch("mva_track_dzError",           &mva_track_dzError);
   treeB->Branch("mva_track_pt",                &mva_track_pt);
   treeB->Branch("mva_track_eta",               &mva_track_eta);
   treeB->Branch("mva_track_phi",               &mva_track_phi);
   treeB->Branch("mva_track_nchi2",             &mva_track_nchi2);
   treeB->Branch("mva_track_nhits",             &mva_track_nhits);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_numberOfValidPixelHits", &mva_track_numberOfValidPixelHits);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_numberOfValidStripHits", &mva_track_numberOfValidStripHits);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_isinjet",                &mva_track_isinjet);
//    treeB->Branch("mva_track_algo",              &mva_track_algo);
//    treeB->Branch("mva_track_isTight",&mva_track_isTight);
   treeB->Branch("mva_track_isHighQuality",&mva_track_isHighQuality);


   treeB->Branch("mva_ntrk10",              &mva_ntrk10);
   treeB->Branch("mva_ntrk20",              &mva_ntrk20);
   treeB->Branch("mva_ntrk30",              &mva_ntrk30);
   treeB->Branch("mva_ntrk40",              &mva_ntrk40);
   treeB->Branch("mva_ntrk1020",              &mva_ntrk1020);
   treeB->Branch("mva_ntrk2030",              &mva_ntrk2030);
   treeB->Branch("mva_drSig",              &mva_drSig);
   treeB->Branch("mva_dzSig",              &mva_dzSig);
   treeB->Branch("mva_ddSig",              &mva_ddSig);
   treeB->Branch("mva_ValTIBHit",              &mva_ValTIBHit);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_ValTOBHit",              &mva_ValTOBHit);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_ValPixBarHit",              &mva_ValPixBarHit);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_nValTECHHit",              &mva_nValTECHHit);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_ntrk40XX",              &mva_ntrk40XX);
   treeB->Branch("mva_track_dR",&mva_track_dR);//new
   treeB->Branch("mva_track_dRmax",&mva_track_dRmax);

   //Added 10/02/2023 on MiniAOD datatier (1st year thesis)
   //HT
   treeB->Branch("mva_HT",&mva_HT);
   //PFMet
   treeB->Branch("mva_MET_et",&mva_MET_et);
   //jet-------------------------
   treeB->Branch("mva_jet_nbr",&mva_jet_nbr);
   //tracks---------------
   treeB->Branch("mva_track_lost",&mva_track_lost);
   //muon---------
   treeB->Branch("mva_muon_pt",&mva_muon_pt);
   treeB->Branch("mva_muon_eta",&mva_muon_eta);
   treeB->Branch("mva_muon_phi",&mva_muon_phi);
   treeB->Branch("mva_muon_energy",&mva_muon_energy);
   treeB->Branch("mva_muon_isGlobal",&mva_muon_isGlobal);
   treeB->Branch("mva_muon_isoR3",&mva_muon_isoR3);
   treeB->Branch("mva_muon_Mmumu",&mva_muon_Mmumu);
   treeB->Branch("mva_jet_btag",&mva_jet_btag);
   //---------------------------------//

      //Added 21/03/2023 on MiniAOD datatier (1st year thesis)
   treeB->Branch("mva_track_dzTOpu",&mva_track_dzTOpu);
   treeB->Branch("mva_track_dzSigTOpu",&mva_track_dzSigTOpu);

if (fChain == 0) return;
Long64_t nentries = fChain->GetEntriesFast();
Long64_t nbytes = 0, nb = 0;
for (Long64_t jentry=0; jentry<nentries;jentry++) 
    {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;

        LoadTreeSizes(theFormat);//this line is bugged

        if (jentry%500 == 0) cout << "# of processed events " << jentry << endl;
	    std::cout<< "jentry : "<< jentry <<std::endl;

      if (theFormat.tree_Filter)
         {
            
        //---------//
        //---MET---//
        //---------//
        mva_MET_et = -10 ;
        mva_MET_et = theFormat.tree_PFMet_et;
        treeS->GetBranch("mva_MET_et")->Fill();
        treeB->GetBranch("mva_MET_et")->Fill();
        // std::cout<<"1"<<std::endl;
        //-----------//
        //---Muons---//
        //-----------//
        Muon themuon;
        mva_muon_Mmumu = theFormat.tree_Mmumu;

        treeS->GetBranch("mva_muon_Mmumu")->Fill();
        treeB->GetBranch("mva_muon_Mmumu")->Fill();

        for (int midx=0; midx<muon_size ; midx++)//loop on muons
            {
    	        themuon.read(midx, &theFormat);
                mva_muon_pt=themuon.mini_pt();
                mva_muon_eta=themuon.mini_eta();
                mva_muon_phi=themuon.mini_phi();
                mva_muon_energy=themuon.mini_energy();
                mva_muon_isGlobal=themuon.mini_isGlobal();
                mva_muon_isoR3=themuon.mini_isoR3();

                treeS->GetBranch("mva_muon_pt")->Fill();
                treeS->GetBranch("mva_muon_eta")->Fill();
                treeS->GetBranch("mva_muon_phi")->Fill();
                treeS->GetBranch("mva_muon_energy")->Fill();
                treeS->GetBranch("mva_muon_isGlobal")->Fill();
                treeS->GetBranch("mva_muon_isoR3")->Fill();
  
                treeB->GetBranch("mva_muon_pt")->Fill();
                treeB->GetBranch("mva_muon_eta")->Fill();
                treeB->GetBranch("mva_muon_phi")->Fill();
                treeB->GetBranch("mva_muon_energy")->Fill();
                treeB->GetBranch("mva_muon_isGlobal")->Fill();
                treeB->GetBranch("mva_muon_isoR3")->Fill();
            }
        
        // std::cout<<"2"<<std::endl;
        //----------//
        //---Jets---//
        //----------//

        mva_HT      =  theFormat.tree_HT;
        mva_jet_nbr =  theFormat.tree_njet;
        LoadPFJetSize(theFormat);
        int njetall = PFJet_size;

        for ( int jetidx=0; jetidx<njetall; jetidx++)  // Loop on jet
         {
            mva_jet_btag = theFormat.tree_jet_btag_DeepJet->at(jetidx);
            treeS->GetBranch("mva_jet_btag")->Fill();
            treeB->GetBranch("mva_jet_btag")->Fill();
         }

        treeS->GetBranch("mva_HT")->Fill();
        treeB->GetBranch("mva_HT")->Fill();
        treeS->GetBranch("mva_jet_nbr")->Fill();
        treeB->GetBranch("mva_jet_nbr")->Fill();
        //------------//
        //---Tracks---//
        //------------//
        Track thetrack;
        for(int itk=0; itk< track_size; itk++) //Loop over all track
            { 
                thetrack.read(itk, &theFormat);//here
                mva_track_lost              = theFormat.tree_track_lost->at(itk);
                mva_track_firstHit_x        = thetrack.firstHit_x();
                mva_track_firstHit_y        = thetrack.firstHit_y();
                mva_track_firstHit_z        = thetrack.firstHit_z();
                mva_track_dxy               = abs(thetrack.dxy());//abs(dr)
                mva_track_dxyError          = thetrack.dxyError() ;
                mva_track_dz                = thetrack.dz();
                mva_track_dzError           = thetrack.dzError() ;
                mva_track_pt                = thetrack.pt();
                mva_track_eta               = thetrack.eta();
                mva_track_phi               = thetrack.phi();//to be added
                mva_track_nchi2             = thetrack.normChi2();
                mva_track_nhits             = thetrack.nHits();
                
                if ( thetrack.iJet() >= 0 ) mva_track_isinjet = 1; else mva_track_isinjet = 0;
                //  mva_track_isHighQuality     = thetrack.isHighQuality();
                mva_track_isHighQuality     = thetrack.mini_isHighQuality();
                //  mva_track_isTight           = thetrack.isTight();
                mva_track_numberOfValidPixelHits = thetrack.mini_numberOfValidPixelHits();
                //  mva_track_numberOfValidStripHits = thetrack.mini_numberOfValidStripHits();
                mva_nValTECHHit             = thetrack.mini_numberOfValidStripTECHits();
                mva_drSig                   = theFormat.tree_track_drSig->at(itk) ; //mva_track_dxy / mva_track_dxyError;
                mva_dzSig                   = abs(theFormat.tree_track_dzSig->at(itk)); // mva_track_dz / mva_track_dzError;

                float mva_dd = TMath::Sqrt( mva_track_dxy*mva_track_dxy + mva_track_dz*mva_track_dz );
                if ( mva_drSig>0 && mva_dzSig>0 ) mva_ddSig = TMath::Sqrt( mva_drSig*mva_drSig + mva_dzSig*mva_dzSig );

                mva_ValTIBHit               = thetrack.mini_numberOfValidStripTIBHits();
                mva_ValTOBHit               = thetrack.mini_numberOfValidStripTOBHits();
                mva_ValPixBarHit            = thetrack.mini_numberOfValidPixelBarrelHits();
                mva_track_dzSigTOpu         = theFormat.tree_track_dzSigTOpu->at(itk);
	             mva_track_dzTOpu            = theFormat.tree_track_dzTOpu->at(itk);
                mva_track_dR                = theFormat.tree_track_Hemi_dR->at(itk);
                mva_track_dRmax             = theFormat.tree_track_Hemi_dRmax->at(itk);
                mva_ntrk10                  = theFormat.tree_track_ntrk10->at(itk);
                mva_ntrk20                  = theFormat.tree_track_ntrk20->at(itk);
                mva_ntrk30                  = theFormat.tree_track_ntrk30->at(itk);
                mva_ntrk40                  = theFormat.tree_track_ntrk40->at(itk);

                if ( thetrack.sim_LLP() >= 1  ){treeS->Fill();}
                else {treeB->Fill();}
            }
         }
    }
    writeHistograms();
    treeS->Write();
    treeB->Write();
}

