//Invoice.h
#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <string.h>

class Invoice{
    private:
    std::string invoiceId;
    int dollarsOwed;
    public:
    Invoice(std::string invoiceId);
    void addServiceCost(int costDollars);
    int getDollarsOwed(void);
    std::string getInvoiceId();
};

#endif