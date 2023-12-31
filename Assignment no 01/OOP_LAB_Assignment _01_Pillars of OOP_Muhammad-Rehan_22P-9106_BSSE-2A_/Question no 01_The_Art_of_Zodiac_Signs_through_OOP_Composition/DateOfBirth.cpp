//
// Created by _rayhan on 4/26/23.
//

//This library is included to use the "throw" keyword.
#include <stdexcept>

#include "DateOfBirth.h"

// This following constructor check the date for any type of error.

// First the block of code will execute then it will pass the assigned values to the second constructor.

DateOfBirth::DateOfBirth(int birthDay, int birthMonth, int birthYear) : DateOfBirth(birthDay, birthMonth) {

    //Checking the month range.

    if (birthMonth > 13 || birthMonth < 0)
        throw std::invalid_argument("Enter a valid month within the range of one and twelve.");

    // Checking if the year input is valid.

    if (birthYear < 0)
        throw std::invalid_argument("Enter a valid year , greater then zero.");

    // Now Checking the Day Range.

    // First Initialing a variable for the purpose the checking the day.
    int daysInMonth = 31;

    // Changing its value according to the month input

    // For the months having days 30.
    if (birthMonth == 4 || birthMonth == 6 || birthMonth == 9 || birthMonth == 11)
        daysInMonth = 30;

    // For the month of February.
    if (birthMonth == 2) {

        //If it's a leap year then 29.
        if (birthYear % 4 == 0 && birthYear % 100 != 0 || birthYear % 400 == 0)
            daysInMonth = 29;

            // Else its 28.
        else
            daysInMonth = 28;
    }

    // Now according to the month range checking if the day is within the range of the month day count.

    if (birthDay > daysInMonth || birthDay < 1)
        throw std::invalid_argument("Enter a day within range of month day ");

    // Assigning the values because the date of birth is error proof,
    this->birthDay = birthDay;
    this->birthMonth = birthMonth;
    this->birthYear = birthYear;

}

/* Now after the date has been checked, the 2nd constructor
   will send the day and month to the object of Zodiac class */


DateOfBirth::DateOfBirth(int birthDay, int birthMonth) : personZodiac_Sign(birthDay, birthMonth) {}

void DateOfBirth::displayInfo() {
    personZodiac_Sign.displayZodiacInfo();
}

