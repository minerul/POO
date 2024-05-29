#include <memory>
#include "ProductService.h"
#include "../../Utils/consts.h"

ProductService::ProductService() {
    utils = Utils();
    items = loadInitialProducts();
}

ProductService::ProductService(const ProductService &other) {
    items = other.getItems();
}

vector<Product> ProductService::loadInitialProducts() {
    vector<string> text = utils.readFile(FILE_NAME);
    vector<Product> produseInitiale;
    for (auto &linie: text) {
        int pozitie = linie.find(" ");
        string numeProdus = linie.substr(0, pozitie);
        string pret = linie.substr(pozitie + 1, linie.size() - 1);
        int pretProdus = stoi(pret);
        Product produs(numeProdus, pretProdus);
        produseInitiale.push_back(produs);
    }
    return produseInitiale;
}

void ProductService::showInitialProducts() {
    vector<string> text = utils.readFile(FILE_NAME);
    cout << "Magazinul a inceput cu produsele:\n";
    utils.show(text);
}


Product ProductService::readProduct() {
    Product product;
    cin >> product;
    if (!checkDuplicates(product)) {
        return product;
    } else {
        cout << "Exista deja un produs cu acest name(" << product.getName() << ").\n";
    }
}

//void ProductService::addItem(Product product) { // polimorfism
//    items.push_back(product);
//}

bool ProductService::checkDuplicates(Product product) {
    for (const auto &i: items) {
        if (product == i)
            return true;
    }
    return false;
}

//vector<Product> ProductService::showProducts(vector<Product> productList) {
//    for (int i = 0; i < productList.size(); i++) {
//        cout << i + 1 << ". " << productList[i];
//    }
//    return productList;
//}



void ProductService::changePrice() {
    viewItems();
    cout << "Alege un element din lista utilizand tasta corespunzatoare.\n";
    int option = Utils::readOption();
    if (option != -1 && Utils::isNumberInInterval(option, 1, items.size())) {
        cout << "Tasteaza pretul pe care-l doresti:\n";
        int newPrice;
        cin >> newPrice;

        items[option - 1].setPrice(newPrice);

        cout << "Pretul a fost modificat. Lista produselor a devenit:\n";
        viewItems();
    }
}

void ProductService::removeProduct() {
    viewItems();
    cout << "Alege un element din lista utilizand tasta corespunzatoare.\n";
    int option = Utils::readOption();
    if (option != -1 && Utils::isNumberInInterval(option, 1, items.size())) {
        items.erase(items.begin() + option - 1);
        cout << "Produsul a fost sters. Lista produselor a devenit:\n";
        viewItems();
    }
}

ProductService::~ProductService() {

}





