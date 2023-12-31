//
// Created by rayhan on 4/14/23.
//
#include "animalType.h"


animalType::animalType(const string &name, const string &color) : name(name), color(color) {}

const string &animalType::getName() const {
    return name;
}

const string &animalType::getColor() const {
    return color;
}

animalType::~animalType() {

}

bool animalType::operator==(const animalType &rhs) const {
    return name == rhs.name &&
           color == rhs.color;
}

bool animalType::operator!=(const animalType &rhs) const {
    return !(rhs == *this);
}

ostream &operator<<(ostream &os, const animalType &animalType) {
    os << "name: " << animalType.name << " color: " << animalType.color;
    return os;
}
