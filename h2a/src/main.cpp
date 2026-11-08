#include "car.h"

int main() {
    // ==== Auto ====
    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);
    
    car.printData();

    return 0;
}