//
// Created by _rayhan on 4/28/23.
//

#ifndef TASK_01_COMPLEX_H
#define TASK_01_COMPLEX_H


#include "Operations.h"

class Complex {


   friend Complex Operations::addComplexNumbers(Complex& c1, Complex& c2);
   friend Complex Operations::subtractComplexNumbers(Complex& c1, Complex& c2);

protected:
    int real;
    int imag;

public:
    Complex(int real, int imag);

    void display() const;



};


#endif //TASK_01_COMPLEX_H
