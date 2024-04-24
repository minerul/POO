
#ifndef POO_CARD_H
#define POO_CARD_H
#include <string>
#include "Payment.h"

using namespace std;

class Card : public Payment{
    int cardNumber;
public:
    Card();
    //Card(int totalMoney);

    void read();

    int getChange();
};


#endif //POO_CARD_H
