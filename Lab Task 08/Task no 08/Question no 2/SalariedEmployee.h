//
// Created by rayhan on 24/03/2023.
//

#ifndef OOP_LAB_TASK_08_SALARIEDEMPLOYEE_H
#define OOP_LAB_TASK_08_SALARIEDEMPLOYEE_H

#include "Employee.h"
#include <string>

using namespace std;

class SalariedEmployee : public Employee {
private:
    double annual_salary;
public:
    SalariedEmployee(string name = "Empty", double annual_salary = 0);

    void set_annual_salary(double annual_salary);

    double get_annual_salary();

    void calcSalary();

};

#endif //OOP_LAB_TASK_08_SALARIEDEMPLOYEE_H
