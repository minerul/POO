//
// Created by alext on 4/23/2024.
//

#ifndef POO_RECEIPT_H
#define POO_RECEIPT_H


#include <vector>
#include "../Store/Product/Product.h"

class Receipt {
    int id;
    vector <Product> products;
public:
    int getId() const;

    const vector<Product> &getProducts() const;

    Receipt(int id, vector <Product> products);
    friend std::ostream& operator<<(std::ostream& os, const Receipt& receipt);
};


#endif //POO_RECEIPT_H
