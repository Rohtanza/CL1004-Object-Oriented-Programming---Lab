//
// Created by _rayhan on 4/28/23.
//

#include "Operations.h"
#include "Complex.h"

Complex Operations::addComplexNumbers(Complex& c1, Complex& c2) {


    Complex c3(0,0);
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;


    return c3;
}

Complex Operations::subtractComplexNumbers(Complex& c1, Complex& c2) {

    Complex c3(0,0);
    c3.real = c1.real - c2.real;
    c3.imag = c1.imag - c2.imag;


    return c3;

}
