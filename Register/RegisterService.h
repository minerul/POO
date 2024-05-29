
#ifndef POO_REGISTERSERVICE_H
#define POO_REGISTERSERVICE_H


#include "../Cart/CartService.h"
#include "../Payment/PaymentService.h"
#include "../Receipt/ReceiptService.h"
#include "../Receipt/ReceiptBuilder.h"

class RegisterService {
    CartService *cartService;
    ReceiptService receiptService;
    PaymentService paymentService;
    ReceiptBuilder receiptBuilder;
public:
    RegisterService(RegisterService &other);
    RegisterService(CartService *cartService);
    RegisterService();
    void buyCart();

    CartService *getCartService() const;

    void viewReceipts();
};


#endif //POO_REGISTERSERVICE_H
