#include "Menu.h"

#include <iostream>
using namespace std;


void Menu::goForward() {
    cout << "Apasa orice tasta pentru a continua.\n";
    cin.get();
    cin.get();
}

Menu::Menu(const Store &store) {
    this->store = store;
    this->utils = Utils();
}

void Menu::start() {

}
