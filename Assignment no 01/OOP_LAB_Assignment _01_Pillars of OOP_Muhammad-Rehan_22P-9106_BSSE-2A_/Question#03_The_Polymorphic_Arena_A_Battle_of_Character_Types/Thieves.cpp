//
// Created by _rayhan on 4/27/23.
//

#include <iostream>
#include "Thieves.h"

void Thieves::attack() {

    //Display Method
    std::cout << name << " attacks with " << EnumCheck() << " using the allegiance of " << quality << " ." << std::endl;


}

Thieves::Thieves(const std::string &name, const std::string &quality, WeaponType attackWeapon) : Character(name,
                                                                                                           quality,
                                                                                                           attackWeapon) {}
