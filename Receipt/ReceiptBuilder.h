//
// Created by alext on 5/29/2024.
//

#ifndef POO_RECEIPTBUILDER_H
#define POO_RECEIPTBUILDER_H


#include "Receipt.h"

class ReceiptBuilder {
private:
    int id;
    vector<Product> products;
    shared_ptr<Payment> payment;

public:
    ReceiptBuilder& setId(int id);

    ReceiptBuilder& setProducts(const vector<Product>& products);

    ReceiptBuilder& setPayment(const shared_ptr<Payment>& payment);

    Receipt build();


    //    void ReceiptService::createReceipt(vector<Product> products, shared_ptr<Payment> payment) {
//        int id = 1;
//        if (!receipts.empty())
//            id = receipts.size() + 1;
//        Receipt receipt(id, products, payment);
//        receipts.push_back(receipt);
//    }

};


#endif
