//
// Created by _rayhan on 4/27/23.
//

#include <iostream>
#include "Warriors.h"

void Warriors::attack() {

    //Display Method
    std::cout << name << " attacks with " << EnumCheck() << " using the strength of " << quality << " ." << std::endl;

}

Warriors::Warriors(const std::string &name, const std::string &quality, WeaponType attackWeapon) : Character(name,
                                                                                                             quality,
                                                                                                             attackWeapon) {}





