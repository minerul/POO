#ifndef POO_RECEIPTSERVICE_H
#define POO_RECEIPTSERVICE_H


#include "Receipt.h"
#include <vector>

class ReceiptService {
    vector <Receipt> receipts;
public:
    ReceiptService();
    void createReceipt(vector <Product> products);

    //void setReceipts(const vector<Receipt> &receipts);
};


#endif //POO_RECEIPTSERVICE_H
