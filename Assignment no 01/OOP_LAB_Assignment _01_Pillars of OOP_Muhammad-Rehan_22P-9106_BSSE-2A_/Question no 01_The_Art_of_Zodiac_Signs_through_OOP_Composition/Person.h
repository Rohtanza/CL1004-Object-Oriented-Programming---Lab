//
// Created by _rayhan on 4/26/23.
//

#ifndef TASK_NO_1_PERSON_H
#define TASK_NO_1_PERSON_H


#include <string>
#include "DateOfBirth.h"

class Person {

    //Making the name as const as it should be.

    const std::string personName;

    //Object of DateOfBirth Class.

    DateOfBirth person_DateOfBirth;

public:

    // Using an explicit constructor to prevent any unwanted implicit type conversions/
    explicit Person(std::string = "Empty", int = 0, int = 0, int = 0);

    ~Person();

    void displayInfo();

};


#endif //TASK_NO_1_PERSON_H
