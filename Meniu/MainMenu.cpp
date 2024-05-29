#include "MainMenu.h"

#include "Menu.h"
#include "ManagerMenu.h"
#include "CustomerMenu.h"


MainMenu::MainMenu(const Store &store) : Menu(store), customerMenu(store), managerMenu(store) {
}

void MainMenu::start() {
    while (true) {
        cout << MENU_TEXT;
        int option = utils.readOption(0, 3);
        if (option == 0)
            break;
        switch (option) {
            case -1:
                start();
                break;
            case 1:
                managerMenu.start();
                break;
            case 2:
                customerMenu.start();
                break;
            case 3:
                store.showInitialProducts();
                break;
            }
    }
};

