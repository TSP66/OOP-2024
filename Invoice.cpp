#include "Invoice.h"

Invoice::Invoice(std::string invoiceId) : invoiceId(invoiceId), dollarsOwed(0){

}

void Invoice::addServiceCost(int costDollars){
    Invoice::dollarsOwed += costDollars;
}

int Invoice::getDollarsOwed(void){
    return Invoice::dollarsOwed;
}

std::string Invoice::getInvoiceId(void){
    return Invoice::invoiceId;
}