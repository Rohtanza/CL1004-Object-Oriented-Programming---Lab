//
// Created by _rayhan on 4/28/23.
//

#include <iostream>
#include "Complex.h"


void Complex::display() const {

    std::cout << "Complex : " << real << " + " << imag << "i." << std::endl;

}

Complex::Complex(int real, int imag) : real(real), imag(imag) {}
