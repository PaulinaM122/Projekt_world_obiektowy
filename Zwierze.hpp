﻿#ifndef Zwierze_hpp
#define Zwierze_hpp

#include <iostream>
#include <string>
#include "Organizm.hpp"
#include "Punkt.hpp"

class Zwierze :public Organizm {
protected:
	double szansaNaRuch;
public:
	Zwierze(Swiat* biezacySwiat, int sila, int inicjatywa, int polozenieX, int polozenieY, int dlugoscZycia);
	~Zwierze();
	std::string getNazwa() override = 0;
	double getSzansaNaRuch();
	void setSzansaNaRuch(double szansa);
	void akcja() override;
	void kolizja(Organizm* organizm) override;
	void rysowanie() override = 0;
	Organizm* rozmnazanieKonkretneZwierze(Punkt p) override = 0;
	bool czyZwierze() override;
};

#endif
