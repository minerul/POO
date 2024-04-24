//
// Created by alext on 4/23/2024.
//

#ifndef POO_REGISTERSERVICE_H
#define POO_REGISTERSERVICE_H


#include "../Cart/CartService.h"
#include "../Payment/PaymentService.h"
#include "../Receipt/ReceiptService.h"

class RegisterService {



    CartService *cartService;
    ReceiptService receiptService;
    PaymentService paymentService;
public:
    RegisterService(RegisterService &other);
    RegisterService(CartService *cartService);
    RegisterService();
    void buyCart();

    CartService *getCartService() const;
};


#endif //POO_REGISTERSERVICE_H
