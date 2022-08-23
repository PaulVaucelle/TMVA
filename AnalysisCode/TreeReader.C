#define TreeReader_cxx
#include "TreeReader.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "include/Muon.h"
#include "include/Track.h"
#include "include/PrimaryVertex.h"
#include "include/PFJet.h"
#include <iostream>
#include <cmath>
#include <TLorentzVector.h>
#include <stdio.h>

void TreeReader::Loop()
{
   createHistograms();
  
   treeS = new TTree("Signal",     "signal tracks");
   treeB = new TTree("Background", "Background tracks");

   treeS->Branch("mva_track_firstHit_x",        &mva_track_firstHit_x);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_track_firstHit_y",        &mva_track_firstHit_y);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_track_firstHit_z",        &mva_track_firstHit_z);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_track_dxy",               &mva_track_dxy);
   treeS->Branch("mva_track_dxyError",          &mva_track_dxyError);
   treeS->Branch("mva_track_dz",                &mva_track_dz);
   treeS->Branch("mva_track_dzError",           &mva_track_dzError);
   treeS->Branch("mva_track_pt",                &mva_track_pt);
   treeS->Branch("mva_track_eta",               &mva_track_eta);
   treeS->Branch("mva_track_phi",               &mva_track_phi);
   treeS->Branch("mva_track_nchi2",             &mva_track_nchi2);
   treeS->Branch("mva_track_nhits",             &mva_track_nhits);
   treeS->Branch("mva_track_numberOfValidPixelHits", &mva_track_numberOfValidPixelHits);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_track_numberOfValidStripHits", &mva_track_numberOfValidStripHits);//exclude variables that higly depend on the flight distance
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
   treeS->Branch("mva_ValTIBHit",              &mva_ValTIBHit);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_ValTOBHit",              &mva_ValTOBHit);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_ValPixBarHit",              &mva_ValPixBarHit);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_nValTECHHit",              &mva_nValTECHHit);//exclude variables that higly depend on the flight distance
   treeS->Branch("mva_ntrk40XX",              &mva_ntrk40XX);
   treeS->Branch("mva_track_dR",&mva_track_dR);
   treeS->Branch("mva_track_dRmax",&mva_track_dRmax);

   ///BKG
   treeB->Branch("mva_track_firstHit_x",        &mva_track_firstHit_x);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_firstHit_y",        &mva_track_firstHit_y);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_firstHit_z",        &mva_track_firstHit_z);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_dxy",               &mva_track_dxy);
   treeB->Branch("mva_track_dxyError",          &mva_track_dxyError);
   treeB->Branch("mva_track_dz",                &mva_track_dz);
   treeB->Branch("mva_track_dzError",           &mva_track_dzError);
   treeB->Branch("mva_track_pt",                &mva_track_pt);
   treeB->Branch("mva_track_eta",               &mva_track_eta);
   treeB->Branch("mva_track_phi",               &mva_track_phi);
   treeB->Branch("mva_track_nchi2",             &mva_track_nchi2);
   treeB->Branch("mva_track_nhits",             &mva_track_nhits);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_numberOfValidPixelHits", &mva_track_numberOfValidPixelHits);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_numberOfValidStripHits", &mva_track_numberOfValidStripHits);//exclude variables that higly depend on the flight distance
   treeB->Branch("mva_track_isinjet",                &mva_track_isinjet);
   treeB->Branch("mva_track_algo",              &mva_track_algo);
   // //to be added
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
   //void HistoManager::fillHisto(TString var, TString selstep, TString channel, TString sample, float val, float weight)
   //void HistoManager::addHisto( TString var, TString selstep, TString channel, TString sample, int nbins, float min, float max)

   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();//10;
 std::cout << "Total Entries : " << nentries << std::endl;

   Long64_t nbytes = 0, nb = 0;

   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      
   if (ientry < 0) break;
   
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
	
      LoadTreeSizes(theFormat);

      if (jentry%500 == 0) cout << "# of processed events " << jentry << endl;
	std::cout<< "jentry : "<< jentry <<std::endl;
//$$
//    if ( tree_NbrOfZCand == 0 || !tree_passesHTFilter ) continue;//HELP
if ( tree_NbrOfZCand > 0 && tree_passesHTFilter )
{

      for(int imu=0; imu< muon_size; imu++){
         Muon themuon; themuon.read(imu, &theFormat);
         theHistoManager->fillHisto("MuonPt",      "noSel", "all", sampleName.Data(),  themuon.pt(), 1);
      }  


   //--------------//    
   //added by Paul
   //--------------//
   
   
   //MUONS/////////////////////////////////////////////////////////
   
        int muon_idx=-1;
    // bool ZMuRec = false;
    // int PFiso, MVAiso, CutBasedId;
    float dVr, dVz;
    float Mmumu = 0.;
    int nmurec = 0, imu1 = -1, imu2 = -1;
    float mupt1, mueta1, muphi1, mupt2, mueta2, muphi2;
    TLorentzVector vmuon[2], v1,v2,v;
    float mu_mass = 0.1057;
    PrimaryVertex thepv; thepv.read(0, &theFormat);
    float PVx = thepv.x();
    float PVy = thepv.y();
    float PVz = thepv.z();
	Muon themuon;
	Muon themuon2;
    bool Minvar = true;
    for (int midx=0; midx<muon_size ; midx++)//loop on muons
    {
        
    	themuon.read(midx, &theFormat);

	   // std::cout<< "midx: "<<midx<<std::endl;
        // if ( themuon.pt() < 3. ) continue;
        if ( themuon.pt() > 3. ) 
            {
                 muon_idx++;
                int nmu = muon_size;
                
                //if ( !themuon.isGlobalMuon() ) continue; //Need global muons
                if ( themuon.isGlobalMuon() )
                {
                    mupt1  = themuon.pt();
                    //if ( mupt1 < 10. ) continue; //Zmu filter
                    if ( mupt1 > 10. )
                    {
                        dVr = TMath::Sqrt( (themuon.vx()-PVx)*(themuon.vx()-PVx) + (themuon.vy()-PVy)*(themuon.vy()-PVy) );
                        dVz = themuon.vz()-PVz;
                        // if ( dVr > 0.1 || abs(dVz) > 0.2 ) continue;// on veut un bon fit pour nos PV d'ou un seuil maximum sur les distances
                        if ( dVr < 0.1 && abs(dVz) < 0.2 )
                            {
                              mueta1 = themuon.eta();
                              muphi1 = themuon.phi();
        
                                v1.SetPtEtaPhiM(mupt1,mueta1,muphi1,mu_mass);
                                vmuon[0].SetPtEtaPhiM(mupt1,mueta1,muphi1,0);
                                nmurec++;
	                            //std::cout<<"muon_idx:  "<< muon_idx<< "//"<<"nmu: "<<nmu<<std::endl;
	                            //std::cout<<"bug1"<<std::endl;
	                            //if ( muon_idx == nmu-1 ) continue;
	                            //std::cout<<"bug2"<<std::endl;
	                            if ( muon_idx < nmu-1 ) 
	                                {
                                        for ( int muon2_idx=muon_idx+1;muon2_idx<nmu;muon2_idx++) 
                                            {       // Loop on other reco muons
	                                            //std::cout<<"muon_idx:  "<< muon_idx<< "//"<<"muon2_idx : "<<muon2_idx<<std::endl;
	                                            themuon2.read(muon2_idx, &theFormat);
	                                           // std::cout<<"globalmuon"<<themuon2.isGlobalMuon()<<std::endl;
                                                // if ( !themuon2.isGlobalMuon() ) continue;
                                                if ( themuon2.isGlobalMuon() )
                                                {
                                                    
                                                    // if ( themuon.charge() == themuon2.charge() ) continue;
                                                    if ( themuon.charge() != themuon2.charge() )
                                                        {
                                                            dVr = TMath::Sqrt( (themuon2.vx()-PVx)*(themuon2.vx()-PVx) + (themuon2.vy()-PVy)*(themuon2.vy()-PVy) );
                                                            dVz = themuon2.vz()-PVz;
                                                            // if ( dVr > 0.1 || abs(dVz) > 0.2 ) continue;
                                                            if ( dVr < 0.1 && abs(dVz) < 0.2 ) 
                                                                {
                                                                    mupt2  = themuon2.pt();
                                                                    // if ( mupt2 < 10. ) continue;
                                                                    if ( mupt2 > 10. )
                                                                        {
                                                                            // if ( mupt1 < 28. && mupt2 < 28. ) continue; //Zmu FIlter
                                                                             if ( mupt1 > 28. || mupt2 > 28. )
                                                                             {
                                                                                mueta2 = themuon2.eta();
                                                                                muphi2 = themuon2.phi();
                                                                                //muon2_idx++;
                                                                                v2.SetPtEtaPhiM(mupt2,mueta2,muphi2,mu_mass);
                                                                                vmuon[1].SetPtEtaPhiM(mupt2,mueta2,muphi2,0);
                                                                                v = v1 + v2;
                                                                                if ( v.Mag() > Mmumu )
                                                                                    { //Mag pour masse invariante (magnitude)
                                                                                    Mmumu = v.Mag();
                                                                                    if ( Mmumu > 60. ) 
                                                                                        {
                                                                                        Minvar =true;
                                                                                        imu1 = muon_idx;
                                                                                        imu2 = muon2_idx;
                                                                                        }
                                                                                    }
                                                                             }

                                                                        }

                                                                }

                                                        }

                                                }

                                           }//second loop on muons
	                                }//if loop
                                        //    if ( Mmumu < 60. ) continue;//HELP with this one
                                        //  if ( Mmumu < 60. ) Minvar =false;
	                                       //  std::cout<< "number of muons first method : " << tree_slimmedmuon_pt.size() << std::endl;

                            }

                    }

                }
            }
    }//end loop on muons
        std::cout<<"nmu:  "<< muon_size<< std::endl;
         std::cout<<"imu1 "<<imu1<<std::endl;
         std::cout<<"imu2 "<< imu2<< std::endl;

     if (imu1 != -1 && imu2 != -1 && imu1 <muon_size && imu2 <muon_size) 
     	{
        themuon.read(imu1, &theFormat);
        themuon2.read(imu2, &theFormat);
	//std::cout<<" imugood"<< std::endl;
       if ( themuon2.pt() > themuon.pt()  && Minvar==true) 
       		{
            int imu0 = imu2;
            imu2 = imu1; //muons reco with imu1 having the highest pt
            imu1 = imu0;
            v = vmuon[0];
            vmuon[0] = vmuon[1];
            vmuon[1] = v;
        	}
	}
   
   ////////////////Selection of jets and rejection of muons for the consturction of axis/////////////////
   
    int njet = 0, njet1 = 0, njet2 = 0;
    bool isjet[99], isjet1[99], isjet2[99];
    TLorentzVector vaxis1, vaxis2, vjet[99];
    float PtMin = 20; // GeV
    float EtaMax = 2.4;
      //std::cout<<"ou est l'erruer"<<std::endl;
      LoadPFJetSize(theFormat);
    int njetall = PFJet_size;
    PFJet thejet;
    if (jentry != 603 && jentry != 2855 && jentry != 3973 && jentry != 3976 && jentry != 4474 && jentry != 4476 && jentry != 8092 && jentry != 8143 && jentry !=9005)
    	{ 
	
    for ( int jetidx=0; jetidx<njetall; jetidx++)  // Loop on jet
    {
    	 
	std::cout<<"jetidx and pfjet_size and njetall and nmu: "<<jetidx<<"//"<<PFJet_size<<"//"<<njetall<<"//"<<muon_size<<std::endl;
	 thejet.read(jetidx, &theFormat);
	std::cout<<"read"<<std::endl;
        float jet_pt  = thejet.pt();
        float jet_eta = thejet.eta();
        float jet_phi = thejet.phi();
        isjet[jetidx]  = false;
        isjet1[jetidx] = false; // first neutralino jets
        isjet2[jetidx] = false; // second neutralino jets
        v.SetPtEtaPhiM( jet_pt, jet_eta, jet_phi, 0. ); //set the axis
        
        // if ( jet_pt < PtMin || abs(jet_eta) > EtaMax) continue;
        
        if ( jet_pt > PtMin && abs(jet_eta) < EtaMax)
        {
                    // look if prompt muon inside
        float deltaR1 = 1000., deltaR2 = 1000.;
	if ( imu1 >= 0 ) deltaR1 = Deltar( jet_eta, jet_phi, themuon.eta(), themuon.phi() );
        if ( imu2 >= 0 ) deltaR2 = Deltar( jet_eta, jet_phi, themuon2.eta(), themuon2.phi() );
        if ( deltaR1 < 0.4 || deltaR2 < 0.4 )
        {
            if ( deltaR1 < 0.4 )
            { //if muon is inside, we remove the muons infomation from the jet
                v1.SetPtEtaPhiM( themuon.pt(),
                                themuon.eta(),
                                themuon.phi(),
                                0 );
                v -= v1; //v TLorentzFactor being just above, defined by jet data
            }
            if ( deltaR2 < 0.4 )
            {
                v2.SetPtEtaPhiM( themuon2.pt(),
                                themuon2.eta(),
                                themuon2.phi(),
                                0 );
                v -= v2;
            }
            jet_pt  = v.Pt(); //Update jet data by removing the muons information (muons that could be in the jet)
            jet_eta = v.Eta(); //+ we do not want muons data to build the two axis since they come from the PV
            jet_phi = v.Phi();
        }
        
        njet++;
        isjet[jetidx] = true;
        vjet[jetidx] = v; //Only jet data (with  possible muons being removed)
        if ( njet1 == 0 && jet_pt > PtMin && abs(jet_eta) < EtaMax )
        {
            njet1 = 1;
            isjet1[jetidx] = true;
            vaxis1 = v;
        }
	
        }

    } // End Loop on jets
}
	//std::cout<<"fin de jets"<<std::endl;
   //-------------//
   //Building Axis//
   //-------------//
   
    //////////////////
    float dR1 = 10., dR2 = 10.;
    
    float dRcut_hemis = (TMath::Pi())/2; //subjectif choice: pi/2 //iffrentiarte the cts pi/2 for this one the other could be changed
    //float dRcut_tracks = (TMath::Pi())/2; //1 or (TMath::Pi())/2 or 2.2
    for (int i=0; i<njetall; i++) // Loop on jet
    {
        // if ( !isjet[i] ) continue;
        if ( isjet[i] )
            {
              // float jet_pt  = vjet[i].Pt();
        float jet_eta = vjet[i].Eta();
        float jet_phi = vjet[i].Phi();
        if ( njet1 > 0 ) dR1 = Deltar( jet_eta, jet_phi, vaxis1.Eta(), vaxis1.Phi() );
        if ( njet2 > 0 ) dR2 = Deltar( jet_eta, jet_phi, vaxis2.Eta(), vaxis2.Phi() );
        // axis 1
        if ( njet1 > 0 && !isjet2[i]  && dR1 < dRcut_hemis) {          //
            njet1++;
            vaxis1 += vjet[i];
            isjet1[i] = true;
        }
        // axis 2
        if ( njet2 == 0 && !isjet1[i] ) {
            njet2 = 1;
            vaxis2 = vjet[i];
            isjet2[i] = true;
        }
        else if ( njet2 > 0 && !isjet1[i] && !isjet2[i] && dR2 < dRcut_hemis ) {//
            njet2++;
            vaxis2 += vjet[i];
            isjet2[i] = true;
        }
            }

    } 

 
	
      bool track_SELEC[1000];//care with this size
      // int Tracks_axis=-1;
      //std::cout<<"bug b4 itk  "<< std::endl;
      for(int itk=0; itk< track_size; itk++){ //Loop over all track
        // std::cout<<"bug in itk  loop"<< std::endl;
         track_SELEC[itk] = false;
         Track thetrack; thetrack.read(itk, &theFormat);
         mva_ntrk10 = 0; 
         mva_ntrk20 = 0; 
         mva_ntrk30 = 0; 
         mva_ntrk40 = 0;
         mva_ntrk1020 = 0;
         mva_ntrk2030 = 0;  
      // mva_ntrk3040 = 0; 
         mva_ntrk40XX = 0;
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
         mva_track_numberOfValidPixelHits = thetrack.numberOfValidPixelHits();
         mva_track_numberOfValidStripHits = thetrack.numberOfValidStripHits();
         mva_nValTECHHit = thetrack.numberOfValidStripTECHits();

         if ( mva_track_dxyError > 0 ) mva_drSig = mva_track_dxy / mva_track_dxyError;
         if ( mva_track_dzError > 0 )  mva_dzSig = mva_track_dz / mva_track_dzError;
         float mva_dd = TMath::Sqrt( mva_track_dxy*mva_track_dxy + mva_track_dz*mva_track_dz );
         if ( mva_drSig>0 && mva_dzSig>0 ) mva_ddSig = TMath::Sqrt( mva_drSig*mva_drSig + mva_dzSig*mva_dzSig );

         mva_ValTIBHit = thetrack.numberOfValidStripTIBHits();
         mva_ValTOBHit = thetrack.numberOfValidStripTOBHits();
         mva_ValPixBarHit = thetrack.numberOfValidPixelBarrelHits();

         if ( mva_track_pt >= 1. && mva_track_nchi2 <= 5. && mva_drSig >= 5. ) track_SELEC[itk] = true;
        //  if ( !track_SELEC[itk] ) continue;
         if ( track_SELEC[itk] )
            {
                //-------------------------------------------------------------------------///
	dR1= Deltar(mva_track_eta,mva_track_phi,vaxis1.Eta(),vaxis1.Phi());
	dR2= Deltar(mva_track_eta,mva_track_phi,vaxis2.Eta(),vaxis2.Phi());
	if (dR1 < dR2)
		{mva_track_dR=dR1;
		mva_track_dRmax=dR2;}
	else {mva_track_dR=dR2;
	mva_track_dRmax=dR1;}
	//the cut on dR is applied in TMVAPaul.C
	//-------------------------------------------------------------------------///
	//mva_track_dR = thetrack.dR();
	
	//std::cout << "track_size : " << track_size << std::endl;
         for(int k=0; k< track_size; k++)
            {
	    //std::cout << "k and itk and track_size b4" << k << " & " << itk << " & "<< track_size<<std::endl;
            //    if ( k == itk ) continue;//pose pb atm
            if ( k != itk )
            {
               //std::cout << "k and itk after" << k << " & " << itk <<std::endl;
               Track thetrack2; thetrack2.read(k, &theFormat);
               float pt2  = thetrack2.pt();
               float dr2 = abs(thetrack2.dxy());
               float drSig2 = -1.;
               if ( thetrack2.dxyError() > 0 ) drSig2 = dr2 / thetrack2.dxyError();
               float chi2 = thetrack2.normChi2();
	           //std::cout<<"avant un conttmtc"<<std::endl;
            //    if ( !(pt2 >= 1. && chi2 <= 5. && drSig2 >= 5.) ) continue;//On regarde les autres track_selec[i] qui sont True donc de potnetielles tracks secondaires
	           if ( (pt2 >= 1. && chi2 <= 5. && drSig2 >= 5.) )
               {
                 //std::cout<<"fin de boucle nested"<<std::endl;
                  float x2 = thetrack2.firstHit_x();
                 float y2 = thetrack2.firstHit_y();
                 float z2 = thetrack2.firstHit_z();
                 float mva_dist = TMath::Sqrt( (mva_track_firstHit_x-x2)*(mva_track_firstHit_x-x2) + (mva_track_firstHit_y-y2)*(mva_track_firstHit_y-y2) + (mva_track_firstHit_z-z2)*(mva_track_firstHit_z-z2) );//pour chaque reconstuite, on regarde les autres tracks, 
                 if ( mva_dist < 10. ) {mva_ntrk10++;}
                  if (mva_dist > 10 && mva_dist < 20) {mva_ntrk1020++;}
                  if ( mva_dist < 20. ) {mva_ntrk20++;}
                 if (mva_dist > 20 && mva_dist < 30) {mva_ntrk2030++;} 
                 if ( mva_dist < 30. ) {mva_ntrk30++;} 
                 //if (mva_dist > 30 && mva_dist < 40) {mva_ntrk3040++;}
                 if ( mva_dist < 40. ) {mva_ntrk40++;}//used in BDT, peut �tre une variable discriminante
                 if (mva_dist > 40) {mva_ntrk40XX++;}//dist>40
	             //std::cout<<"merde"<<std::endl;
               }

            }

            }// End loop on other tracks

	//std::cout<<"bug de merde ntm" <<std::endl;

         //End of added by Paul
         //---------------------
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


      } //END loop on all tracks
}
//$$


   } 

   writeHistograms();
   treeS->Write();
   treeB->Write();
}// End Loop
