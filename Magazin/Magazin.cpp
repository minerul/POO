#include "Magazin.h"
#include <iostream>

Magazin::Magazin() {
}

Magazin::Magazin(const Utils &utils) : utils(utils) {
    this->produse = citesteProduseInitiale();
}

void Magazin::adaugaProdus() {
    Produs produs;
    cin >> produs;
    if (!verificaDubluri(produs)) {
        produse.push_back(produs);
    } else {
        cout << "Exista deja un produs cu acest nume(" << produs.getNume() << ").\n";
    }
}

const Utils &Magazin::getUtils() const {
    return utils;
}

Magazin::~Magazin() {

}

void Magazin::setUtils(const Utils &utils) {
    Magazin::utils = utils;
}

const vector<Produs> &Magazin::getProduse() const {
    return produse;
}

void Magazin::setProduse(const vector<Produs> &produse) {
    Magazin::produse = produse;
}

const string &Magazin::getNumeFisier() const {
    return NUME_FISIER;
}

bool Magazin::verificaDubluri(Produs produs) {
    for (const auto &i: produse) {
        if (produs == i)
            return true;
    }
    return false;
};

void Magazin::afiseazaProduse() {
    for (int i = 0; i < produse.size(); i++) {
        cout << i + 1 << ".";
        cout << produse[i];
    }
}

void Magazin::schimbaPret() {
    afiseazaProduse();

    cout << "Alege un element din lista utilizand tasta corespunzatoare.\n";
    int optiune = utils.citesteOptiune();
    if (optiune != -1 && utils.verificareInterval(optiune, 1, produse.size())) {
        cout << "Tasteaza pretul pe care-l doresti:\n";
        int pretNou;
        cin >> pretNou;

        produse[optiune - 1].setPret(pretNou);

        cout << "Pretul a fost modificat. Lista produselor a devenit:\n";
        afiseazaProduse();
    }
}

void Magazin::elimina() {
    afiseazaProduse();
    cout << "Alege un element din lista utilizand tasta corespunzatoare.\n";
    int optiune = utils.citesteOptiune();
    if (optiune != -1 && utils.verificareInterval(optiune, 1, produse.size())) {
        produse.erase(produse.begin() + optiune - 1);
        cout << "Produsul a fost sters. Lista produselor a devenit:\n";
        afiseazaProduse();
    }
}

vector<Produs> Magazin::citesteProduseInitiale() {
    vector<string> text = utils.citesteFisier(NUME_FISIER);
    vector<Produs> produseInitiale;
    for (auto &linie: text) {
        int pozitie = linie.find(" ");
        string numeProdus = linie.substr(0, pozitie);
        string pret = linie.substr(pozitie + 1, linie.size() - 1);
        int pretProdus = stoi(pret);
        Produs produs(numeProdus, pretProdus);
        produseInitiale.push_back(produs);
    }
    return produseInitiale;
}
