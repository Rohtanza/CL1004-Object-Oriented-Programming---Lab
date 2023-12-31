//
// Created by HP G8 on 5/19/2023.
//

#include "Triangle.h"
#include <iostream>

using namespace std;
//defining the Class methods

void Triangle::display() {

    cout << "Triangle with base " << base << " cm and height " << height << " cm."
         << endl;

}

double Triangle::calArea() {
    return (0.5 * height * base);
}

Triangle::Triangle(double base, double height) : base(base), height(height) {}

Triangle::~Triangle() {
    cout<<"Triangle destroyed"<<endl;

}

