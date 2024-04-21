

#ifndef POO_MENIU_H
#define POO_MENIU_H

#include <iostream>
#include "../Store/Store.h"
#include "../Utils/Utils.h"
using namespace std;

class Menu {

    Store store;
    Utils utils;
    const string OPTION_TEXT = "-----------------------------------------\n"
                                "Apasa tasta corespunzatoare actiunii pe care doresti sa o faci:\n"
                                "1.Adauga produs.\n"
                                "2.Vezi produsele din magazin.\n"
                                "3.Schimba pretul unui produs.\n"
                                "4.Elimina produs din magazin.\n"
                                "9.Inchide meniu.\n";
public:

    Menu(const Store &store);



    void start();

    void processOption(int optiune);

    void goForward();

    virtual ~Menu();
};


#endif
