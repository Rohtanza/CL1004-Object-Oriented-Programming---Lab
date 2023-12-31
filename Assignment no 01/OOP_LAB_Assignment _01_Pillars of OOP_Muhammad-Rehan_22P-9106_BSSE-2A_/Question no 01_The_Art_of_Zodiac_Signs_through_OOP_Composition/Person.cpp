//
// Created by _rayhan on 4/26/23.
//

#include "Person.h"
#include <iostream>

//Constructor Definition using the constructor delegation.
Person::Person(std::string name, int dayOfBirth, int monthOfBirth, int yearOfBirth) : personName(name),
                                                                                      person_DateOfBirth(dayOfBirth,
                                                                                                         monthOfBirth,
                                                                                                         yearOfBirth) {}
// Destructor to show that object is out of scope.

Person::~Person() {
    std::cout << "\nThank you for using the Zodiac Sign Personality program!" << std::endl;

}

void Person::displayInfo() {
    person_DateOfBirth.displayInfo();
}

