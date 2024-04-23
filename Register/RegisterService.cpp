//
// Created by alext on 4/23/2024.
//

#include "RegisterService.h"

RegisterService::RegisterService(CartService *cartService): cartService(cartService) {
}
void RegisterService::buyCart() {
    cartService->emptyCart();
}

RegisterService::RegisterService() {
}

CartService *RegisterService::getCartService() const {
    return cartService;
}

RegisterService::RegisterService( RegisterService &other){
    cartService = other.getCartService();
}
//RegisterService::RegisterService(CartService &cartService) : cartService(cartService) {
//
//}
