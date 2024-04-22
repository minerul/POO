#include "Product/Product.h"
#include <vector>
#include <ostream>

#ifndef POO_MAGAZIN_H
#define POO_MAGAZIN_H

#include "./Product/ProductService.h"

class Store {
    ProductService productService;
public:
    Store()=default;
    Store(const Store& other);

    void showProducts();

    void addProduct();

    bool operator==(const Store &rhs) const;

    bool operator!=(const Store &rhs) const;


    void changePrice();

    void remove();

    vector<Product> loadInitialProducts();


    virtual ~Store();

};


#endif //POO_MAGAZIN_H
