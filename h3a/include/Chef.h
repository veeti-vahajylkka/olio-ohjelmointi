#ifndef CHEF_H
#define CHEF_H

#include <string>

struct Chef {
protected:
    std::string name;

public:
    Chef(std::string);
    ~Chef();
    void makeSalad();
    void makeSoup();
};

#endif