//
// Created by alext on 4/21/2024.
//

#include "CustomerMenu.h"
#include <iostream>
#include "Menu.h"
using namespace std;


CustomerMenu::CustomerMenu(const Store &store) : Menu(store) { // copy
}
void CustomerMenu::start() {
    while (true) {
        cout << CUSTOMER_OPTION_TEXT;
        int option = utils.readOption(0, 4);
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
            store.addProductToCart();
            goForward();
            break;
        case 2:
            store.removeItemFromCart();
            goForward();
            break;
        case 3:
            store.showCart();
            goForward();
            break;
        case 4:
            //store.buyCart();
            goForward();
            break;
    }
}