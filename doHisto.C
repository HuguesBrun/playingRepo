
doHisto(){
	TH1F *h = new TH1F("h","",10,0,10);
	h->Fill(5);
	h->Fill(7);
	h->Draw();
}
