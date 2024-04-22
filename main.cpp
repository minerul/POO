#include "Store/Store.h"
#include "Meniu/Menu.h"

using namespace std;

int main() {
    ProductService productService;
    Store store(productService);
    Menu menu(store);
    menu.start();
    return 0;
}
// poate fac sa poti salva magazinul, si sa alegi o salvare, sau sa stergi salvari, admin console?
// cand adaug pretul unui produs inca nu merge daca bagi string