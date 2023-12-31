//
// Created by rayhan on 24/03/2023.
//

#ifndef OOP_LAB_TASK_08_HOURLYEMPLOYEE_H
#define OOP_LAB_TASK_08_HOURLYEMPLOYEE_H

#include <string>
#include "Employee.h"

using namespace std;

class HourlyEmployee : public Employee {
private:
    double hourly_rate;
    double hours_worked;
public:
    HourlyEmployee(string name = "Empty", double hourly_rate = 0.0, double hours_worked = 0.0);

    double get_hourly_rate(void) const;

    double get_hours_worked(void) const;

    void set_hourly_rate(double hourly_rate);

    void set_hours_worked(double hours_worked);

    void calcSalary();

};


#endif //OOP_LAB_TASK_08_HOURLYEMPLOYEE_H
