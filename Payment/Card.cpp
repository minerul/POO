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

string Card::toString(){
    string s = "Plata card. Numarul cardului: "+ to_string(this->cardNumber)+ ". Pret total: "+to_string(cartCost) +". Suma platita: " + to_string(this->cartCost)+".\n";
    return s;
}

void Card::read(){
    cardNumber=-1;
    cout<<"Introdu numarul cardului:\n";
    string cardNumberString;
    while(cardNumber==-1) {
        cin >> cardNumberString;
        cardNumber = validareNumar(cardNumberString);
    };
}
Card::Card() {

}
int Card::getChange(){
    return 0;
}
//Card::Card(int totalMoney) {
//    this->totalMoney=totalMoney;
//}