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