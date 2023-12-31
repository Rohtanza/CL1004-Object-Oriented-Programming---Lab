/*
 * Muhammad Rehan | 22P-9106 | BSSE-2A
 * OOP Assignment# 01 | Task# 01
 * This Program asks a user for name and date of birth
 * This program check the date of birth for errors, like:
 *      -> Year must be not less than zero.
 *      -> Month must be within range of One and twelve.
 *      -> Day must be within range of the given month, like:
 *        $$ if the month is january than the Day must be in range of 1 and 31.
 *        $$ if a year enter date as 29th of february then it'll check either the year if leap or not.
 *        $$ it check the date as respect of range of every month.
 *      -> This program then shows the symbol of the sign as a good user experience.
 *      -> This program uses the show principles of coding, so it contain as fewer functions, variables, methods
 *         as possible.
 *      -> This program doesn't use "using namespace std" as it's a bad C++ practice.
 * */




#include <iostream>
#include "Person.h"

//Defining constant which i'll use in the main.

#define tab "\t"
#define welcome "Welcome to the Zodiac Sign Personality program!\n              _ _            \n" "             | (_)           \n" " _______   __| |_  __ _  ___ \n" "|_  / _ \\ / _` | |/ _` |/ __|\n" " / / (_) | (_| | | (_| | (__ \n" "/___\\___/ \\__,_|_|\\__,_|\\___|\n"


int main() {

    // Taking user's information.

    std::cout << welcome << std::endl;
    std::string name = "Empty";
    int day, month, year;

    //Initialing these as Zero.

    day = month = year = 0;
    std::cout << tab << "Please enter your name:", getline(std::cin, name);
    std::cout << tab << "Please enter your date of birth: ", std::cin >> day;
    std::cout << tab << "Please enter your month of birth: ", std::cin >> month;
    std::cout << tab << "Please enter your month of year: ", std::cin >> year;

    //Creating Person class Object.

    //It is initialized with parameters .
    Person person_ZodiacSign(name, day, month, year);

    //Displaying the Sign and Description.

    person_ZodiacSign.displayInfo();

    return 0;
}
