#include "PaymentService.h"
#include <iostream>
#include <memory>

using namespace std;

PaymentService::PaymentService() {
}

shared_ptr<Payment> PaymentService::choosePayment() {
    cout << "Selecteaza metoda de plata:\n"
            "1.Cash.\n"
            "2.Card.\n"
            "3.Revolut\n";
    int option = Utils::readOption(1, 3);
    switch (option) {
        case 1:
            return make_shared<Cash>(); // conversii, mergea si implicit Cash->Payment + smart pointer
        case 2:
            return make_shared<Card>();
        case 3:
            return make_shared<Revolut>();
    }
}

int PaymentService::processPayment(shared_ptr<Payment> payment) {
    cout << "Ai de platit: " << payment->getCartCost() << " lei.\n";
    payment->read();
    cout << "Plata a fost realizata cu succes!\n";
    int rest = payment->getChange();
    if (rest != 0)
        cout << "Restul este: " << rest << " lei.\n";
    return rest;
}
