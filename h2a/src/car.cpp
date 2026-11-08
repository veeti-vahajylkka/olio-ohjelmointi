#include "car.h"
#include <iostream>

void Car::printData() {
    std::cout << "Merkki: " << brand << std::endl;
    std::cout << "Malli: " << model << std::endl;
    std::cout << "Vuosimalli: " << yearModel << std::endl;
}

void Car::setBrand(std::string b) {
    brand = b;
}

void Car::setModel(std::string m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}