//
// Created by _rayhan on 4/27/23.
//

#include <iostream>
#include "UAV.h"

#define tab "\t"

// Definition of our common-base class methods.

void UAV::takeOff() {

    std::cout << tab << "Drone taking OFF." << std::endl;

}

void UAV::land() {

    std::cout << tab << "Drone Landing." << std::endl;

}
