// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testPositiveNegative();
        testNegativePositive();
        testZeros();
        testBig();
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testPositiveNegative() {
        Addition addition;
        if (addition.add(4, -5) != -1) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testNegativePositive() {
        Addition addition;
        if (addition.add(5, -4) != 1) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }
    void testZeros() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testBig() {
        Addition addition;
        if (addition.add(100000, 100000) != 200000) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testBigNegative() {
        Addition addition;
        if (addition.add(-100000, -100000) != -200000) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    // Add other test functions here
};
