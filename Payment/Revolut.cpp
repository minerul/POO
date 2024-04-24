//
// Created by alext on 4/23/2024.
//

#include "Revolut.h"

void Revolut::read() {
    cout << "Introdu contul de pe Revolut:\n";
    cin >> account;
}

Revolut::Revolut() {

}

int Revolut::getChange() {
    cout << "Intrucat este reducere pe revolut, ai primit inapoi: " << this->cartCost * 10 / 100 << " lei!\n";
    return this->cartCost * 10 / 100;
}

string Revolut::toString() {
    string s = "Plata prin Revolut. Numele contului: " + this->account + ". Pret total: "+to_string(cartCost) +". Suma achitata: " +
               to_string(this->cartCost * 90 / 100) + "(reducere 10%).\n";
    return s;
}