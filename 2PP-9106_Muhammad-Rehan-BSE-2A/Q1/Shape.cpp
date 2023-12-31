//
// Created by HP G8 on 5/19/2023.
//

#include "Shape.h"
#include <iostream>
//defining the virtual destructor
Shape::~Shape() {
    std::cout<<"Shape Destroyed"<<std::endl;
}
