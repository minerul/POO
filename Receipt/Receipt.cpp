//
// Created by alext on 4/23/2024.
//

#include "Receipt.h"

int Receipt::counter = 0;


Receipt::Receipt(int id, vector<Product> products, shared_ptr<Payment> payment) : payment(payment) {
    this->id = id;
    this->products = products;
    this->payment = payment;
}

const vector<Product> &Receipt::getProducts() const {
    return products;
}

int Receipt::getId() const {
    return id;
}
shared_ptr<Payment> Receipt::getPayment() const {
    return payment;
}

std::ostream &operator<<(std::ostream &os, const Receipt &receipt) {
    os << "--------------------BON--------------------\n";
    os << "Numarul bonului: " << receipt.getId() << "\n" << receipt.getPayment()->toString() << "Produsele cumparate:\n";
    for (const auto &product: receipt.getProducts()) {
        os << product;
    }
    os << "--------------------BON--------------------\n";
    return os;
}


int Receipt::getCounter() {
    return counter;
}

void Receipt::setCounter(int counter) {
    Receipt::counter = counter;
}
