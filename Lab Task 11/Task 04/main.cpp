
/*
 * Muhammad Rehan | 22P-9106 | BSSE_2A
 * OOP LAB TASK 11 | Question no 04 |
 * */


#include <iostream>
#include "Complex.h"

int main() {

    Complex c1(1, 11), c2(4, 2), c3(0, 0);

    std::cout<<"Adding"<<std::endl;

    c3 = c1 + c2;

    c3.display();

    std::cout<<"Incrementing"<<std::endl;

    c3.operator++();

    c3.display();


    return 0;
}
