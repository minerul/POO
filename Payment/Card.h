//
// Created by alext on 4/23/2024.
//

#ifndef POO_CARD_H
#define POO_CARD_H
#include <string>
#include "Payment.h"

using namespace std;

class Card : public Payment{
    string cardNumber;
public:
    void processPayment(int amount);
};


#endif //POO_CARD_H
