//
// Created by HP G8 on 5/19/2023.
//

#ifndef Q1_RECTANGLE_H
#define Q1_RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape {


private:
    double width;
    double height;

public:
    //Overriding the pure virtual functions.
    Rectangle(double width, double height);

    void display() override;

    double calArea() override;

    ~Rectangle() override;
};


#endif //Q1_RECTANGLE_H
