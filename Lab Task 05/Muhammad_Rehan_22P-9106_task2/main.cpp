#include <iostream>
#include "Employee.h"
//Including The Header Files


using namespace std;


int main() {
    // This Function is Asking user to enter the Count of Employees.
    int count = Count();
    // Creating the Array of Objects.
    Employee EmployeeList[count];
    // An Array to Store the Salary's of the Employee.
    int Salary[count];
    // I will use the rand() Function So setting the seed.
    srand(time(NULL));
    // Entering the Random Data into the array of the objects.
    RandDataEntry(EmployeeList, count);
    // A Function to Ask user the pay for the base hour
    int pay = Pay();
    // A Function to Calculate the Salaries of the Employees.
    EmployeeList->cacl_Salary(EmployeeList, pay, count, Salary);
    // A Function to Display the Data Along the Salary.
    Display(EmployeeList, count, Salary);
    return 0;
}

