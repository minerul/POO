#include "Store.h"
#include <iostream>

Store::Store() {
    this->productService = ProductService();
}

Store::~Store() {}

void Store::addProduct() {
    productService.addProduct();
}

void Store::showProducts() {
    productService.showProducts();
}

void Store::changePrice() {
    productService.changePrice();
}

void Store::remove() {
    productService.removeProduct();
}

