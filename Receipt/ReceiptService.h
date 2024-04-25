#ifndef POO_RECEIPTSERVICE_H
#define POO_RECEIPTSERVICE_H


#include "Receipt.h"
#include "../Payment/Payment.h"
#include <vector>

class ReceiptService {
    vector <Receipt> receipts;
    Payment payment;
public:
    ReceiptService();

    void showLastReceipt();

    void viewReceipts();

    void createReceipt(vector<Product> products, shared_ptr<Payment> payment);
};


#endif //POO_RECEIPTSERVICE_H
