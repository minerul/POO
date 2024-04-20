

#ifndef POO_MENIU_H
#define POO_MENIU_H

#include <iostream>
#include "Magazin/Magazin.h"


using namespace std;

class Meniu {

    Magazin magazin;
    Utils utils=magazin.getUtils();
    const string TEXT_OPTIUNI = "-----------------------------------------\n"
                                "Apasa tasta corespunzatoare actiunii pe care doresti sa o faci:\n"
                                "1.Adauga produs.\n"
                                "2.Vezi produsele din magazin.\n"
                                "3.Schimba pretul unui produs.\n"
                                "4.Elimina produs din magazin.\n"
                                "9.Inchide meniu.\n";
public:

    Meniu(const Magazin &magazin);



    void start();

    void procesareOptiune(int optiune);

    void continua();

    const Magazin &getMagazin() const;

    void setMagazin(const Magazin &magazin);

    const string &getTextOptiuni() const;

    virtual ~Meniu();

    bool operator==(const Meniu &rhs) const;

    bool operator!=(const Meniu &rhs) const;
};


#endif
