//
// Created by alext on 4/23/2024.
//

#ifndef POO_CASH_H
#define POO_CASH_H


#include "Payment.h"

class Cash: public Payment {
public:
    Cash();
    void read();

    int getChange();

    string toString();
};


#endif //POO_CASH_H
