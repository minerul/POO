//
// Created by alext on 4/23/2024.
//

#ifndef POO_RECEIPT_H
#define POO_RECEIPT_H


#include <vector>
#include "../Store/Product/Product.h"

class Receipt {

    vector <Product> products;
    string details;
    int id;
    static int counter; //atribut static

public:
    static int getCounter();
    int getId() const;
    const vector<Product> &getProducts() const;

    Receipt(int id, vector<Product> products, string details);
    friend std::ostream& operator<<(std::ostream& os, const Receipt& receipt);

    const string &getDetails() const;

    static void setCounter(int counter);
};


#endif //POO_RECEIPT_H
