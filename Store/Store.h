#include "Product/Product.h"
#include <vector>
#include <ostream>

#ifndef POO_MAGAZIN_H
#define POO_MAGAZIN_H

#include "./Product/ProductService.h"
#include "../Cart/CartService.h"
#include "../Register/RegisterService.h"

class Store {
    Utils utils;
    ProductService productService;
    CartService cartService;
    RegisterService registerService;
public:
    ProductService getProductService() const;

    Store() = default;

    Store(const Store &other);

    Store(ProductService productService);

    void showProducts();

    void addProduct();

    void addProductToCart();

    void showCart();

    void remove();

    bool operator==(const Store &rhs) const;

    bool operator!=(const Store &rhs) const;


    void changePrice();

//    vector<Product> loadInitialProducts();


    virtual ~Store();


    void loadInitialProducts();

    void removeItemFromCart();

    void buyCart();

    void emptyCart();
};


#endif //POO_MAGAZIN_H
