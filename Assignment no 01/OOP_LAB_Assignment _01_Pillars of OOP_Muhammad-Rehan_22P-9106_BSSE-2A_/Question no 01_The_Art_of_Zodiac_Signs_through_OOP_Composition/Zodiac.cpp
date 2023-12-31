//
// Created by _rayhan on 4/26/23.
//

/*
 * 🙏 My apologies for not showing the description for personality as it is against my religious obligations.
 * */



#include <iostream>


#include "Zodiac.h"


// This library contain all the string array containing the text data.

#include "ZodiacSigns&Discriptions.h"

#define hadith "\n\nSorry No Personality Description But read this instead\n\nNarrated by Abu Dawud:\n\t\t\tWhoever seeks knowledge from the stars is seeking one of the branches of witchcraft.\n\t\t\tThe more one increases in seeking such knowledge, the more one increases in losing his share in Islam.\n\t\t\t(Sunan Abu Dawud, Book 36, Hadith 4232)"

// Constructor will call this function to assign the values to the class memebers.

Zodiac::Zodiac(int birthDay, int birthMonth) {

    generateZodiacData(birthDay, birthMonth);

}

/* This method will run a long decision statements to assign the sign and description according to the
 * date of the birth
 * */


void Zodiac::generateZodiacData(int birthDay, int birthMonth) {

    if ((birthMonth == 3 && (birthDay >= 21 && birthDay <= 31)) ||
        (birthMonth == 4 && (birthDay >= 1 && birthDay <= 19))) {
        signName = zodiacSigns::signs[0], signDescription = zodiacDescriptions::discriptions[0] + hadith;
    } else if ((birthMonth == 4 && (birthDay >= 20 && birthDay <= 30)) ||
               (birthMonth == 5 && (birthDay >= 1 && birthDay <= 20))) {
        signName = zodiacSigns::signs[1], signDescription = zodiacDescriptions::discriptions[1] + hadith;
    } else if ((birthMonth == 5 && (birthDay >= 21 && birthDay <= 31)) ||
               (birthMonth == 6 && (birthDay >= 1 && birthDay <= 20))) {
        signName = zodiacSigns::signs[2], signDescription = zodiacDescriptions::discriptions[2] + hadith;
    } else if ((birthMonth == 6 && (birthDay >= 21 && birthDay <= 30)) ||
               (birthMonth == 7 && (birthDay >= 1 && birthDay <= 22))) {
        signName = zodiacSigns::signs[3], signDescription = zodiacDescriptions::discriptions[3] + hadith;
    } else if ((birthMonth == 7 && (birthDay >= 23 && birthDay <= 31)) ||
               (birthMonth == 8 && (birthDay >= 1 && birthDay <= 22))) {
        signName = zodiacSigns::signs[4], signDescription = zodiacDescriptions::discriptions[4] + hadith;
    } else if ((birthMonth == 8 && (birthDay >= 23 && birthDay <= 31)) ||
               (birthMonth == 9 && (birthDay >= 1 && birthDay <= 22))) {
        signName = zodiacSigns::signs[5], signDescription = zodiacDescriptions::discriptions[5] + hadith;
    } else if ((birthMonth == 9 && (birthDay >= 23 && birthDay <= 30)) ||
               (birthMonth == 10 && (birthDay >= 1 && birthDay <= 22))) {
        signName = zodiacSigns::signs[6], signDescription = zodiacDescriptions::discriptions[6] + hadith;
    } else if ((birthMonth == 10 && (birthDay >= 23 && birthDay <= 31)) ||
               (birthMonth == 11 && (birthDay >= 1 && birthDay <= 21))) {
        signName = zodiacSigns::signs[7], signDescription = zodiacDescriptions::discriptions[7] + hadith;
    } else if ((birthMonth == 11 && (birthDay >= 22 && birthDay <= 30)) ||
               (birthMonth == 12 && (birthDay >= 1 && birthDay <= 21))) {
        signName = zodiacSigns::signs[8], signDescription = zodiacDescriptions::discriptions[8] + hadith;
    } else if ((birthMonth == 12 && (birthDay >= 22 && birthDay <= 31)) ||
               (birthMonth == 1 && (birthDay >= 1 && birthDay <= 19))) {
        signName = zodiacSigns::signs[9], signDescription = zodiacDescriptions::discriptions[9] + hadith;
    } else if ((birthMonth == 1 && (birthDay >= 20 && birthDay <= 31)) ||
               (birthMonth == 2 && (birthDay >= 1 && birthDay <= 18))) {
        signName = zodiacSigns::signs[10], signDescription = zodiacDescriptions::discriptions[10] + hadith;
    } else if ((birthMonth == 2 && (birthDay >= 19 && birthDay <= 29)) ||
               (birthMonth == 3 && (birthDay >= 1 && birthDay <= 20))) {
        signName = zodiacSigns::signs[11], signDescription = zodiacDescriptions::discriptions[11] + hadith;

    }


}

// This method will be used to display the sign and description.
void Zodiac::displayZodiacInfo() {


    std::cout << std::endl << "Your Zodiac Sign is : " << signName << std::endl;
    std::cout << std::endl << signDescription << std::endl;


}
