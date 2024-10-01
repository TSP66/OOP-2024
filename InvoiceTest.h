// InvoiceTest.h

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testConstruction();
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        // Add more test cases here
    }

    void testConstruction() {
        Invoice invoice("ABCD");
        if (invoice.getDollarsOwed() != 0 || invoice.getInvoiceId() != std::string("ABCD")){
            std::cout << "Test 3 failed!";
        }
    }
    // Add other test functions here
};
