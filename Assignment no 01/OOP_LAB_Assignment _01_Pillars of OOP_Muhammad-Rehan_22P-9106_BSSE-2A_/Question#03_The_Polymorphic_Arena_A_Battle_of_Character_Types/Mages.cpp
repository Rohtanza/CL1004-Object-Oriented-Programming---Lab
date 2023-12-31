//
// Created by _rayhan on 4/27/23.
//

#include <iostream>
#include "Mages.h"

void Mages::attack() {

    //Display Method
    std::cout << name << " attacks with " << EnumCheck() << " using the intelligence of " << quality << "." << std::endl;

}

Mages::Mages(const std::string &name, const std::string &quality, WeaponType attackWeapon) : Character(name, quality,
                                                                                                       attackWeapon) {}

