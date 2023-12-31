//
// Created by _rayhan on 4/28/23.
//

#ifndef TASK_01_COMPLEX_H
#define TASK_01_COMPLEX_H


class Complex {

    friend Complex addComplex(Complex c1 ,Complex c2);

private:
    int real;
    int imag;
public:
    Complex(int real, int imag);

public:
    void display() const;


};


#endif //TASK_01_COMPLEX_H
