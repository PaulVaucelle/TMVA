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
//   In a ROOT session, you can do:
//      root> .L TreeReader.C
//      root> TreeReader t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

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
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      LoadTreeSizes(theFormat);//this line is bugged
    //   track_size = theFormat.tree_track_pt->size();
    //   muon_size = theFormat.tree_muon_pt->size();

      if (jentry%500 == 0) cout << "# of processed events " << jentry << endl;
	std::cout<< "jentry : "<< jentry <<std::endl;
      // if (Cut(ientry) < 0) continue;
  if (theFormat.tree_Filter)
    {
    //      for(int imu=0; imu< muon_size; imu++){

    //      Muon themuon; 
    //      themuon.read(imu, &theFormat);
    //      theHistoManager->fillHisto("MuonPt",      "noSel", "all", sampleName.Data(),  themuon.mini_pt(), 1);
    //   }  

         //MUONS/////////////////////////////////////////////////////////
    mva_MET_et = -10 ;
    mva_MET_et = theFormat.tree_PFMet_et;
    nSBr1++;

    treeS->GetBranch("mva_MET_et")->Fill();

    treeB->GetBranch("mva_MET_et")->Fill();

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
    float PVx = thepv.mini_x();
    float PVy = thepv.mini_y();
    float PVz = thepv.mini_z();
	Muon themuon;
	Muon themuon2;
    bool Minvar = true;
   nSBr0 += muon_size;
//    treeS->GetBranch("mva_muon_pt")->SetEntries(nSBr0);
//    treeS->GetBranch("mva_muon_eta")->SetEntries(nSBr0);
//    treeS->GetBranch("mva_muon_phi")->SetEntries(nSBr0);
//    treeS->GetBranch("mva_muon_energy")->SetEntries(nSBr0);
//    treeS->GetBranch("mva_muon_isGlobal")->SetEntries(nSBr0);
//    treeS->GetBranch("mva_muon_isoR3")->SetEntries(nSBr0);

//    treeB->GetBranch("mva_muon_pt")->SetEntries(nSBr0);
//    treeB->GetBranch("mva_muon_eta")->SetEntries(nSBr0);
//    treeB->GetBranch("mva_muon_phi")->SetEntries(nSBr0);
//    treeB->GetBranch("mva_muon_energy")->SetEntries(nSBr0);
//    treeB->GetBranch("mva_muon_isGlobal")->SetEntries(nSBr0);
//    treeB->GetBranch("mva_muon_isoR3")->SetEntries(nSBr0);

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

        
        // treeS->Fill();
	   // std::cout<< "midx: "<<midx<<std::endl;
        // if ( themuon.mini_pt() < 3. ) continue;
        
        if ( themuon.mini_pt() > 3. ) 
            {
                 muon_idx++;
                int nmu = muon_size;
                
                //if ( !themuon.mini_isGlobalMuon() ) continue; //Need global muons
                if ( themuon.mini_isGlobal() )
                {
                    mupt1  = themuon.mini_pt();
                    //if ( mupt1 < 10. ) continue; //Zmu filter
                    if ( mupt1 > 10. )
                    {
                        dVr = TMath::Sqrt( (themuon.mini_vx()-PVx)*(themuon.mini_vx()-PVx) + (themuon.mini_vy()-PVy)*(themuon.mini_vy()-PVy) );
                        dVz = themuon.mini_vz()-PVz;
                        // if ( dVr > 0.1 || abs(dVz) > 0.2 ) continue;// on veut un bon fit pour nos PV d'ou un seuil maximum sur les distances
                        if ( dVr < 0.1 && abs(dVz) < 0.2 )
                            {
                              mueta1 = themuon.mini_eta();
                              muphi1 = themuon.mini_phi();
        
                                v1.SetPtEtaPhiM(mupt1,mueta1,muphi1,mu_mass);
                                vmuon[0].SetPtEtaPhiM(mupt1,mueta1,muphi1,0);
                                nmurec++;
	                            //if ( muon_idx == nmu-1 ) continue;
	                            if ( muon_idx < nmu-1 ) 
	                                {
                                        for ( int muon2_idx=muon_idx+1;muon2_idx<nmu;muon2_idx++) 
                                            {       // Loop on other reco muons

	                                            themuon2.read(muon2_idx, &theFormat);
                                                // if ( !themuon2.isGlobalMuon() ) continue;
                                                if ( themuon2.mini_isGlobal() )
                                                {
                                                    
                                                    // if ( themuon.mini_charge() == themuon2.mini_charge() ) continue;
                                                    if ( themuon.mini_charge() != themuon2.mini_charge() )
                                                        {
                                                            dVr = TMath::Sqrt( (themuon2.mini_vx()-PVx)*(themuon2.mini_vx()-PVx) + (themuon2.mini_vy()-PVy)*(themuon2.mini_vy()-PVy) );
                                                            dVz = themuon2.mini_vz()-PVz;
                                                            // if ( dVr > 0.1 || abs(dVz) > 0.2 ) continue;
                                                            if ( dVr < 0.1 && abs(dVz) < 0.2 ) 
                                                                {
                                                                    mupt2  = themuon2.mini_pt();
                                                                    // if ( mupt2 < 10. ) continue;
                                                                    if ( mupt2 > 10. )
                                                                        {
                                                                            // if ( mupt1 < 28. && mupt2 < 28. ) continue; //Zmu FIlter
                                                                             if ( mupt1 > 28. || mupt2 > 28. )
                                                                             {
                                                                                mueta2 = themuon2.mini_eta();
                                                                                muphi2 = themuon2.mini_phi();
                                                                                //muon2_idx++;
                                                                                v2.SetPtEtaPhiM(mupt2,mueta2,muphi2,mu_mass);
                                                                                vmuon[1].SetPtEtaPhiM(mupt2,mueta2,muphi2,0);
                                                                                v = v1 + v2;
                                                                                if ( v.Mag() > Mmumu )
                                                                                    { //Mag pour masse invariante (magnitude)
                                                                                    Mmumu = v.Mag();
                                                                                    if ( Mmumu > 60. ) 
                                                                                        {
                                                                                        mva_muon_Mmumu=Mmumu;
                                                                                        Minvar =true;
                                                                                        nSBr2=nSBr2+1;
                                                                                        
                                                                                        treeS->GetBranch("mva_muon_Mmumu")->Fill();
                                                                                        treeB->GetBranch("mva_muon_Mmumu")->Fill();
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

     if (imu1 != -1 && imu2 != -1 && imu1 <muon_size && imu2 <muon_size) 
     	{
        themuon.read(imu1, &theFormat);
        themuon2.read(imu2, &theFormat);

       if ( themuon2.mini_pt() > themuon.mini_pt()  && Minvar==true) 
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

    LoadPFJetSize(theFormat);
    int njetall = PFJet_size;
    float HT=0;
 
    PFJet thejet;

    //Thisis somehow needed since some events are crashing
    if (jentry != 603 && jentry != 2857 && jentry != 3975 && jentry != 3977 && jentry != 4476 && jentry != 4478 && jentry != 8095 && jentry != 8144 && jentry !=9006 )
    	{ 
	//70cm:if (jentry != 571 && jentry != 900 && jentry!=1919 && jentry!=4023 && jentry != 4291 && jentry!=4677 && jentry != 5212 && jentry != 5494 && jentry != 6428 && jentry != 7014 && jentry!= 8859)
    //50cm:jentry != 603 && jentry != 2857 && jentry != 3975 && jentry != 3977 && jentry != 4476 && jentry != 4478 && jentry != 8095 && jentry != 8144 && jentry !=9006
    //30cm:if (jentry!= 1046 && jentry!= 4988)
    //10cm:(jentry>=0)
    
    for ( int jetidx=0; jetidx<njetall; jetidx++)  // Loop on jet
    {
    	 
	 thejet.read(jetidx, &theFormat);
	
        float jet_pt  = thejet.pt();
        float jet_eta = thejet.eta();
        float jet_phi = thejet.phi();
        float jet_btag = theFormat.tree_jet_btag_DeepJet->at(jetidx);
        mva_jet_btag = jet_btag;
        treeS->GetBranch("mva_jet_btag")->Fill();
        treeB->GetBranch("mva_jet_btag")->Fill();

        isjet[jetidx]  = false;
        isjet1[jetidx] = false; // first neutralino jets
        isjet2[jetidx] = false; // second neutralino jets
        v.SetPtEtaPhiM( jet_pt, jet_eta, jet_phi, 0. ); //set the axis
        
        // if ( jet_pt < PtMin || abs(jet_eta) > EtaMax) continue;
 
        if ( jet_pt > PtMin && abs(jet_eta) < EtaMax)
        {
            HT+= thejet.pt();
                    // look if prompt muon inside
        float deltaR1 = 1000., deltaR2 = 1000.;
	if ( imu1 >= 0 ) deltaR1 = Deltar( jet_eta, jet_phi, themuon.mini_eta(), themuon.mini_phi() );
        if ( imu2 >= 0 ) deltaR2 = Deltar( jet_eta, jet_phi, themuon2.mini_eta(), themuon2.mini_phi() );
        if ( deltaR1 < 0.4 || deltaR2 < 0.4 )
        {
            if ( deltaR1 < 0.4 )
            { //if muon is inside, we remove the muons infomation from the jet
                v1.SetPtEtaPhiM( themuon.mini_pt(),
                                themuon.mini_eta(),
                                themuon.mini_phi(),
                                0 );
                v -= v1; //v TLorentzFactor being just above, defined by jet data
            }
            if ( deltaR2 < 0.4 )
            {
                v2.SetPtEtaPhiM( themuon2.mini_pt(),
                                themuon2.mini_eta(),
                                themuon2.mini_phi(),
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
        mva_HT=HT;
        mva_jet_nbr= njet;
        nSBr3=nSBr3+1;

        treeS->GetBranch("mva_HT")->Fill();
        treeB->GetBranch("mva_HT")->Fill();
        treeS->GetBranch("mva_jet_nbr")->Fill();
        treeB->GetBranch("mva_jet_nbr")->Fill();
}
ntotjet += njet;
   //-------------//
   //Building Axes//
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


      bool track_SELEC[10000];//care with this size
      // int Tracks_axis=-1;

      for(int itk=0; itk< track_size; itk++){ //Loop over all track

         track_SELEC[itk] = false;

         Track thetrack;
         thetrack.read(itk, &theFormat);//here
         mva_ntrk10 = 0; 
         mva_ntrk20 = 0; 
         mva_ntrk30 = 0; 
         mva_ntrk40 = 0;
         mva_ntrk1020 = 0;
         mva_ntrk2030 = 0;  
      // mva_ntrk3040 = 0; 
         mva_ntrk40XX = 0;
         mva_track_lost = theFormat.tree_track_lost->at(itk);
         
        //  mva_track_firsthit_X        = thetrack.firsthit_X();
        //  mva_track_firsthit_Y        = thetrack.firsthit_Y();
        //  mva_track_firsthit_Z        = thetrack.firsthit_Z();
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
        //  mva_track_isHighQuality     = thetrack.isHighQuality();
         mva_track_isHighQuality     = thetrack.mini_isHighQuality();
        //  mva_track_isTight           = thetrack.isTight();
         mva_track_numberOfValidPixelHits = thetrack.mini_numberOfValidPixelHits();
        //  mva_track_numberOfValidStripHits = thetrack.mini_numberOfValidStripHits();
         mva_nValTECHHit = thetrack.mini_numberOfValidStripTECHits();

         if ( mva_track_dxyError > 0 ) mva_drSig = mva_track_dxy / mva_track_dxyError;
         if ( mva_track_dzError > 0 )  mva_dzSig = mva_track_dz / mva_track_dzError;
         float mva_dd = TMath::Sqrt( mva_track_dxy*mva_track_dxy + mva_track_dz*mva_track_dz );
         if ( mva_drSig>0 && mva_dzSig>0 ) mva_ddSig = TMath::Sqrt( mva_drSig*mva_drSig + mva_dzSig*mva_dzSig );

         mva_ValTIBHit = thetrack.mini_numberOfValidStripTIBHits();
         mva_ValTOBHit = thetrack.mini_numberOfValidStripTOBHits();
         mva_ValPixBarHit = thetrack.mini_numberOfValidPixelBarrelHits();

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
	//-------------------------------------------------------------------------///
    
    
  
    mva_track_dzSigTOpu = theFormat.tree_track_dzSigTOpu->at(itk);
	mva_track_dzTOpu    = theFormat.tree_track_dzTOpu->at(itk);
         for(int k=0; k< track_size; k++)
            {

            //    if ( k == itk ) continue;//pose pb atm
            if ( k != itk )
            {
               
               Track thetrack2; thetrack2.read(k, &theFormat);
               float pt2  = thetrack2.pt();
               float dr2 = abs(thetrack2.dxy());
               float drSig2 = -1.;
               if ( thetrack2.dxyError() > 0 ) drSig2 = dr2 / thetrack2.dxyError();
               float chi2 = thetrack2.normChi2();

            //    if ( !(pt2 >= 1. && chi2 <= 5. && drSig2 >= 5.) ) continue;//On regarde les autres track_selec[i] qui sont True donc de potnetielles tracks secondaires
	           if ( (pt2 >= 1. && chi2 <= 5. && drSig2 >= 5.) )
               {

                //   float x2 = thetrack2.firsthit_X();
                //  float y2 = thetrack2.firsthit_Y();
                //  float z2 = thetrack2.firsthit_Z();

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

               }

            }

            }// End loop on other tracks

         //End of added by Paul
         //---------------------
         if ( thetrack.iJet() >= 0 ) mva_track_isinjet = 1; else mva_track_isinjet = 0;
        //  mva_track_algo              = thetrack.algo(); 

//          if ( thetrack.simTrack_isFromLLP() >= 1 ){
    // Other definition of the signal : 20% gain in sginal
     if ( thetrack.sim_LLP() >= 1  ){// && thetrack.mini_isHighQuality()
     
            nSBr4++;
//                treeS->GetBranch("mva_track_firstHit_x")->Fill();//exclude variables that higly depend on the flight distance
//             treeS->GetBranch("mva_track_firstHit_y")->Fill();//exclude variables that higly depend on the flight distance
//             treeS->GetBranch("mva_track_firstHit_z")->Fill();//exclude variables that higly depend on the flight distance
//             treeS->GetBranch("mva_track_dxy")->Fill();
//             treeS->GetBranch("mva_track_dxyError")->Fill();
//             treeS->GetBranch("mva_track_dz")->Fill();
//             // treeS->GetBranch("mva_track_dzError")->Fill();
//             treeS->GetBranch("mva_track_pt")->Fill();
//             treeS->GetBranch("mva_track_eta")->Fill();
//             treeS->GetBranch("mva_track_phi")->Fill();
//             treeS->GetBranch("mva_track_nchi2")->Fill();
//             treeS->GetBranch("mva_track_nhits")->Fill();//exclude variables that higly depend on the flight distance
//             treeS->GetBranch("mva_track_numberOfValidPixelHits")->Fill();//exclude variables that higly depend on the flight distance
//             treeS->GetBranch("mva_track_numberOfValidStripHits")->Fill();//exclude variables that higly depend on the flight distance
//             treeS->GetBranch("mva_track_isinjet")->Fill();
//             treeS->GetBranch("mva_track_lost")->Fill();
//             //treeS->GetBranch("mva_track_algo")->Fill();
//    //treeS->GetBranch("mva_track_isTight")->Fill();
//             treeS->GetBranch("mva_track_isHighQuality")->Fill();


//    treeS->GetBranch("mva_ntrk10")->Fill();
//    treeS->GetBranch("mva_ntrk20")->Fill();
//    treeS->GetBranch("mva_ntrk30")->Fill();
//    treeS->GetBranch("mva_ntrk40")->Fill();
//    treeS->GetBranch("mva_ntrk1020")->Fill();
//    treeS->GetBranch("mva_ntrk2030")->Fill();
//    treeS->GetBranch("mva_drSig")->Fill();
//    treeS->GetBranch("mva_dzSig")->Fill();
//    treeS->GetBranch("mva_ddSig")->Fill();
//    treeS->GetBranch("mva_ValTIBHit")->Fill();//exclude variables that higly depend on the flight distance
//    treeS->GetBranch("mva_ValTOBHit")->Fill();//exclude variables that higly depend on the flight distance
//    treeS->GetBranch("mva_ValPixBarHit")->Fill();//exclude variables that higly depend on the flight distance
//    treeS->GetBranch("mva_nValTECHHit")->Fill();//exclude variables that higly depend on the flight distance
//    treeS->GetBranch("mva_ntrk40XX")->Fill();
//    treeS->GetBranch("mva_track_dR")->Fill();//new
//    treeS->GetBranch("mva_track_dRmax")->Fill();
treeS->Fill();
         }

            else {
              nBBr2++;


//             treeB->GetBranch("mva_track_firstHit_x")->Fill();//exclude variables that higly depend on the flight distance
//             treeB->GetBranch("mva_track_firstHit_y")->Fill();//exclude variables that higly depend on the flight distance
//             treeB->GetBranch("mva_track_firstHit_z")->Fill();//exclude variables that higly depend on the flight distance
//             treeB->GetBranch("mva_track_dxy")->Fill();
//             treeB->GetBranch("mva_track_dxyError")->Fill();
//             treeB->GetBranch("mva_track_dz")->Fill();
//             // treeB->GetBranch("mva_track_dzError")->Fill();
//             treeB->GetBranch("mva_track_pt")->Fill();
//             treeB->GetBranch("mva_track_eta")->Fill();
//             treeB->GetBranch("mva_track_phi")->Fill();
//             treeB->GetBranch("mva_track_nchi2")->Fill();
//             treeB->GetBranch("mva_track_nhits")->Fill();//exclude variables that higly depend on the flight distance
//             treeB->GetBranch("mva_track_numberOfValidPixelHits")->Fill();//exclude variables that higly depend on the flight distance
//             treeB->GetBranch("mva_track_numberOfValidStripHits")->Fill();//exclude variables that higly depend on the flight distance
//             treeB->GetBranch("mva_track_isinjet")->Fill();
//             //treeB->GetBranch("mva_track_algo")->Fill();
//    //treeB->GetBranch("mva_track_isTight")->Fill();
//             treeB->GetBranch("mva_track_isHighQuality")->Fill();
//             treeB->GetBranch("mva_track_lost")->Fill();


//    treeB->GetBranch("mva_ntrk10")->Fill();
//    treeB->GetBranch("mva_ntrk20")->Fill();
//    treeB->GetBranch("mva_ntrk30")->Fill();
//    treeB->GetBranch("mva_ntrk40")->Fill();
//    treeB->GetBranch("mva_ntrk1020")->Fill();
//    treeB->GetBranch("mva_ntrk2030")->Fill();
//    treeB->GetBranch("mva_drSig")->Fill();
//    treeB->GetBranch("mva_dzSig")->Fill();
//    treeB->GetBranch("mva_ddSig")->Fill();
//    treeB->GetBranch("mva_ValTIBHit")->Fill();//exclude variables that higly depend on the flight distance
//    treeB->GetBranch("mva_ValTOBHit")->Fill();//exclude variables that higly depend on the flight distance
//    treeB->GetBranch("mva_ValPixBarHit")->Fill();//exclude variables that higly depend on the flight distance
//    treeB->GetBranch("mva_nValTECHHit")->Fill();//exclude variables that higly depend on the flight distance
//    treeB->GetBranch("mva_ntrk40XX")->Fill();
//    treeB->GetBranch("mva_track_dR")->Fill();//new
//    treeB->GetBranch("mva_track_dRmax")->Fill();
treeB->Fill();

         }
            }


      } //END loop on all tracks

//----------------------------------//
   }//tree_Filter

   }
   writeHistograms();
//    int Sentries = nSBr1+nSBr0+ntotjet+nSBr3+nSBr4;//nSBr0=> muon_size
//    int Bentries = nSBr1+nSBr0+ntotjet+nSBr3+nBBr2;//ntotjet =>PFJet_size
//     int Sentries = nSBr0;
//     int Bentries = nSBr0;
//    treeS->SetEntries(Sentries);
//    treeB->SetEntries(Bentries);
   treeS->Write();
   treeB->Write();


}
