//
// Created by alext on 4/23/2024.
//

#include "Receipt.h"


Receipt::Receipt(int id, vector<Product> products) {
    this->id=id;
    this->products=products;
}

const vector<Product> &Receipt::getProducts() const {
    return products;
}

int Receipt::getId() const {
    return id;
}

std::ostream& operator<<(std::ostream& os, const Receipt& receipt) {
    os << "Receipt ID: " << receipt.getId() << "\nProducts:\n";
    for (const auto& product : receipt.getProducts()) {
        os << product;
    }
    return os;
}
