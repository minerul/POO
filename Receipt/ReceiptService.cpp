#include "ReceiptService.h"
#include <iostream>
using namespace std;
ReceiptService::ReceiptService() {
}

void ReceiptService::createReceipt(vector <Product> products) {
    int id=1;
    if(!receipts.empty())
        id=receipts.size()+1;
    Receipt receipt(id,products);
    //cout<<receipt;
    receipts.push_back(receipt);
}
