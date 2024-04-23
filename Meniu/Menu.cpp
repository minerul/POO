#include "Menu.h"

#include <iostream>
using namespace std;


void Menu::goForward() {
    cout << "Apasa orice tasta pentru a continua.\n";
    cin.get();
    cin.get();
}

//MainMenu::MainMenu(const Store &store) : Menu(store), customerMenu(store), managerMenu(store) {
//}
Menu::Menu(const Store &store) : store(const_cast<Store &>(store)) {
}

void Menu::start() {

}
