
#include "RegisterService.h"

RegisterService::RegisterService(CartService *cartService) : cartService(cartService) {
}

void RegisterService::viewReceipts() {
    receiptService.viewReceipts();
}

void RegisterService::buyCart() {
    Cart cart = cartService->getCart();
    shared_ptr<Payment> payment = paymentService.choosePayment();
    payment->setCartCost(cartService->checkPrice());
    paymentService.processPayment(payment);
    receiptService.createReceipt(cart.getProducts(), payment);

    cout << "Apasa orice tasta pentru a vizualiza bonul:";
    cin.get();
    cin.get();
    receiptService.showLastReceipt();
    cartService->emptyCart();
}

RegisterService::RegisterService() {
}

CartService *RegisterService::getCartService() const {
    return cartService;
}

RegisterService::RegisterService(RegisterService &other) {
    cartService = other.getCartService();
}
