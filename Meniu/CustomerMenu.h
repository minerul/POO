#ifndef POO_CUSTOMERMENU_H
#define POO_CUSTOMERMENU_H


#include "../Store/Store.h"
#include "Menu.h"
class CustomerMenu : public Menu {
public:
    const Store &getStore() const;

private:
    const string CUSTOMER_OPTION_TEXT = "------------CLIENT------------\n"
                                        "Apasa tasta corespunzatoare actiunii pe care doresti sa o faci:\n"
                                        "1.Adauga produs in cos.\n"
                                        "2.Afiseaza cosul.\n"
                                        "3.Elimina un produs din cos\n"
                                        "4.Goleste cosul.\n"
                                        "5.Achizitioneaza cosul.\n"
                                        "0.Inapoi la meniul principal\n";
public:
    CustomerMenu(const Store& store);
    void start();

    void processOption(int optiune);
};

#endif //POO_CUSTOMERMENU_H
