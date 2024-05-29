#ifndef POO_RECEIPTSERVICE_H
#define POO_RECEIPTSERVICE_H


#include "Receipt.h"
#include "../Payment/Payment.h"
#include "../Utils/Utils.h"
#include "../Service.h"
#include <vector>

class ReceiptService: public Service<Receipt> {
    Payment payment;

public:
    ReceiptService();


    void showLastReceipt();


    void createReceipt(vector<Product> products, shared_ptr<Payment> payment);

    const vector<Receipt> &getReceipts() const;

    const unsigned long long int getReceiptsSize() const;
};


#endif //POO_RECEIPTSERVICE_H
