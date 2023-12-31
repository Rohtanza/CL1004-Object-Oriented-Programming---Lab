//
// Created by _rayhan on 4/27/23.
//

#ifndef QUESTION_03_THE_POLYMORPHIC_ARENA_A_BATTLE_OF_CHARACTER_TYPES_CHARACTER_H
#define QUESTION_03_THE_POLYMORPHIC_ARENA_A_BATTLE_OF_CHARACTER_TYPES_CHARACTER_H

#include <string>
#include <utility>
#include "Enum.h"

/*
 * This class is an abstract class, as its
 * object will not be created but the object of
 * derived classes.
 * */


class Character {

public:

    // A pure virtual method to make the class abstract.
    virtual void attack() = 0;

protected:

    std::string name;

    std::string quality;

    WeaponType attackWeapon;

public:
    Character(std::string name, std::string quality, WeaponType attackWeapon) : name(std::move(name)),
                                                                                              quality(std::move(quality)),
                                                                                              attackWeapon(
                                                                                                      attackWeapon) {}
     std::string EnumCheck(){
    /*
     * I very small method I had to create
     * to display our weapon, it had to be
     * implemented as our enum are just 0, 1 and 2.
     * */
        std::string weaponName;
        switch (static_cast<int>(attackWeapon)) {
            case static_cast<int>(WeaponType::swords):
                weaponName = "swords";
                break;
            case static_cast<int>(WeaponType::fireballs):
                weaponName = "fireballs";
                break;
            case static_cast<int>(WeaponType::daggers):
                weaponName = "daggers";
                break;
            default:
                weaponName = "unknown weapon";
        }
        return weaponName;

    };

};



#endif //QUESTION_03_THE_POLYMORPHIC_ARENA_A_BATTLE_OF_CHARACTER_TYPES_CHARACTER_H
