//
// Created by HP G8 on 5/19/2023.
//

#ifndef Q1_TRIANGLE_H
#define Q1_TRIANGLE_H


#include "Shape.h"

class Triangle : public Shape{

private:
    double base;
    double height;

public:
    //Overriding the pure virtual functions.

    Triangle(double base, double height);

    void display() override;

    double calArea() override;

    ~Triangle() override;
};


#endif //Q1_TRIANGLE_H
