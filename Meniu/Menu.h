//
// Created by Samer El Abassi on 23.04.2024.
//

#ifndef MENUPARENT_H
#define MENUPARENT_H

#include "../Store/Store.h"

class Menu {

protected:
    Store store;
    Utils utils;

public:
    void goForward();

    virtual void start();

    explicit Menu(const Store &store, const Utils &utils) : store(store), utils(utils) {
    }

    Menu(const Store &store);
};


#endif //MENUPARENT_H
