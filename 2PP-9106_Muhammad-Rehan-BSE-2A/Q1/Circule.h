//
// Created by HP G8 on 5/19/2023.
//

#ifndef Q1_CIRCULE_H
#define Q1_CIRCULE_H


#include "Shape.h"

class Circule : public Shape {

private:
    double radius;

public:

    //Overriding the pure virtial functions.
    explicit Circule(double radius);

    void display() override;

    double calArea() override;

    ~Circule() override;

};


#endif //Q1_CIRCULE_H
