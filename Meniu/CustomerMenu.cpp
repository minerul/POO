//
// Created by alext on 4/21/2024.
//

#include "CustomerMenu.h"
#include <iostream>
using namespace std;


CustomerMenu::CustomerMenu(const Store &store) : Menu(store) { // copy
    this->store = Store(store);
}
void CustomerMenu::start() {
    while (true) {
        cout << CUSTOMER_OPTION_TEXT;
        int option = utils.readOption(0, 2);
        if (option != 0)
            processOption(option);
        else break;
    }
}
void CustomerMenu::processOption(int optiune) {
    switch (optiune) {
        case -1: // daca a introdus string
            goForward();
            break;
        case 1:
            //adauga produs in cosstore.addProduct();
            goForward();
            break;
        case 2:
            //elimina produs din cos
            goForward();
            break;
    }
}