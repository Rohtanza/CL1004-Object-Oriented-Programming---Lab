//
// Created by _rayhan on 4/28/23.
//

#ifndef TASK_01_COMPLEX_H
#define TASK_01_COMPLEX_H


class Complex {

    friend Complex operator+(Complex c1, Complex c2);
    friend void operator++(Complex c1);



protected:

    int imag;
    int real;

public:
    Complex(int real, int imag);
    void display() const;


};


#endif //TASK_01_COMPLEX_H
