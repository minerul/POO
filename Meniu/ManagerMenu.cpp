//
// Created by alext on 4/21/2024.
//

#include "ManagerMenu.h"

ManagerMenu::ManagerMenu(const Store &store) : Menu(store) { // copy
}


void ManagerMenu::start() {
    while (true) {
        cout << MANAGER_OPTION_TEXT;
        int option = utils.readOption(0, 4);
        if (option != 0)
            processOption(option);
        else break;
    }
}

void ManagerMenu::processOption(int optiune) {
    switch (optiune) {
        case -1: // daca a introdus string
            goForward();
            break;
        case 1:
            store.addProduct();
            goForward();
            break;
        case 2:
            store.showProducts();
            goForward();
            break;
        case 3:
            store.changePrice();
            goForward();
            break;
        case 4:
            store.remove();
            goForward();
            break;
    }
}

const Store &ManagerMenu::getStore() const {
    return store;
}