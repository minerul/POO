//
// Created by Samer El Abassi on 20.04.2024.
//

#ifndef POO_PRODUCTSERVICE_H
#define POO_PRODUCTSERVICE_H


#include <vector>
#include "Product.h"
#include "../../Utils/Utils.h"
class ProductService {

    std::vector<Product> products;
    Utils utils;

public:
    ProductService();

    void addProduct(Product product);
    void addProduct();

    void removeProduct();

    void changePrice();

    void showProducts();

    virtual ~ProductService();
    std::vector<Product> loadInitialProducts();

    bool checkDuplicates(Product product);


};


#endif //POO_PRODUCTSERVICE_H
