#include "Store.h"
#include <iostream>


Store::Store(const Store &other) {
    productService = other.getProductService();  // Shallow copy for ProductService
}

Store::~Store() {}

void Store::loadInitialProducts() {
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

void Store::addProductToCart() {
    vector<Product> products = productService.showProducts();
    int option = utils.readOption();
    cartService.addProductToCart(products[option - 1]);
}

Store::Store(ProductService productService) {
    this->productService = productService;
}

void Store::showCart() {
    cartService.showCart();
}

void Store::removeItemFromCart() {
    vector<Product> products = cartService.showCart();
    int option = utils.readOption();
    cartService.deleteProduct(option - 1);
}
// register,
// fac store.delete pt polimorfism gen sterg cart sau produs
// fac receipt


