//
// Created by rayhan on 4/14/23.
//

#include "deerType.h"
#include <iostream>
using namespace std;
deerType::deerType(const string &name, const string &color, bool hasAntlers) : animalType(name, color), hasAntlers(hasAntlers) {}

void deerType::display() const {

    cout << "The name of the deer is  " << getName() << ", and the color is " << getColor();
    isHasAntlers() ? cout << " and has antlers" << endl : cout << "and don't has antlers" << endl;
}

bool deerType::isHasAntlers() const {
    return hasAntlers;
}

deerType::~deerType() {

}
