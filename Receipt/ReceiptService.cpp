#include "ReceiptService.h"
#include <iostream>

using namespace std;

ReceiptService::ReceiptService() {
}

void ReceiptService::createReceipt(vector<Product> products, string details) {
    Receipt::setCounter(Receipt::getCounter() + 1);
    Receipt receipt(Receipt::getCounter(), products, details);
    receipts.push_back(receipt);
}

void ReceiptService::viewReceipts() {
    for (const auto &receipt: receipts)
        cout << receipt;
}

void ReceiptService::showLastReceipt() {
    cout << receipts[receipts.size() - 1];
}

