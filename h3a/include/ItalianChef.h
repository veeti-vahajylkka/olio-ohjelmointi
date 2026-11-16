#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H

#include "Chef.h"

struct ItalianChef : Chef {
public:
    ItalianChef(std::string);
    std::string getName();
    void makePasta();
};

#endif