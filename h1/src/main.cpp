#include <iostream>
#include <iomanip>
#include "math.h"

int main() {
    int a,b;

    std::cout << "Anna luku a: ";
    std::cin >> a;

    std::cout << "Anna luku b: ";
    std::cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    std::cout << a << " + " << b << " = " << retSum(a, b) << std::endl;
    
    try {
        std::cout << std::fixed << std::setprecision(2)
            << a << " / " << b << " = " << retDiv(a,b) << std::endl;
    } catch (std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}