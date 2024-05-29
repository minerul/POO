#include "ReceiptService.h"
#include <iostream>

using namespace std;

ReceiptService::ReceiptService() {
}


const unsigned long long int ReceiptService::getReceiptsSize() const {
    return items.size();
}


void ReceiptService::showLastReceipt() {
    cout << items[items.size() - 1];
}


