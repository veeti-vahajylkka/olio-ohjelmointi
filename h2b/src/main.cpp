#include "car.h"
#include <iostream>
#include <vector>

int main() {
    // Alustetaan autojen lista
    std::vector<Car> carList;

    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.push_back(Car("BMW", "M3", 2022));
    carList.push_back(Car("Nissan", "GT-R (R35)", 2024));

    // Tulostetaan toisen auton tiedot
    carList[1].printData();
    std::cout << "----" << std::endl;

    // Tulostetaan kaikkien autojen tiedot
    for (Car& car : carList) {
        car.printData();
        std::cout << "----" << std::endl;
    }

    return 0;
}