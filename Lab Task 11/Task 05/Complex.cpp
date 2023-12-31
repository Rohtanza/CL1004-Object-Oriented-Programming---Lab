//
// Created by _rayhan on 4/28/23.
//

#include <iostream>
#include "Complex.h"

 Complex operator+(Complex c1, Complex c2){
    Complex c3(0,0);

    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;

    return c3;
}


void operator++(Complex c1)  {

    c1.real++;
}



void Complex::display() const {

    std::cout << "Complex : " << real << " + " << imag << "i." << std::endl;

}

Complex::Complex(int real, int imag) : real(real), imag(imag) {}


