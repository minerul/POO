//
// Created by alext on 4/23/2024.
//

#ifndef POO_PAYMENT_H
#define POO_PAYMENT_H
#include <iostream>
using namespace std;

class Payment {
protected:
    int totalMoney; // cat platesti
    int cartCost;
public:
    Payment();
    int getCartCost() const;

    void setTotalMoney(int totalMoney);

    void setCartCost(int cartCost);

    virtual string toString();
    virtual void read();

    virtual int getChange(); // functie virtuala
};


#endif //POO_PAYMENT_H
