#ifndef Owca_hpp
#define Owca_hpp

#include "Zwierze.hpp"

class Owca :public Zwierze {
public:
	Owca(Swiat* biezacySwiat, int polozenieX, int polozenieY, int dlugoscZycia);
	~Owca() override;
	std::string getNazwa() override;
	void rysowanie() override ;
	void rozmnazanie(Punkt p);
	Organizm* rozmnazanieKonkretneZwierze(Punkt p);
};

#endif
