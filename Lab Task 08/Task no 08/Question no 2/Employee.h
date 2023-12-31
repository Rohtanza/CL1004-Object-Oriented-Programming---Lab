//
// Created by rayhan on 24/03/2023.
//

#ifndef OOP_LAB_TASK_08_EMPLOYEE_H
#define OOP_LAB_TASK_08_EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
private:
    string name;
public:
    Employee(string name = "Empty");

    string getname() const;

    void setname(string);

    void calcSalary();


};

void Operations();


#endif //OOP_LAB_TASK_08_EMPLOYEE_H
