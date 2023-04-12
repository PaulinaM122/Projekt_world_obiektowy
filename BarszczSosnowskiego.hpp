﻿#ifndef BarszczSosnowskiego_hpp
#define BarszczSosnowskiego_hpp

#include "Rosliny.hpp"

class BarszczSosnowskiego :public Rosliny {
public:
	BarszczSosnowskiego(Swiat* biezacySwiat, int polozenieX, int polozenieY, int dlugoscZycia);
	~BarszczSosnowskiego() override;
	void akcja() override;
	std::string getNazwa() override;
	void rysowanie() override;
	Organizm* rozmnazanieKonkretneZwierze(Punkt p) override;
	void rozmnazanie(Punkt pkt) override;
	bool umiejetnoscSpecjalna(Organizm* atak, Organizm* obrona) override;
	
};

#endif
