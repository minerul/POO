#include "Store.h"
#include <iostream>

Store *Store::GetInstance(ProductService productService, CartService *cartService, RegisterService registerService) {
    if (instance == nullptr) {
        instance = new Store(productService, cartService, registerService);
    }
    return instance;
}

Store *Store::instance = nullptr;

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

void Store::showInitialProducts() {
    productService.showInitialProducts();
}

void Store::changePrice() {
    productService.changePrice();
}

void Store::remove() {
    productService.removeProduct();
}

ProductService Store::getProductService() const {
    return productService;
}

void Store::addProductToCart() {
    vector<Product> products = productService.showProducts();
    int option = Utils::readOption(); // functie statica
    cartService->addProductToCart(products[option - 1]);
}


void Store::showCart() {
    cartService->showCart();
}

void Store::removeItemFromCart() {
    vector<Product> products = cartService->showCart();
    int option = utils.readOption();
    cartService->deleteProduct(option - 1);
}

void Store::buyCart() {
    registerService.buyCart();
}

void Store::viewReceipts() {
    registerService.viewReceipts();
}

void Store::checkCartPrice() {
    int price = cartService->checkPrice();
    cout << "Pretul cosului este: " << price << '\n';
}

void Store::emptyCart() {
    cout << "Cosul a fost golit!\n";
    cartService->emptyCart();
}

Store::Store(ProductService productService, CartService *cartService, RegisterService registerService) {
    this->productService = productService;
    this->cartService = cartService;
    this->registerService = registerService;
}

CartService *Store::getCartService() const {
    return cartService;
}

RegisterService Store::getRegisterService() {
    return registerService;
}



// register,
// fac store.delete pt polimorfism gen sterg cart sau produs
// fac register, receipt dupa
// register emptyCart, dupa receipt, face plata?


