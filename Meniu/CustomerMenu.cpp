//
// Created by alext on 4/21/2024.
//

#include "CustomerMenu.h"
#include <iostream>
using namespace std;

CustomerMenu::CustomerMenu(const Store &store) : Menu(store) {
}
void CustomerMenu::start() {
    cout<<CUSTOMER_OPTION_TEXT;
}