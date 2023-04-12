#ifndef Trawa_hpp
#define Trawa_hpp

#include "Rosliny.hpp"

class Trawa :public Rosliny {
public:
	Trawa(Swiat* biezacySwiat, int polozenieX, int polozenieY, int dlugoscZycia);
	~Trawa() override;
	void akcja() override;
	std::string getNazwa() override;
	void rysowanie() override;
	Organizm* rozmnazanieKonkretneZwierze(Punkt p) override;
	void rozmnazanie(Punkt pkt) override;
	bool umiejetnoscSpecjalna(Organizm* atak, Organizm* obrona) override;
	
};

#endif
