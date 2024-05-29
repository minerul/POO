#ifndef POO_PRODUCTSERVICE_H
#define POO_PRODUCTSERVICE_H


#include <vector>
#include "Product.h"
#include "../../Utils/Utils.h"
#include "../../Service.h"

class ProductService : public Service<Product> {


public:
    ProductService();
    ProductService(const ProductService& other);
//    void addItem(Product product);
//    void addItem();

    void removeProduct();

    void changePrice();


    virtual ~ProductService();

//    const vector<Product> &getProducts() const;

    vector<Product> loadInitialProducts();

    bool checkDuplicates(Product product);


    vector<Product> showProducts(vector<Product> productList);

    void showInitialProducts();

    Product readProduct();
};


#endif //POO_PRODUCTSERVICE_H
