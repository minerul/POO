#include "Card.h"
#include <iostream>
using namespace std;

int validareNumar(string x){
    try {
        int x_int = stoi(x);
        return x_int;
    } catch (const std::invalid_argument &e) {
        cout << "Nu ai introdus un numar!\n";
    }
    return -1;
}

void Card::read(){
    cout<<"Introdu numarul cardului:\n";
    string cardNumber;
    int cardNumberInt=-1;
    while(cardNumberInt==-1) {
        cin >> cardNumber;
        cardNumberInt = validareNumar(cardNumber);
    }
    this->cardNumber=cardNumberInt;
}
void Card::processPayment(int amount) {
    cout << "Plata cu cardul: " << amount << " RON\n";
}

Card::Card() {

}
//Card::Card(int totalMoney) {
//    this->totalMoney=totalMoney;
//}