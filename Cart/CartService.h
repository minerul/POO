//
// Created by alext on 4/22/2024.
//

#ifndef POO_CARTSERVICE_H
#define POO_CARTSERVICE_H


#include "Cart.h"

class CartService {
    Cart cart;
public:
    CartService();
    void addProductToCart();

    void addProductToCart(Product product);

    void setCart(const Cart &cart);

    void emptyCart();

    const Cart &getCart() const;

    vector<Product> showCart();


    void deleteProduct(int indice);
};


#endif //POO_CARTSERVICE_H
