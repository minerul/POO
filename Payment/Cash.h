//
// Created by alext on 4/23/2024.
//

#ifndef POO_CASH_H
#define POO_CASH_H


#include "Payment.h"

class Cash: public Payment {
public:
    Cash();
//    Cash(int totalMoney);
    void processPayment(int amount);
    void read();

    int getChange();
};


#endif //POO_CASH_H
