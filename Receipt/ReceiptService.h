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
    void createReceipt(vector <Product> products, string details);

    //void setReceipts(const vector<Receipt> &receipts);
    void showLastReceipt();

    void viewReceipts();
};


#endif //POO_RECEIPTSERVICE_H
