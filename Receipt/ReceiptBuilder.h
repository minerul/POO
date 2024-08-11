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

};


#endif
