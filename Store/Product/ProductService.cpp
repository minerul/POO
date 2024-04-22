//
// Created by Samer El Abassi on 20.04.2024.
//
#include <memory>
#include "ProductService.h"
#include "../../Utils/consts.h"

ProductService::ProductService() {
    utils = Utils();
    products = loadInitialProducts();
}
ProductService::ProductService(const ProductService& other) {
    products = other.getProducts();
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


void ProductService::addProduct() {
    Product product;
    cin >> product;
    if (!checkDuplicates(product)) {
        addProduct(product);
    } else {
        cout << "Exista deja un produs cu acest name(" << product.getName() << ").\n";
    }
}

void ProductService::addProduct(Product product) {
    products.push_back(product);
}

bool ProductService::checkDuplicates(Product product) {
    for (const auto &i: products) {
        if (product == i)
            return true;
    }
    return false;
}
vector <Product> ProductService::showProducts() {
    for (int i = 0; i < products.size(); i++) {
        cout << i + 1 << ". " << products[i];
    }
    return products;
}
void ProductService::changePrice() {
    showProducts();
    cout << "Alege un element din lista utilizand tasta corespunzatoare.\n";
    int option = utils.readOption();
    if (option != -1 && utils.isNumberInInterval(option, 1, products.size())) {
        cout << "Tasteaza pretul pe care-l doresti:\n";
        int newPrice;
        cin >> newPrice;

        products[option - 1].setPrice(newPrice);

        cout << "Pretul a fost modificat. Lista produselor a devenit:\n";
        showProducts();
    }
}
void ProductService::removeProduct() {
    showProducts();
    cout << "Alege un element din lista utilizand tasta corespunzatoare.\n";
    int option = utils.readOption();
    if (option != -1 && utils.isNumberInInterval(option, 1, products.size())) {
        products.erase(products.begin() + option - 1);
        cout << "Produsul a fost sters. Lista produselor a devenit:\n";
        showProducts();
    }
}

ProductService::~ProductService() {

}

const vector<Product> &ProductService::getProducts() const {
    return products;
}



