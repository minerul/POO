//
// Created by alext on 5/29/2024.
//

#include "ReceiptBuilder.h"

ReceiptBuilder &ReceiptBuilder::setId(int id) {
    this->id = id;
    return *this;
}

ReceiptBuilder &ReceiptBuilder::setProducts(const vector<Product> &products) {
    this->products = products;
    return *this;
}

ReceiptBuilder &ReceiptBuilder::setPayment(const shared_ptr<Payment> &payment) {
    this->payment = payment;
    return *this;
}


Receipt ReceiptBuilder::build() {
    return Receipt(id, products, payment);
}