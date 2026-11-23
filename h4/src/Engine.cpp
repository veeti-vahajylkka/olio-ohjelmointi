#include "Engine.h"

Engine::Engine() { }

Engine::Engine(int hp, double disp) {
    horsepower = hp;
    displacement = disp;
}

int Engine::getHorsepower() {
    return horsepower;
}

void Engine::setHorsepower(int hp) {
    horsepower = hp;
}

double Engine::getDisplacement() {
    return displacement;
}

void Engine::setDisplacement(double disp) {
    displacement = disp;
}