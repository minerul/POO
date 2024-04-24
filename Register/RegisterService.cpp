//
// Created by alext on 4/23/2024.
//

#include "RegisterService.h"

RegisterService::RegisterService(CartService *cartService): cartService(cartService) {
}
void RegisterService::buyCart() {
    Cart cart = cartService->getCart();
    //cartService->showCart();
    Payment &payment = paymentService.choosePayment();
    payment.setCartCost(cartService->checkPrice());
    paymentService.processPayment(payment); // repar sa faca pt toate alea diferite, dupa vad, o dau in bonuri cred
    //receiptService.createReceipt();
    //paymentService.pay(cart), REST daca e cash, metoda plata
    //in payment am o metoda de plata si bani initiali, bani ramasi, rest
    //dupa fac pay
    //payment = paymentService.getPayment
    //receiptService.createReceipt(cart, paymentMethod)
    //ReceiptService.afiseazaBon()->ultimul din lista;
    //in receptService las vector <receipt>
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
