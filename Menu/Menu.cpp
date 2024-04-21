#include <iostream>

using namespace std;
#include "Menu.h"


Menu::Menu(const Store &store) : store(store) {}

void Menu::start() {
    cout << "Bine ai venit la magazinul tau!\n";
    while (true) {
        cout << OPTION_TEXT;
        int option = utils.readOption();
        if (option != 9)
            processOption(option);
        else break;
    }
}


Menu::~Menu() {

}

void Menu::goForward() {
    cout << "Pentru a continua introdu orice text:\n";
    string x;
    cin >> x;
}

void Menu::processOption(int optiune) {
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
        default:
            cout << "Optiunea nu este valida!\n";
            goForward();
            break;
    }

}

