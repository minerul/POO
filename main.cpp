#include "Meniu.h"
using namespace std;

int main() {
    Utils utils;
    Magazin magazin(utils);
    Meniu meniu(magazin);
    meniu.start();
    return 0;
}
// poate fac sa poti salva magazinul, si sa alegi o salvare, sau sa stergi salvari, admin console?