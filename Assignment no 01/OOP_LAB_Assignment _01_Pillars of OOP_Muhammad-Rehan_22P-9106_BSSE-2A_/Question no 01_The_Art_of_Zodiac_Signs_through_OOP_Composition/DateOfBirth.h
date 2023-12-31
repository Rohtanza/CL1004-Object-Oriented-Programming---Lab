//
// Created by _rayhan on 4/26/23.
//

#ifndef TASK_NO_1_DATEOFBIRTH_H
#define TASK_NO_1_DATEOFBIRTH_H


#include "Zodiac.h"

class DateOfBirth {


private:
    int birthDay;
    int birthMonth;
    int birthYear;

    // Object of class "Zodiac".
    Zodiac personZodiac_Sign;

public:

    // This class has two constructors (Explanation is given in DateOfBirth.cpp file).


    //Constructor# 01
    DateOfBirth(int birthDay, int birthMonth, int birthYear);

    //Constructor# 02
    DateOfBirth(int birthDay, int birthMonth);

    void displayInfo();

};


#endif //TASK_NO_1_DATEOFBIRTH_H
