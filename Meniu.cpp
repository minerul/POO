#include <iostream>

using namespace std;

bool check_number(string str) {
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false) {
            cout << "Nu ai introdus un numar!" << endl;
            return false;
        }
    return true;
}

#include "Meniu.h"


Meniu::Meniu(const Magazin &magazin) : magazin(magazin) {}

void Meniu::start() {
    cout << "Bine ai venit la magazinul tau!\n";
    while (true) {
        cout << TEXT_OPTIUNI;
        int optiune = utils.citesteOptiune();
        if (optiune != 9)
            procesareOptiune(optiune);
        else break;
    }
}

const Magazin &Meniu::getMagazin() const {
    return magazin;
}

Meniu::~Meniu() {

}

void Meniu::continua() {
    cout << "Pentru a continua introdu orice text:\n";
    string x;
    cin >> x;
}

void Meniu::procesareOptiune(int optiune) {
    switch (optiune) {
        case -1: // daca a introdus string
            continua();
            break;
        case 1:
            magazin.adaugaProdus();
            continua();
            break;
        case 2:
            magazin.afiseazaProduse();
            continua();
            break;
        case 3:
            magazin.schimbaPret();
            continua();
            break;
        case 4:
            magazin.elimina();
            continua();
            break;
        default:
            cout << "Optiunea nu este valida!\n";
            continua();
            break;
    }

}

