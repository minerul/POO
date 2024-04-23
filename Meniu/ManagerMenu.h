#ifndef POO_MANAGERMENU_H
#define POO_MANAGERMENU_H


#include "../Store/Store.h"
#include "Menu.h"
class ManagerMenu : public Menu {
public:
    const Store &getStore() const;

private:
    const string MANAGER_OPTION_TEXT = "------------MANAGER------------\n"
                                       "Apasa tasta corespunzatoare actiunii pe care doresti sa o faci:\n"
                                       "1.Adauga produs.\n"
                                       "2.Vezi produsele din magazin.\n"
                                       "3.Schimba pretul unui produs.\n"
                                       "4.Elimina produs din magazin.\n"
                                       "0.Inapoi la meniul principal.\n";
public:
    ManagerMenu(const Store& store);

    ManagerMenu();

    void start();

    void processOption(int optiune);

};


#endif //POO_MANAGERMENU_H
