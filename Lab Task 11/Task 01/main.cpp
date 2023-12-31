
/*
 * Muhammad Rehan | 22P-9106 | BSSE_2A
 * OOP LAB TASK 11 | Question no 01 |
 * */


#include <iostream>
#include "Complex.h"

int main() {

    Complex c1(1,11),c2(4,2),c3(0,0);

    c3=addComplex(c1,c2);

    c3.display();


    return 0;
}
