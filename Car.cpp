//
// Created by LENOVO on 2/13/2023.
//

#include "Car.h"

string Car::getCarName() {
    return this->name;
}

Car::Car(string name) {
    this->name = name;
}
