#include "ItalianChef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string _name) : Chef(_name) {
    std::cout << "ItalianChef "
        << _name
        << " konstruktori"
        << std::endl;

    name = _name;
}

void ItalianChef::makePasta() {
    std::cout << "Italian chef "
        << name
        << " makes pasta"
        << std::endl;
}

std::string ItalianChef::getName() {
    return name;
}