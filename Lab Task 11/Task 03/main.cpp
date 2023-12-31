

/*
 * Muhammad Rehan | 22P-9106 | BSSE_2A
 * OOP LAB TASK 11 | Question no 03 |
 * */


#include <iostream>
#include "Complex.h"
#include "Operations.h"



int main() {

    Complex c1(1, 1),c2(4, 2),c3(0, 0),c4(0,0);

    c3=Operations::addComplexNumbers(c1,c2);
    c3.display();
    c4=Operations::subtractComplexNumbers(c1,c2);
    c4.display();



    return 0;
}
