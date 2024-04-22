//
// Created by alext on 4/21/2024.
//

#ifndef POO_MENU_H
#define POO_MENU_H


#include "../Store/Store.h"

class Menu {
    const string MENU_TEXT = "Alege perspectiva:\n"
                             "1.Manager.\n"
                             "2.Client.\n"
                             "0.Inchide meniul.\n";

protected:
    Store store;
    Utils utils;
public:
    Menu();
    Menu(const Store &store);
    virtual void start();
    static void goForward();

    bool operator==(const Menu &rhs) const;

    bool operator!=(const Menu &rhs) const;

};


#endif //POO_MENU_H
