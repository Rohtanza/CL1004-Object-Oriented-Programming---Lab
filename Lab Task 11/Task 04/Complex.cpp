//
// Created by _rayhan on 4/28/23.
//

#include <iostream>
#include "Complex.h"

Complex Complex::operator+( Complex c2) const {

    Complex c3(0,0);
    c3.real = real + c2.real;
    c3.imag = imag + c2.imag;


    return c3;
}

void Complex::display() const {

    std::cout << "Complex : " << real << " + " << imag << "i." << std::endl;

}

Complex::Complex(int real, int imag) : real(real), imag(imag) {}

void Complex::operator++()  {

    real++;

}
