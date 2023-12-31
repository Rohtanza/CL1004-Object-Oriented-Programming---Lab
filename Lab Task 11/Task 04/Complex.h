//
// Created by _rayhan on 4/28/23.
//

#ifndef TASK_01_COMPLEX_H
#define TASK_01_COMPLEX_H


class Complex {


private:
    int real;
    int imag;
public:
    Complex(int real, int imag);
    void operator++();
    Complex operator+(Complex c2) const;

    void display() const;


};


#endif //TASK_01_COMPLEX_H
