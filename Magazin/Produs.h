#ifndef POO_PRODUS_H
#define POO_PRODUS_H
using namespace std;
#include <string>
#include <ostream>


class Produs {
    string nume;
    int pret;
public:
    Produs();
    Produs(string name, int price);

    bool operator==(const Produs &rhs) const;
    bool operator!=(const Produs &rhs) const;

    friend istream &operator>>(istream &os, Produs &produs);
    friend ostream &operator<<(ostream &os, const Produs &produs);

    const string &getNume() const;

    void setNume(const string &nume);

    int getPret() const;

    void setPret(int pret);

    virtual ~Produs();
};


#endif
