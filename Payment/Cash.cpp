#include <iostream>
#include "Cash.h"

using namespace std;

int checkInt(string x) {
    try {
        int x_int = stoi(x);
        return x_int;
    } catch (const std::invalid_argument &e) {
        cout << "Nu ai introdus un numar!\n";
    }
    return -1;
}

string Cash::toString(){
    string s = "Plata cash. Pret total: "+to_string(cartCost) + ". Suma acordata: " +to_string(this->totalMoney) + ". Rest: " + to_string(this->totalMoney-this->cartCost)+".\n";
    return s;
}
void Cash::read() {
    string amountString;
    int amount = -1;
    while (amount == -1) {
        cout << "Introdu suma cash:\n";
        cin >> amountString;
        amount = checkInt(amountString);
        if(amount<cartCost){
            cout<<"Nu ai platit suficient!\n";
            amount=-1;
        }
    }
    this->totalMoney = amount;

}

Cash::Cash() {

}

int Cash::getChange() {
    return totalMoney-cartCost;
}

//Cash::Cash(int totalMoney) {
//    this->totalMoney=totalMoney;
//}
