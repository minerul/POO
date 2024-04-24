#include "PaymentService.h"
#include <iostream>
using namespace std;

PaymentService::PaymentService() : cash(), card() {
}

Payment & PaymentService::choosePayment() {
    cout<<"Selecteaza metoda de plata:\n"
          "1.Cash.\n"
          "2.Card.\n"
          "3.Revolut\n";
    int option=utils.readOption(1,3);
    switch (option) {
        case 1:
            return this->cash;
        case 2:
            return this->card;
        default:
            return this->cash;
    }
}

int PaymentService::processPayment(Payment &payment) {
    cout<<"Ai de platit: "<<payment.getCartCost()<<" lei.\n";
    payment.read();
    cout<<"Plata a fost realizata cu succes!\n";
    int rest=payment.getChange();
    if(rest!=0)
        cout<<"Restul este: "<<rest<<" lei.\n";
    return payment.getChange();
}


