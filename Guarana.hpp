﻿#ifndef Guarana_hpp
#define Guarana_hpp

#include "Rosliny.hpp"

class Guarana :public Rosliny {
public:
	Guarana(Swiat* biezacySwiat, int polozenieX, int polozenieY, int dlugoscZycia);
	~Guarana() override;
	void akcja() override;
	std::string getNazwa() override;
	void rysowanie() override;
	Organizm* rozmnazanieKonkretneZwierze(Punkt p) override;
	void rozmnazanie(Punkt pkt) override;
	bool umiejetnoscSpecjalna(Organizm* atak, Organizm* obrona) override;
	
};

#endif
