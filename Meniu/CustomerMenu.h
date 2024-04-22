//
// Created by alext on 4/21/2024.
//

#ifndef POO_CUSTOMERMENU_H
#define POO_CUSTOMERMENU_H


#include "Menu.h"

class CustomerMenu : public Menu {
    //Customer customer;
    Store store;
    const string CUSTOMER_OPTION_TEXT = "------------CLIENT------------\n"
                                        "Apasa tasta corespunzatoare actiunii pe care doresti sa o faci:\n"
                                        "1.Adauga produs in cos.\n"
                                        "2.Elimina produs din cos.\n"
                                        "9.Inapoi la meniul principal";
public:
    CustomerMenu(const Store &store);

    void start();
};


#endif //POO_CUSTOMERMENU_H
