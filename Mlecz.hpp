﻿#ifndef Mlecz_hpp
#define Mlecz_hpp

#include "Rosliny.hpp"

class Mlecz :public Rosliny {
public:
	Mlecz(Swiat* biezacySwiat, int polozenieX, int polozenieY, int dlugoscZycia);
	~Mlecz() override;
	void akcja() override;
	std::string getNazwa() override;
	void rysowanie() override;
	Organizm* rozmnazanieKonkretneZwierze(Punkt p) override;
	void rozmnazanie(Punkt pkt) override;
	bool umiejetnoscSpecjalna(Organizm* atak, Organizm* obrona) override;
	
};

#endif
