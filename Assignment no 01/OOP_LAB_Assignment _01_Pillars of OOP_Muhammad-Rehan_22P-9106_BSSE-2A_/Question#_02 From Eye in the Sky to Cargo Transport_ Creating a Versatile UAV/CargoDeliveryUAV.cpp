//
// Created by _rayhan on 4/27/23.
//

#include <iostream>
#include <utility>
#include "CargoDeliveryUAV.h"

#define tab "\t"


// Displaying Information.

void CargoDeliveryUAV::display() {


    std::cout << tab << "I am a Cargo Delivery UAV Drone." << std::endl << std::endl;
    std::cout << tab << "My name is " << Name << std::endl;
    std::cout << tab << "My weight is " << weight << " kg " << std::endl;
    std::cout << tab << "My altitude is " << maxAlitude << " ft " << std::endl;
    std::cout << tab << "My cargo area is " << cargoArea << " sqft " << std::endl;
    deliverCargo();
    std::cout << std::endl;

}

void CargoDeliveryUAV::deliverCargo() {

    std::cout << tab << "Cargo Drone doing delivery." << std::endl;


}

CargoDeliveryUAV::CargoDeliveryUAV(std::string name, double weight, double maxAlitude, double cargoArea) : Name(
        std::move(
                name)), weight(weight), maxAlitude(maxAlitude), cargoArea(cargoArea) {}
