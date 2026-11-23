#include "Car.h"
#include <iostream>

Car::Car() {}

Car::Car(std::string b, std::string m) {
    brand = b;
    model = m;
}

void Car::setEngine() {
    objEngine = Engine(150, 2.0);
}

void Car::setWheels() {
    objWheel1 = Wheel(17, "kesärengas");
    objWheel2 = Wheel(17, "kesärengas");
    objWheel3 = Wheel(17, "kesärengas");
    objWheel4 = Wheel(17, "kesärengas");
}

std::string Car::getModel() {
    return model;
}

void Car::setModel(std::string m) {
    model = m;
}

std::string Car::getBrand() {
    return brand;
}

void Car::setBrand(std::string b) {
    brand = b;
}

void Car::printDetails() {
    std::cout << "Auto: " << brand << model << std::endl;

    std::cout << "Moottori: "
        << objEngine.getHorsepower() << " hp, "
        << objEngine.getDisplacement() << " L"
        << std::endl;

    std::cout << "Rengas1: "
        << objWheel1.getSize() << " tuumaa, "
        << objWheel1.getType()
        << std::endl;

    std::cout << "Rengas2: "
        << objWheel2.getSize() << " tuumaa, "
        << objWheel2.getType()
        << std::endl;

    std::cout << "Rengas3: "
        << objWheel3.getSize() << " tuumaa, "
        << objWheel3.getType()
        << std::endl;

    std::cout << "Rengas4: "
        << objWheel4.getSize() << " tuumaa, "
        << objWheel4.getType()
        << std::endl;
}