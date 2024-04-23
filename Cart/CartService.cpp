//
// Created by alext on 4/22/2024.
//

#include "CartService.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

CartService::CartService() {
    Cart cart;
    this->cart = cart;
}

void CartService::addProductToCart(Product product) {
    vector<Product> vectorProducts = cart.getProducts();
    if (count(vectorProducts.begin(), vectorProducts.end(), product) == 0)
        vectorProducts.push_back(product);
    else
        cout << "Acest produs se afla deja in cos!\n";
    cart.setProducts(vectorProducts);
    setCart(cart);
}

void CartService::setCart(const Cart &cart) {
    CartService::cart = cart;
}

const Cart &CartService::getCart() const {
    return cart;
}

vector<Product> CartService::showCart() {
    for (int i = 0; i < getCart().getProducts().size(); i++)
        cout << i + 1 << ". " << getCart().getProducts()[i];
    return getCart().getProducts();
}

void CartService::deleteProduct(int indice) {
    vector<Product> vectorProducts = cart.getProducts();
    vectorProducts.erase(vectorProducts.begin() + indice + 1);
    cart.setProducts(vectorProducts);
    setCart(cart);
}

void CartService::emptyCart() {
    cout<<"Cosul a fost golit!\n";
    vector<Product> vectorProducts;
    cart.setProducts(vectorProducts);
    setCart(cart);
}
