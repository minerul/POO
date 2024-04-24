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
    std::unique_ptr<CartService> cartService; // smart pointer
    RegisterService registerService;
    ReceiptService receiptService;
public:
    ProductService getProductService() const;

    CartService* getCartService() const;

    Store() = default;

    Store(Store &other);

    Store(ProductService productService, CartService *cartService, RegisterService registerService);

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


    RegisterService getRegisterService() ;

    void checkCartPrice();

    void viewReceipts();
};


#endif //POO_MAGAZIN_H
