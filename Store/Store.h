#include "Product/Product.h"
#include <vector>
#include <ostream>

#ifndef POO_MAGAZIN_H
#define POO_MAGAZIN_H

#include "./Product/ProductService.h"
#include "../Cart/CartService.h"

class Store {
    Utils utils;
    ProductService productService;
    CartService cartService;
public:
    const ProductService &getProductService() const;

    Store()=default;
    Store(const Store& other);

    void showProducts();

    void addProduct();

    void addProductToCart();

    bool operator==(const Store &rhs) const;

    bool operator!=(const Store &rhs) const;


    void changePrice();

    void remove();

//    vector<Product> loadInitialProducts();


    virtual ~Store();


    void loadInitialProducts();
};


#endif //POO_MAGAZIN_H
