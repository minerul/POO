//
// Created by alext on 4/22/2024.
//

#include "Cart.h"

const vector<Product> &Cart::getProducts() const {
    return products;
}

void Cart::setProducts(const vector<Product> &products) {
    Cart::products = products;
}

Cart::Cart() {
}
