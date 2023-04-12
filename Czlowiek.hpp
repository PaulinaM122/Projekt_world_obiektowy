#ifndef Czlowiek_hpp
#define Czlowiek_hpp

#include "Zwierze.hpp"

class Czlowiek :public Zwierze {
public:
	Czlowiek(Swiat* biezacySwiat, int polozenieX, int polozenieY, int dlugoscZycia);
	~Czlowiek() override;
	std::string getNazwa() override;
	void rysowanie() override ;
	void akcja() override;
	void rozmnazanie(Punkt p);
	Organizm* rozmnazanieKonkretneZwierze(Punkt p);
};

#endif
