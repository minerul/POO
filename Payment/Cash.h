//
// Created by alext on 4/23/2024.
//

#ifndef POO_CASH_H
#define POO_CASH_H


#include "Payment.h"

class Cash: public Payment {
public:
    void processPayment(int amount);
    void read();
};


#endif //POO_CASH_H
