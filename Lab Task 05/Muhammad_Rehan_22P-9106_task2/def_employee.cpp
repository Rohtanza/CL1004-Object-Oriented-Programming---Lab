//
// Created by rayhan on 2/26/23.
//
#include "Employee.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

// Setting the Base Hour limit for the basic Salary.
#define BaseHours 40
#define tab "\t\t\t"

//Default Constructor Definition
Employee::Employee() {
    ID = name = job = title = HoursPerWeek = "Empty";
}

Employee::~Employee() {
    cout << "Object Destroyed\n";
}

// Parameterized Constructor Definition
Employee::Employee(string ID, string name, string job, string title, string HoursPerWeek) {
    this->ID = ID;
    this->name = name;
    this->job = job;
    this->title = title;
    this->HoursPerWeek = HoursPerWeek;
}

// GetterMethods Definition
string Employee::getID() const {
    return this->ID;
}

string Employee::getName() const {
    return this->name;
}

string Employee::getJob() const {
    return this->job;
}

string Employee::getTitle() const {
    return this->title;
}

string Employee::getHoursPerWeek() const {
    return this->HoursPerWeek;
}

//Setter Methods Definition
void Employee::setID(string ID) {
    this->ID = ID;
}

void Employee::setName(string name) {
    this->name = name;
}

void Employee::setJob(string job) {
    this->job = job;
}

void Employee::setTitle(string title) {
    this->title = title;
}

void Employee::setHourPerWeek(string HoursPerWeek) {
    this->HoursPerWeek = HoursPerWeek;
}

int Count() {
    int count;
    cout << "Enter the Count of the Employees: ", cin >> count;
    return count;
}

// Creating some Random array with Random data to Crowd the array of our objects.
void RandDataEntry(Employee EmployeeList[], int count) {
    string randomNames[] = {"ali", "faris", "rehan", "nasir", "hassan", "fariba", "maryam", "fatima", "nauman",
                            "hussain"};
    string job[] = {"Programmer", "Designer", "TeamLead", "Coder", "BackEndCoder", "FrontEndCoder"};
    string title[] = {"Noob", "Junior", "Senior", "Advance", "Legend"};
    string HoursPerWeek[] = {"40", "55", "38", "22", "66", "88", "71"};
    for (int i = 0; i < count; ++i) {
        int ID = 1 + i;
        // Using the To_string function to convert int into string to feed the setID function.
        string EmployeeID = to_string(ID);
        EmployeeList[i].setID(EmployeeID);
        string fooValue;
        fooValue = randomNames[rand() % 9];
        EmployeeList[i].setName(fooValue);
        fooValue = job[rand() % 5];
        EmployeeList[i].setJob(fooValue);
        fooValue = title[rand() % 4];
        EmployeeList[i].setTitle(fooValue);
        fooValue = HoursPerWeek[rand() % 6];
        EmployeeList[i].setHourPerWeek(fooValue);
    }
}

int Pay() {
    int pay;
    cout << "Kindly Enter the Base Pay:", cin >> pay;
    return pay;
}


void Employee::cacl_Salary(Employee EmployeeList[], int pay, int count, int Salary[]) {
    for (int i = 0; i < count; ++i) {
        int hours = stoi(EmployeeList->getHoursPerWeek());
        if (hours <= BaseHours)
            Salary[i] = hours * pay;
        else {
            int extraHours = hours - BaseHours;
            Salary[i] = extraHours * (pay * 2) + hours * pay;
        }
    }
}

void Display(Employee EmployeeList[], int count, int Salary[]) {
    cout << "\n-------------------------||DETAILS||-------------------------\n";
    for (int i = 0; i < count; ++i) {
        cout << tab << "ID:" << right << setw(20) << EmployeeList[i].getID() << endl;
        cout << tab << "Name:" << right << setw(18) << EmployeeList[i].getName() << endl;
        cout << tab << "Job:" << right << setw(19) << EmployeeList[i].getJob() << endl;
        cout << tab << "Title:" << right << setw(17) << EmployeeList[i].getTitle() << endl;
        cout << tab << "Salary:" << right << setw(16) << Salary[i] << endl;
        cout << tab << "HoursPerWeek:" << right << setw(10) << EmployeeList[i].getHoursPerWeek() << endl;
        cout<<endl;
    }
    cout << "\n---------------------------||END||---------------------------\n";
}
