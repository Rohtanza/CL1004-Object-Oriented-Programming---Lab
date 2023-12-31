//
// Created by rayhan on 24/03/2023.
//

#include"Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include <string>
#include <iostream>
#include <limits>

using namespace std;

void Operations(void) {
    cout << "Creating instance of the Hourly Employee." << endl;
    HourlyEmployee employee;
    string name;
    cout << "Enter the name of the hourly employee: ", getline(cin, name);
    employee.setname(name);
    double hours, rate;
    cout << "Enter the hours " << employee.getname() << " worked: ", cin >> hours;
    cout << "Enter the hourly rate: ", cin >> rate;
    employee.set_hourly_rate(rate), employee.set_hours_worked(hours);
    employee.calcSalary();
    cout << "Creating instance of the Salary Employee." << endl;
    SalariedEmployee employee1;
    string name1;
    double salary;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter the name of the salary employee: ", getline(cin, name1);
    cout << "Enter the salary: ", cin >> salary;
    employee1.setname(name1);
    employee1.set_annual_salary(salary);
    employee1.calcSalary();

}

// Employee Class Definitions


Employee::Employee(string name) {
    this->name = name;
}

string Employee::getname() const {
    return name;
}

void Employee::setname(string name) {
    this->name = name;
}

void Employee::calcSalary() {
}

// HourlyEmployee Class Definitions

HourlyEmployee::HourlyEmployee(string name, double hourly_rate, double hours_worked) : Employee(name) {
    this->hourly_rate = hourly_rate;
    this->hours_worked = hours_worked;
}

double HourlyEmployee::get_hourly_rate(void) const {
    return hourly_rate;
}

double HourlyEmployee::get_hours_worked(void) const {
    return hours_worked;
}

void HourlyEmployee::set_hourly_rate(double hourly_rate) {
    this->hourly_rate = hourly_rate;
}

void HourlyEmployee::set_hours_worked(double hours_worked) {
    this->hours_worked = hours_worked;
}

void HourlyEmployee::calcSalary() {
    cout << "The Salary is " << hourly_rate * hours_worked << "$. " << endl;
}


SalariedEmployee::SalariedEmployee(string name, double annual_salary) : Employee(name) {
    this->annual_salary = annual_salary;

}

void SalariedEmployee::set_annual_salary(double annual_salary) {
    this->annual_salary = annual_salary;
}

double SalariedEmployee::get_annual_salary() {
    return annual_salary;

}

void SalariedEmployee::calcSalary() {
    cout << "The monthly salary is : " << annual_salary / 12 << " $." << endl;
}
