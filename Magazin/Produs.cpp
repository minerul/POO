#include "Produs.h"
#include <iostream>
Produs::Produs() {}
Produs::Produs(string nume, int pret) {
    this->nume = nume;
    this->pret = pret;
}
istream &operator>>(std::istream &is, Produs &produs) {
    cout<<"Introdu numele:";
    is >> produs.nume;
    cout<<"Introdu pretul:";
    is>> produs.pret;
    return is;
}

Produs::~Produs() {
}

const string &Produs::getNume() const {
    return nume;
}

void Produs::setNume(const string &nume) {
    Produs::nume = nume;
}

int Produs::getPret() const {
    return pret;
}

void Produs::setPret(int pret) {
    Produs::pret = pret;
}

ostream &operator<<(ostream &os, const Produs &produs) {
    os << "Nume: " << produs.nume << ", pret: " << produs.pret<<".\n";
    return os;
}

bool Produs::operator==(const Produs &rhs) const {
    return nume == rhs.nume;
}

bool Produs::operator!=(const Produs &rhs) const {
    return !(rhs == *this);
}
