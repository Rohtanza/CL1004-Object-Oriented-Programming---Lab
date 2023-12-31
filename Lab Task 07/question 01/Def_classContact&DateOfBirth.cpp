//
// Created by rayhan on 3/17/23.
//
#include "Contact.h"
#include "DateOfBirth.h"
#include <iostream>
#include <limits>

using namespace std;

Contact::Contact(int Size) {
    cout << "Constructor\n";
    ContactCount = Size;
    List = new Contact[ContactCount];
}

Contact::~Contact() {
    cout << "Destructor\n";
    delete[] List;
}


void Contact::CrowdList() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < ContactCount; ++i) {
        cout << "Enter name of the Contact no " << i + 1 << " :", cin >> List[i].name;
        cout << "Enter phone number of the Contact no " << i + 1 << " :", cin >> List[i].phoneNumber;
        cout << "Enter email of the Contact no " << i + 1 << " :", cin >> List[i].email;
        cout << "Enter Birthday of Contact no " << i + 1 << " :" << endl;
        int day, month, year;
        day = month = year = 0;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\t\tEnter day:", cin >> day, List[i].birthday.setDay(day);
        cout << "\t\tEnter month:", cin >> month, List[i].birthday.setMonth(month);
        cout << "\t\tEnter year:", cin >> year, List[i].birthday.setYear(year);
        cout << endl;
    }
}

void Contact::printList() {
    for (int i = 0; i < ContactCount; ++i) {
        cout << "\nContact no " << i + 1 << ":" << endl;
        cout << "\t\tName:" << List[i].getName() << endl;
        cout << "\t\tPhone Number:" << List[i].getphoneNumber() << endl;
        cout << "\t\tEmail:" << List[i].getEmail() << endl;
        cout << "\t\tBirthday:" << List[i].getbirthDay() << endl;
        cout << endl;
    }
}

void Contact::ContactBook() {
    int check = 0;
    cout << "Enter the month to be checked: ", cin >> check;
    for (int i = 0; i < ContactCount; ++i) {
        int month = List[i].birthday.getMonth();
        if (check == month) {
            cout << "Contact no " << i + 1 << ":" << endl;
            cout << "\t\tName:" << List[i].getName() << endl;
            cout << "\t\tPhone Number:" << List[i].getphoneNumber() << endl;
            cout << "\t\tEmail:" << List[i].getEmail() << endl;
            cout << "\t\tBirthday:" << List[i].getbirthDay() << endl;
            cout << endl;
        }
    }
}

void Contact::Menu() {
    while (true) {
        int option = 0;
        cout << "Menu:\n1. For Printing the Contact List.\n2. For Checking Contact as per Month.\n3. To Exit\n=>", cin
                >> option;
        switch (option) {
            case 1:
                printList();
                break;
            case 2:
                ContactBook();
                break;
            case 3:
                exit(1);
                break;

        }
    }
}


string Contact::getName(void) const {
    return name;
}

string Contact::getphoneNumber(void) const {
    return phoneNumber;

}

string Contact::getEmail(void) const {
    return email;
}

string Contact::getbirthDay(void) const {
    return to_string(birthday.getDay()) + "/" + to_string(birthday.getMonth()) + "/" + to_string(birthday.getYear());
}

void DateOfBirth::setDay(int day) {
    this->day = day;
}

void DateOfBirth::setMonth(int month) {
    this->month = month;
}

void DateOfBirth::setYear(int year) {
    this->year = year;
}

int DateOfBirth::getDay() const {
    return day;
}

int DateOfBirth::getMonth() const {
    return month;
}

int DateOfBirth::getYear() const {
    return year;
}

int size(void) {
    int size;
    cout << "Enter the size of the array:", cin >> size;
    return size;
}