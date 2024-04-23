//
// Created by alext on 4/21/2024.
//

#ifndef POO_MENU_H
#define POO_MENU_H


#include "CustomerMenu.h"
#include "ManagerMenu.h"
#include "Menu.h"

#include "../Store/Store.h"
class MainMenu : public Menu {
    const string MENU_TEXT = "Alege perspectiva:\n"
                             "1.Manager.\n"
                             "2.Client.\n"
                             "0.Inchide meniul.\n";
    ManagerMenu managerMenu;
    CustomerMenu customerMenu;

public:
    MainMenu();
    MainMenu(const Store &store);
    void start();

    bool operator==(const MainMenu &rhs) const;

    bool operator!=(const MainMenu &rhs) const;

};


#endif //POO_MENU_H
