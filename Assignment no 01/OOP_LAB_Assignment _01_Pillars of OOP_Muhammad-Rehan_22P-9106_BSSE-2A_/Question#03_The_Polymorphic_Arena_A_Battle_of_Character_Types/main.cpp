#include <iostream>
#include <memory>
#include "Character.h"
#include "Warriors.h"
#include "Mages.h"
#include "Thieves.h"

/*
* Muhammad Rehan | 22P-9106 | BSSE-2A
* OOP Assignment# 01 | Task# 03
*/


//Creating a const of our count of the characters in the game.


#define characterCount 3


int main() {


    std::string Names[characterCount] = {"Warriors", "Mages", "Thieves"};
    std::string Quality[characterCount] = {"Strength","Intelligence","Agility"};

    //Instead of writing long code to take data from user, I am using loop.

    for (int i = 0; i < characterCount; ++i) {
        std::cout << "Enter the " << Names[i] << " name : ", getline(std::cin, Names[i]);
        std::cout << "Enter the " << Names[i] << "'s " <<Quality[i]<<" : ", getline(std::cin, Quality[i]);
    }

    /*
  * I am using unique pointer so, I don't have to deal with
  * memory management code, it will automatically delete the
  * dynamic pointers/memory when the object will go out of
  * the scope.
  * */

    std::unique_ptr<Character> game_Characters[] = {

            std::make_unique<Warriors>(Names[0], Quality[0], WeaponType::swords),
            std::make_unique<Mages>(Names[1], Quality[1], WeaponType::fireballs),
            std::make_unique<Thieves>(Names[2], Quality[2], WeaponType::daggers)


    };

    // Calling the methods of the every object in our range based loop.
    for (const auto& character : game_Characters) {
        character->attack();
    }



    return 0;
}
