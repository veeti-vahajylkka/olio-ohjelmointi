#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>
#include <iostream>

int main() {
    // ==== Auto ====
    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);
    
    car.printData();

    std::cout << "-----" << std::endl;

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

    std::cout << "-----" << std::endl;

    // ==== Opiskelija ====
    std::unique_ptr<Student> student = std::make_unique<Student>();

    student->setName("Erkki Esimerkki");
    student->setStudentNumber(12345);
    student->setAverage(4.6);

    std::cout << "Opiskelijan nimi: "
        << student->getName()
        << std::endl;

    std::cout << "Opiskelijanumero: "
        << student->getStudentNumber()
        << std::endl;

    std::cout << "Keskiarvo: "
        << student->getAverage()
        << std::endl;

    return 0;
}