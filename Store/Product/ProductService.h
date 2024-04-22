//
// Created by Samer El Abassi on 20.04.2024.
//

#ifndef POO_PRODUCTSERVICE_H
#define POO_PRODUCTSERVICE_H


#include <vector>
#include "Product.h"
#include "../../Utils/Utils.h"
class ProductService {

    vector<Product> products;
    Utils utils;

public:
    ProductService();
    ProductService(const ProductService& other);
    void addProduct(Product product);
    void addProduct();

    void removeProduct();

    void changePrice();

    vector <Product> showProducts();

    virtual ~ProductService();

    const vector<Product> &getProducts() const;

    void loadInitialProducts();

    bool checkDuplicates(Product product);


};


#endif //POO_PRODUCTSERVICE_H
