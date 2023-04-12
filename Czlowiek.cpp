#include "Czlowiek.hpp"
#include <iostream>
#include <string>

class Organizm;

Czlowiek::Czlowiek(Swiat* biezacySwiat, int polozenieX, int polozenieY, int dlugoscZycia)
	:Zwierze(biezacySwiat, 5, 4, polozenieX, polozenieY, dlugoscZycia) {
	setSzansaNaRuch(1);
	setSzybkoscAntylopy(0);
	setCzySzybkoscAktywna(0);
}

void Czlowiek::akcja() {
	char ruch;
	bool chwilowoNieaktywnaSzybkosc;
	int x, y;
	x = this->getX();
	y = this->getY();

	if (this->getCzySzybkoscAktywna() == 1) chwilowoNieaktywnaSzybkosc = 0;
	else chwilowoNieaktywnaSzybkosc = 1;

	if (this->getSzybkoscAntylopy() < 3 && this->getCzySzybkoscAktywna() == 1) {
		int numer = rand() % 2;
		if (numer > 0) chwilowoNieaktywnaSzybkosc = 1;
	}

	while (true) {
		ruch = getchar();
		// w - w gore
		if (ruch == 'w' || ruch == 'W') {
			if (chwilowoNieaktywnaSzybkosc == 0 && this->getX() <= 1) return;
			if (chwilowoNieaktywnaSzybkosc == 1 && this->getX() == 0) return;
			else if (chwilowoNieaktywnaSzybkosc == 0) x = x - 2;
			else x--;
			break;
		}
		// s - w dol
		else if (ruch == 's' || ruch == 'S') {
			if (chwilowoNieaktywnaSzybkosc == 0 && this->getX() >= biezacySwiat->getRozmiarSwiataX() - 2) return;
			if (chwilowoNieaktywnaSzybkosc == 1 && this->getX() == biezacySwiat->getRozmiarSwiataX() - 1) return;
			else if (chwilowoNieaktywnaSzybkosc == 0) x = x + 2;
			else x++;
			break;
		}
		// a - w lewo
		else if (ruch == 'a' || ruch == 'A') {
			if (chwilowoNieaktywnaSzybkosc == 0 && this->getY() <= 1) return;
			if (chwilowoNieaktywnaSzybkosc == 1 && this->getY() == 0) return;
			else if (chwilowoNieaktywnaSzybkosc == 0) y = y - 2;
			else y--;
			break;
		}
		// a - w prawo
		else if (ruch == 'd' || ruch == 'D') {
			if (chwilowoNieaktywnaSzybkosc == 0 && this->getY() >= biezacySwiat->getRozmiarSwiataY() - 2) return;
			if (chwilowoNieaktywnaSzybkosc == 1 && this->getY() == biezacySwiat->getRozmiarSwiataY() - 1) return;
			else if (chwilowoNieaktywnaSzybkosc == 0) y = y + 2;
			else y++;
			break;
		}
		else if (ruch == 'q' || ruch == 'Q') {
			if (this->getSzybkoscAntylopy() == 0 && this->getCzySzybkoscAktywna() == 0) {
				std::cout << "Szybkosc antylopy zostala aktywowana" << std::endl;
				this->setSzybkoscAntylopy(6);
				this->setCzySzybkoscAktywna(1);
			}
			else if (this->getCzySzybkoscAktywna() == 0 && this->getSzybkoscAntylopy() != 0)
				std::cout << "Szybkosc antylopy nie jest jeszcze dostepna(" << this->getSzybkoscAntylopy() << ") " << std::endl;
			else if (this->getCzySzybkoscAktywna() == 1)
				std::cout << "Szybkosc antylopy jest juz aktywna" << std::endl;
		}
		else if (ruch == 'z' || ruch == 'Z') {
			biezacySwiat->zapiszSwiat();
		}
		else if (ruch == 'x' || ruch == 'X') biezacySwiat->setCzyKoniecGry(1);
		else {
			std::cout << " Podaj kierunek: " << std::endl;
		}
	}

	if(this->getSzybkoscAntylopy() > 0) this->setSzybkoscAntylopy(this->getSzybkoscAntylopy() - 1);
	if (this->getSzybkoscAntylopy() == 0 && this->getCzySzybkoscAktywna() == 1) {
		this->setSzybkoscAntylopy(6);
		this->setCzySzybkoscAktywna(0);
	}

	Punkt p;
	p.setX(x);
	p.setY(y);

	if (czyWolneMiejsce(p))
		wykonajRuch(p);
	else 
		Zwierze::kolizja(biezacySwiat->organizmyPlansza[x][y]);
	
}

std::string Czlowiek::getNazwa() {
	return ("Czlowiek");
}

void Czlowiek::rysowanie() {
	char a = 1;
	std::cout << a <<" ";
}

void Czlowiek::rozmnazanie(Punkt pkt) {
}

Organizm* Czlowiek::rozmnazanieKonkretneZwierze(Punkt p) {
	 return new Czlowiek(biezacySwiat, p.getX(), p.getY(), 0);
}

Czlowiek::~Czlowiek() {
	biezacySwiat->setCzyKoniecGry(1);
}
