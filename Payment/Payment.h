//
// Created by alext on 4/23/2024.
//

#ifndef POO_PAYMENT_H
#define POO_PAYMENT_H


class Payment {
protected:
    int totalMoney; // cat platesti
    int cartCost;
    //Card card;
    //Cash cash;
    //Revolut revolut;
public:
    //Payment(int totalMoney, int cartCost);
    int getCartCost() const;

    void setTotalMoney(int totalMoney);

    void setCartCost(int cartCost);

    virtual void processPayment();
    virtual void read();

    //virtual int getChange(); // card o sa fie 0, cash total-card, cec
    // la card cer IBAN, field nou, cec cer nume

    virtual int getChange();
};


#endif //POO_PAYMENT_H
