#include "ItalianChef.h"
#include <iostream>

int main() {
    Chef chef("Gordon Ramsay");
    ItalianChef italianChef("Anthony Bourdain");

    chef.makeSalad();
    chef.makeSoup();

    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    std::cout << "name of the Italian Chef is "
        << italianChef.getName()
        << std::endl;

    return 0;
}