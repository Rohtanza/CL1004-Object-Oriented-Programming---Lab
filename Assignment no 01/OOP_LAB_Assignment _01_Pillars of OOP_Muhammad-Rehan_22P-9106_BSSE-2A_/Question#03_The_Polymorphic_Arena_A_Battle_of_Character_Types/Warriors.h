//
// Created by _rayhan on 4/27/23.
//

#ifndef QUESTION_03_THE_POLYMORPHIC_ARENA_A_BATTLE_OF_CHARACTER_TYPES_WARRIORS_H
#define QUESTION_03_THE_POLYMORPHIC_ARENA_A_BATTLE_OF_CHARACTER_TYPES_WARRIORS_H


#include "Character.h"

// this is inheriting from an abstract class.


class Warriors : public Character{

public:
    Warriors(const std::string &name, const std::string &quality, WeaponType attackWeapon);

private:
    //Over-riding our pure virtual method
    void attack() override;


};


#endif //QUESTION_03_THE_POLYMORPHIC_ARENA_A_BATTLE_OF_CHARACTER_TYPES_WARRIORS_H
