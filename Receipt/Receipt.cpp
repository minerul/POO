//
// Created by alext on 4/23/2024.
//

#include "Receipt.h"

int Receipt::counter = 0;

Receipt::Receipt(int id, vector<Product> products, string details) {
    this->id = id;
    this->products = products;
    this->details = details;
}

const vector<Product> &Receipt::getProducts() const {
    return products;
}

int Receipt::getId() const {
    return id;
}

std::ostream &operator<<(std::ostream &os, const Receipt &receipt) {
    os << "--------------------BON--------------------\n";
    os << "Numarul bonului: " << receipt.getId() << "\n" << receipt.getDetails() << "Produsele cumparate:\n";
    for (const auto &product: receipt.getProducts()) {
        os << product;
    }
    os << "--------------------BON--------------------\n";
    return os;
}

const string &Receipt::getDetails() const {
    return details;
}

int Receipt::getCounter() {
    return counter;
}

void Receipt::setCounter(int counter) {
    Receipt::counter = counter;
}
