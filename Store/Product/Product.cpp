#include "Product.h"
#include <iostream>

Product::Product() {}

Product::Product(string name, int price) {
    this->name = name;
    this->price = price;
}

istream &operator>>(std::istream &is, Product &product) {
    cout << "Introdu numele:";
    is >> product.name;
    cout << "Introdu pretul:";
    is >> product.price;
    return is;
}

Product::~Product() {
}

const string &Product::getName() const {
    return name;
}

void Product::setName(const string &name) {
    Product::name = name;
}

int Product::getPrice() const {
    return price;
}

void Product::setPrice(int price) {
    Product::price = price;
}

ostream &operator<<(ostream &os, const Product &product) {
    os << "Nume: " << product.name << ", pret: " << product.price << ".\n";
    return os;
}

bool Product::operator==(const Product &rhs) const {
    return name == rhs.name;
}

bool Product::operator!=(const Product &rhs) const {
    return !(rhs == *this);
}
