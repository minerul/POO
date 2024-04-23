//
// Created by alext on 4/23/2024.
//

#ifndef POO_REGISTERSERVICE_H
#define POO_REGISTERSERVICE_H


#include "../Cart/CartService.h"

class RegisterService {
    CartService cartService;
public:
    RegisterService();
    void buyCart();
};


#endif //POO_REGISTERSERVICE_H
