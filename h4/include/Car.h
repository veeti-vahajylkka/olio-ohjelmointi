#include "Wheel.h"
#include "Engine.h"
#include <string>

struct Car {
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    std::string model;
    std::string brand;
public:
    Car();
    Car(std::string, std::string);
    void setEngine();
    void setWheels();
    std::string getModel();
    void setModel(std::string);
    std::string getBrand();
    void setBrand(std::string);
    void printDetails();
};