#include "Store.h"
#include <iostream>

//Store::Store() {
//    this->productService = ProductService();
//}
// Default constructor
//Store() : productService() {} // Initialize ProductService

// Copy constructor (performs deep copy)
Store::Store(const Store& other) {
    productService = other.productService;  // Shallow copy for ProductService
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

