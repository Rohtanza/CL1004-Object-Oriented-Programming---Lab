//
// Created by rayhan on 2/26/23.
//

#ifndef TASK_02_EMPLOYEE_H
#define TASK_02_EMPLOYEE_H

#include <string>

using namespace std;
// Class Definition
class Employee {
    string ID;
    string name;
    string job;
    string title;
    string HoursPerWeek;
public:
    // Default Constructor Declaration
    Employee();

    // Destructor Declaration
    ~Employee();

    // Parameterized Constructor Declaration
    Employee(string ID, string name, string job, string title, string HoursPerWeek);

    // GetterMethods Declaration
    string getID() const;

    string getName() const;

    string getJob() const;

    string getTitle() const;

    string getHoursPerWeek() const;


    //Setter Methods Declaration
    void setID(string ID);

    void setName(string name);

    void setJob(string price);

    void setTitle(string Quantity);

    void setHourPerWeek(string Quantity);

    //Salary Calculate Function
    void cacl_Salary(Employee EmployeeList[], int pay, int count, int Salary[]);

};

// Other Functions Declaration
int Count();

int Pay();

void RandDataEntry(Employee EmployeeList[], int count);

void Display(Employee EmployeeList[], int count, int Salary[]);

#endif //TASK_02_EMPLOYEE_H
