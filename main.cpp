#include "Store/Store.h"
#include "Meniu/MainMenu.h"

using namespace std;

int main() {
    ProductService productService;
    CartService cartService;
    RegisterService registerService(&cartService);
    Store store(productService, &cartService, registerService);
    MainMenu menu(store);
    menu.start();
    return 0;
}
//--minim o baza de clasa 3 si 3 clase derivate -> menu si payment
//--o functie virtuala specifica temei -> menu, paymentMethodurile
//--polimorfism -> utils, productService::addpProduct
//--apelarea constructorului clasei de baza din constructori ai clasei derivate-> menu, cash, card
//--smart pointers
//--conversii de tipuri pentru pointeri catre clase->PaymentService::processPayment, caut conversii
//--suprascris metode cred? si static-> static in utils, metodele <<, atribute static am id in receipt

// de la cash la payment trebuie pointer payment, dar shared ptr e smart. verific dif shared/unique