#include "Payment.h"
#include <iostream>
using namespace std;

//int Payment::getChange() {
//    return 0;
//}

void Payment::processPayment() {

}

void Payment::read() {

}
int Payment::getChange(){
    return 0;
}

int Payment::getCartCost() const {
    return cartCost;
}

void Payment::setCartCost(int cartCost) {
    Payment::cartCost = cartCost;
}

void Payment::setTotalMoney(int totalMoney) {
    Payment::totalMoney = totalMoney;
}

string Payment::toString() {
    return std::string();
}
