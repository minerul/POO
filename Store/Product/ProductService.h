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

    vector<Product> loadInitialProducts();

    bool checkDuplicates(Product product);


    vector<Product> showProducts(vector<Product> productList);
};


#endif //POO_PRODUCTSERVICE_H
