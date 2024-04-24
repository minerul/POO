//
// Created by alext on 4/23/2024.
//

#ifndef POO_PAYMENTSERVICE_H
#define POO_PAYMENTSERVICE_H

#include "Cash.h"
#include "Card.h"
#include "Revolut.h"
#include "../Utils/Utils.h"

class PaymentService {
    //vector <Payment> payment;
    Utils utils;
    Cash cash;
    Card card;
public:
    PaymentService();
    Payment & choosePayment();
    void processOption(int option);


    int processPayment(Payment &payment);
};


#endif //POO_PAYMENTSERVICE_H
