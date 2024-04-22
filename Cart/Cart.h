//
// Created by alext on 4/22/2024.
//

#ifndef POO_CART_H
#define POO_CART_H

#include <vector>
#include "../Store/Product/Product.h"

class Cart {
    vector <Product> products;
public:
    Cart();

    const vector<Product> &getProducts() const;

    void setProducts(const vector<Product> &products);
};


#endif //POO_CART_H
