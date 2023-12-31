//
// Created by rayhan on 4/14/23.
//

#include <iostream>

#include "zebraType.h"

using namespace std;

zebraType::zebraType(const string &name, const string &color, const string &stripePattern) : animalType(name, color),
                                                                                             stripe_pattern(
                                                                                                     stripePattern) {}

void zebraType::display() const {
    cout << "The name is " << getName() << ", the color is " << getColor() << " and has pattern of "
         << getStripePattern() << endl;
}

const string &zebraType::getStripePattern() const {
    return stripe_pattern;
}

zebraType::~zebraType() {

}

