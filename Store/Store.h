#include "Product/Product.h"


#include <vector>
#include <ostream>
#include <memory>

#ifndef POO_MAGAZIN_H
#define POO_MAGAZIN_H

#include "./Product/ProductService.h"
#include "../Cart/CartService.h"
#include "../Register/RegisterService.h"

class Store {
    Utils utils;
    ProductService productService;
    CartService *cartService; // smart pointer
    RegisterService registerService;
    ReceiptService receiptService;

protected:
    Store(ProductService productService, CartService *cartService, RegisterService registerService);
    static Store *instance;

public:

    Store(Store &other) = delete; // nu trebuie sa poata fi copiati


    ProductService getProductService() const;

    CartService *getCartService() const;

    Store() = default;

    void showProducts();

    void addProduct();

    void addProductToCart();

    void showCart();

    void remove();

    bool operator==(const Store &rhs) const;

    bool operator!=(const Store &rhs) const;


    void changePrice();


    virtual ~Store();


    void loadInitialProducts();

    void removeItemFromCart();

    void buyCart();

    void emptyCart();


    RegisterService getRegisterService();

    void checkCartPrice();

    void viewReceipts();

    static Store *GetInstance(ProductService productService, CartService *cartService, RegisterService registerService);

    void showInitialProducts();
};


#endif //POO_MAGAZIN_H
