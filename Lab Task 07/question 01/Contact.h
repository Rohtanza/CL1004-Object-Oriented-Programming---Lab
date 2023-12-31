//
// Created by rayhan on 3/17/23.
//

#ifndef TASK_01_CONTACT_H
#define TASK_01_CONTACT_H

#include <string>
#include "DateOfBirth.h"

using namespace std;

class Contact {
private:
    int ContactCount;
    Contact *List;
    string name;
    string phoneNumber;
    string email;
    DateOfBirth birthday;
public:

    Contact(int ContactCount = 0);

    ~Contact();

    void CrowdList();

    void Menu();

    void printList();

    void ContactBook();

    string getName(void) const;


    string getphoneNumber(void) const;

    string getEmail(void) const;

    string getbirthDay(void) const;

//    void ContactBook();


};

int size(void);

#endif //TASK_01_CONTACT_H
