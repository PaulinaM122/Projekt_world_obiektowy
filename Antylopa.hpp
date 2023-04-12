#ifndef Antylopa_hpp
#define Antylopa_hpp

#include "Zwierze.hpp"

class Antylopa :public Zwierze {
public:
	Antylopa(Swiat* biezacySwiat, int polozenieX, int polozenieY, int dlugoscZycia);
	~Antylopa() override;
	std::string getNazwa() override;
	void rysowanie() override;
	void rozmnazanie(Punkt p);
	void kolizja(Organizm* organizm) override;
	Punkt wolneMiejsceObok(Punkt p) override;
	Organizm* rozmnazanieKonkretneZwierze(Punkt p);
};

#endif
