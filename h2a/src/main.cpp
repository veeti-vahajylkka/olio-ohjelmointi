#include "car.h"
#include "rectangle.h"
#include <iostream>

int main() {
    // ==== Auto ====
    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);
    
    car.printData();

    // ==== Suorakulmio ====
    Rectangle* rectangle = new Rectangle();

    rectangle->setHeight(100);
    rectangle->setWidth(200);

    std::cout << "Suorakulmion pinta-ala: "
        << rectangle->getArea()
        << std::endl;
        
    std::cout << "Suorakulmion piiri: "
        << rectangle->getCircum()
        << std::endl;

    delete rectangle;

    return 0;
}