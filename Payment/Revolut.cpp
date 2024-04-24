//
// Created by alext on 4/23/2024.
//

#include "Revolut.h"
void Revolut::read(){
    cout<<"Introdu contul de pe Revolut:\n";
    cin>>account;
}
Revolut::Revolut() {

}
int Revolut::getChange(){
    cout<<"Intrucat este reducere pe revolut, ai primit inapoi: "<<this->cartCost*10/100<<" lei!\n";
    return this->cartCost*10/100;
}