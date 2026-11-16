#include "Chef.h"
#include <iostream>

Chef::Chef(std::string _name) {
    std::cout << "Chef "
        << _name
        << " konstruktori"
        << std::endl;

    name = _name;
}

void Chef::makeSalad() {
    std::cout << "Chef "
        << name
        << " makes salad"
        << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef "
        << name
        << " makes soup"
        << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef "
        << name
        << " destruktori"
        << std::endl;
}