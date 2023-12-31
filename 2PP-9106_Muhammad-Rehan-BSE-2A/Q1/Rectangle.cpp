//
// Created by HP G8 on 5/19/2023.
//

#include "Rectangle.h"
#include <iostream>

using namespace std;
//defining the Class methods

void Rectangle::display() {

    cout << "Rectangle with  Width " << width << " cm height " << height << " cm."
         << endl;

}

double Rectangle::calArea() {
    return (height * width);
}

Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

Rectangle::~Rectangle() {
    cout << "Rectangle destroyed" << endl;

}



