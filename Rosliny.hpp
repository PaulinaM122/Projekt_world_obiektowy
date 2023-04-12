#ifndef Rosliny_hpp
#define Rosliny_hpp

#include <iostream>
#include "Organizm.hpp"

class Rosliny :public Organizm {
public:
	Rosliny(Swiat* biezacySwiat, int sila, int inicjatywa, int polozenieX, int polozenieY, int dlugoscZycia);
	~Rosliny();
	std::string getNazwa() override = 0;
	void akcja() override;
	void kolizja(Organizm* organizm) override; 
	void rysowanie() override = 0;
	bool czyZwierze() override;
	virtual void rozprzestrzenianie();
	
};

#endif
