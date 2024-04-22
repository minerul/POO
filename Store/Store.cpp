#include "Store.h"
#include <iostream>


Store::Store(const Store& other) {
    productService = other.getProductService();  // Shallow copy for ProductService
}

Store::~Store() {}

void Store::loadInitialProducts(){
    productService.loadInitialProducts();
}

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

const ProductService &Store::getProductService() const {
    return productService;
}


