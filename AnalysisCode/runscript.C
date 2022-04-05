{

    gROOT->ProcessLine(".L src/HistoManager.cc+");
    gROOT->ProcessLine(".L src/Muon.cc+");
    gROOT->ProcessLine(".L src/Track.cc+");
    gROOT->ProcessLine(".L src/PFJet.cc+");
    gROOT->ProcessLine(".L src/PrimaryVertex.cc+");
    gROOT->ProcessLine(".L TreeReader.C+");
    gROOT->ProcessLine("TreeReader t;");
    gROOT->ProcessLine("t.Loop();");



}
