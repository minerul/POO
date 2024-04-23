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
        int option = utils.readOption(0, 6);
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
            store.showCart();
            goForward();
            break;
        case 3:
            store.removeItemFromCart();
            goForward();
            break;
        case 4:
            store.emptyCart();
            goForward();
            break;
        case 5:
            store.checkCartPrice();
            goForward();
            break;
        case 6:
            store.buyCart();
            goForward();
            break;
    }
}