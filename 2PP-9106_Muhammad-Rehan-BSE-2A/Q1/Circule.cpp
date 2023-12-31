//
// Created by HP G8 on 5/19/2023.
//
#include <cmath>
#include "Circule.h"
#include <iostream>
using namespace std;

//defining the Class methods
void Circule::display() {

    cout<<"Circule with Radius "<<radius<<" cm."<<endl;

}

double Circule::calArea() {
    return (M_PI*radius*radius);
}

Circule::Circule(double radius) : radius(radius) {}

Circule::~Circule() {
    cout<<"Circle destroyed"<<endl;

}


