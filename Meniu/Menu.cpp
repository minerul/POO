//
// Created by alext on 4/21/2024.
//

#include "Menu.h"
#include "ManagerMenu.h"
#include "CustomerMenu.h"


Menu::Menu() {
}

Menu::Menu(const Store &store) {
    this->store=store;
}

void Menu::start() {
    ManagerMenu managerMenu(store);
    CustomerMenu customerMenu(store);
    while (true) {
        cout << MENU_TEXT;
        int option = utils.readOption(0, 2);
        if(option==0)
            break;
        switch (option) {
            case -1:
                start();
                break;
            case 1:
                managerMenu.start();
                //store=managerMenu.getStore();
                break;
            case 2:
                customerMenu.start();
                //store=managerMenu.getStore();
                break;
        }
    }
};

void Menu::goForward() {
    cout << "Pentru a continua introdu orice text:\n";
    string x;
    cin >> x;
}

