//
// Created by alext on 4/23/2024.
//

#ifndef POO_REVOLUT_H
#define POO_REVOLUT_H


#include "Payment.h"
#include <iostream>

using namespace std;

class Revolut : public Payment {
    string account;

    void read();

    int getChange();

public:
    Revolut();
};


#endif //POO_REVOLUT_H
