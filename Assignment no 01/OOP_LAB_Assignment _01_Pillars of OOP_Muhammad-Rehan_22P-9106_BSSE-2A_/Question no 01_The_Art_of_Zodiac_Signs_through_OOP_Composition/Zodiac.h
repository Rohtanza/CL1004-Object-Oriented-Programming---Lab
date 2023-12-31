//
// Created by _rayhan on 4/26/23.
//

#ifndef TASK_NO_1_ZODIAC_H
#define TASK_NO_1_ZODIAC_H


#include <string>

class Zodiac {


    std::string signName;
    std::string signDescription;

public:

    Zodiac(int birthDay, int birthMonth);


    // This method will assign values to the sing name and description by checking the date of birth.
    void generateZodiacData(int birthDay, int birthMonth);

    // This methode will display the sign and the description.

    void displayZodiacInfo();


};


#endif //TASK_NO_1_ZODIAC_H
