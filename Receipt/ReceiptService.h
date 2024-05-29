#ifndef POO_RECEIPTSERVICE_H
#define POO_RECEIPTSERVICE_H


#include "Receipt.h"
#include "../Payment/Payment.h"
#include <vector>

class ReceiptService {
    vector<Receipt> receipts;
    Payment payment;

public:
    ReceiptService();

    void addReceipt(Receipt receipt);

    void showLastReceipt();

    void viewReceipts();

    void createReceipt(vector<Product> products, shared_ptr<Payment> payment);

    const vector<Receipt> &getReceipts() const;

    const unsigned long long int getReceiptsSize() const;
};


#endif //POO_RECEIPTSERVICE_H
