#ifndef POO_PRODUS_H
#define POO_PRODUS_H
using namespace std;

#include <string>
#include <ostream>


class Product {
    string name;
    int price;
public:
    Product();

    Product(string name, int price);

    bool operator==(const Product &rhs) const;

    bool operator!=(const Product &rhs) const;

    friend istream &operator>>(istream &os, Product &product);

    friend ostream &operator<<(ostream &os, const Product &product);

    const string &getName() const;

    void setName(const string &name);

    int getPrice() const;

    void setPrice(int price);

    virtual ~Product();
};


#endif
