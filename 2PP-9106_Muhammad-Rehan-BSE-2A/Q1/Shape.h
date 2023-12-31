//
// Created by HP G8 on 5/19/2023.
//

#ifndef Q1_SHAPE_H
#define Q1_SHAPE_H


class Shape {

public:
    // Declaring the friend function and the pure virtual functions
    friend bool operator>(Shape &obj1, Shape &obj2);
    virtual void display() = 0;
    virtual double calArea() = 0;
    virtual ~Shape();
};


#endif //Q1_SHAPE_H
