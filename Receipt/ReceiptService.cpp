#include "ReceiptService.h"
#include <iostream>

using namespace std;

ReceiptService::ReceiptService() {
}

void ReceiptService::createReceipt(vector<Product> products, shared_ptr<Payment> payment) {
    int id = 1;
    if (!receipts.empty())
        id = receipts.size() + 1;
    Receipt receipt(id, products, payment);
    receipts.push_back(receipt);
}


void ReceiptService::viewReceipts() {
    for (const auto &receipt: receipts)
        cout << receipt;
}

void ReceiptService::showLastReceipt() {
    cout << receipts[receipts.size() - 1];
}

