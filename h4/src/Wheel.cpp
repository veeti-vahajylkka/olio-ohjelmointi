#include "Wheel.h"

Wheel::Wheel() {

}

Wheel::Wheel(int s, std::string t) {
    size = s;
    type = t;
}

void Wheel::setSize(int s) {
    size = s;
}

int Wheel::getSize() {
    return size;
}

std::string Wheel::getType() {
    return type;
}

void Wheel::setType(std::string t) {
    type = t;
}