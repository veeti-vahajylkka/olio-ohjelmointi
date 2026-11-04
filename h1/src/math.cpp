#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "math.h"

void calcSum(int a, int b) {
    std::cout << a << " + " << b << " = " << a + b << std::endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        std::cout << "Virhe: jakaja ei saa olla nolla!" << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(2)
            << a << " / " << b << " = " << (float)a/b << std::endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }

    return (float)a / b;
}