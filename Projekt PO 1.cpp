#include "Swiat.hpp"
#include "Swiat.cpp"
#include "Organizm.cpp"
#include "Organizm.hpp"
#include <iostream>


int main(){
    Swiat* swiat;
    char polecenie, inputGracza;
    while (1) {
        std::cout << " N - nowa gra, Z - zapisana gra" << std::endl;
        std::cin >> polecenie;
        if (polecenie == 'N' || polecenie == 'n') {
            int x, y;
            std::cout << "Podaj wielkosc planszy \n";
            std::cout << "Rozmiar X: ";
            std::cin >> x;
            std::cout << "Rozmiar Y: ";
            std::cin >> y;
            swiat = new Swiat(x, y);
            break;
        }
        if (polecenie == 'Z' || polecenie == 'z') {
            swiat = Swiat::otworzSwiat();
            break;
        }
        else std::cout << "Wybrano nieprawidlowa wartosc, wybierz jeszcze raz: " << std::endl;
    } 

    while (swiat->getCzyKoniecGry() == 0) {
        swiat->rysujSwiat();
        swiat->wykonajTure();
        inputGracza = getchar();
        if (inputGracza == 'x') break;  
        while (true) {
            std::cout << " Nacisnij ENTER, aby przejsc do kolejnej tury..." << std::endl;
            inputGracza = getchar();
            if (inputGracza == '\n') break;
        }
    }
    system("csl");
    swiat->rysujSwiat();

    return 0;
}
