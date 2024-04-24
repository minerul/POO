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
    string details;
public:
    int getId() const;

    const vector<Product> &getProducts() const;

    Receipt(int id, vector <Product> products, string details);
    friend std::ostream& operator<<(std::ostream& os, const Receipt& receipt);

    const string &getDetails() const;
};


#endif //POO_RECEIPT_H
