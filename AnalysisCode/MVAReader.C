 {

   // --------------------------------------------------------------------------------------------------
   // Create the Reader object
   TMVA::Reader *reader = new TMVA::Reader( "!Color:!Silent" );

    reader->BookMVA( "BTD",  "dataset/weights/TMVAClassification_BDTG_10cm.weights.xml");

   TTree* treeS = (TTree*)input->Get("TreeS");
   treeS->Branch("mva_track_firstHit_x",        &mva_track_firstHit_x);
   treeS->Branch("mva_track_firstHit_y",        &mva_track_firstHit_y);
   treeS->Branch("mva_track_firstHit_z",        &mva_track_firstHit_z);
   treeS->Branch("mva_track_firstHit_dxy",      &mva_track_firstHit_dxy);
   treeS->Branch("mva_track_firstHit_dxyError", &mva_track_firstHit_dxyError);
   treeS->Branch("mva_track_firstHit_dz",       &mva_track_firstHit_dz);
   treeS->Branch("mva_track_firstHit_dzError",  &mva_track_firstHit_dzError);
   treeS->Branch("mva_track_pt",                &mva_track_pt);
   treeS->Branch("mva_track_eta",               &mva_track_eta);
   treeS->Branch("mva_track_nchi2",             &mva_track_nchi2);
   treeS->Branch("mva_track_nhits",             &mva_track_nhits);
   treeS->Branch("mva_track_numberOfValidPixelHits", &mva_track_numberOfValidPixelHits);
   treeS->Branch("mva_track_numberOfValidStripHits", &mva_track_numberOfValidStripHits);
   treeS->Branch("mva_track_isinjet",                &mva_track_isinjet);
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
  //to be added
   for (Long64_t ievt=0; ievt<theTree->GetEntries();ievt++) {
      if (ievt%1000 == 0) std::cout << "--- ... Processing event: " << ievt << std::endl;
      theTree->GetEntry(ievt);

        double bdtval = reader->EvaluateMVA( "BDT" );
   } 

}