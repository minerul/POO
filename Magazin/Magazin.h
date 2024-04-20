#include "Produs.h"
#include "../Utils.h"
#include <vector>
#include <ostream>

#ifndef POO_MAGAZIN_H
#define POO_MAGAZIN_H


class Magazin {
    Utils utils;
    vector<Produs> produse;
    const string NUME_FISIER = "../Default.in";

public:
    Magazin();

    explicit Magazin(const Utils &utils);

    void afiseazaProduse();

    void adaugaProdus();

    bool operator==(const Magazin &rhs) const;

    bool operator!=(const Magazin &rhs) const;

    bool verificaDubluri(Produs produs);

    void schimbaPret();

    void elimina();

    void init();
    vector <Produs> citesteProduseInitiale();

    const Utils &getUtils() const;

    void setUtils(const Utils &utils);

    const vector<Produs> &getProduse() const;

    void setProduse(const vector<Produs> &produse);

    const string &getNumeFisier() const;

    virtual ~Magazin();

    friend ostream &operator<<(ostream &os, const Magazin &magazin);
};


#endif //POO_MAGAZIN_H
