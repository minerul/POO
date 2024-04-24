#include "ReceiptService.h"
#include <iostream>
using namespace std;
ReceiptService::ReceiptService() {
}

void ReceiptService::createReceipt(vector <Product> products, string details) {
    int id=1;
    if(!receipts.empty())
        id=receipts.size()+1;
    Receipt receipt(id,products,details);
    receipts.push_back(receipt);
}
void ReceiptService::viewReceipts(){
//    if(receipts.empty())
//        cout<<"Nu exista bonuri momentan!\n";
    for(const auto & receipt : receipts)
        cout<<receipt;
}
void ReceiptService::showLastReceipt(){
    cout<<receipts[receipts.size()-1];
}

