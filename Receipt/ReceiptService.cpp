#include "ReceiptService.h"
#include <iostream>

using namespace std;

ReceiptService::ReceiptService() {
}


const unsigned long long int ReceiptService::getReceiptsSize() const {
    return receipts.size();
}

void ReceiptService::viewReceipts() {
    for (const auto &receipt: receipts)
        cout << receipt;
}

void ReceiptService::showLastReceipt() {
    cout << receipts[receipts.size() - 1];
}

void ReceiptService::addReceipt(Receipt receipt) {
    receipts.push_back(receipt);
}

