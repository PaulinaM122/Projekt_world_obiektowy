﻿#ifndef WilczeJagody_hpp
#define WilczeJagody_hpp

#include "Rosliny.hpp"

class WilczeJagody :public Rosliny {
public:
	WilczeJagody(Swiat* biezacySwiat, int polozenieX, int polozenieY, int dlugoscZycia);
	~WilczeJagody() override;
	void akcja() override;
	std::string getNazwa() override;
	void rysowanie() override;
	Organizm* rozmnazanieKonkretneZwierze(Punkt p) override;
	void rozmnazanie(Punkt pkt) override;
	bool umiejetnoscSpecjalna(Organizm* atak, Organizm* obrona) override;
	
};

#endif
