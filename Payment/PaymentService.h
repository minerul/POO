//
// Created by alext on 4/23/2024.
//

#ifndef POO_PAYMENTSERVICE_H
#define POO_PAYMENTSERVICE_H

#include <memory>
#include "Cash.h"
#include "Card.h"
#include "Revolut.h"
#include "../Utils/Utils.h"

class PaymentService {
    //vector <Payment> payment;
    Utils utils;
public:
    PaymentService();
    shared_ptr<Payment> choosePayment();
    void processOption(int option);


    int processPayment(shared_ptr<Payment> payment);
};


#endif //POO_PAYMENTSERVICE_H
