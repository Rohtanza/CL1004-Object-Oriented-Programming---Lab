//
// Created by rayhan on 3/31/23.
//
#include <iostream>
#include "Boat.h"
#include "Plane.h"
#include "Skimmer.h"
using namespace std;
Skimmer:: Skimmer(int boatLength,double maxAltitude,int numPassengers,string name):Boat(boatLength),Plane(maxAltitude) {
    this->numPassengers=numPassengers;
    this->name=name;
}
void Skimmer::swinAndFly(void){
    cout<<"The name is : "<<name<<"\nThe boat Lenght is "<<boatLength<<"ft\nThe Max Altitude is : "<<maxAltitude<<"ft\nThe number of passengers are : "<<numPassengers<<endl;
    Boat::swin();
    Plane::fly();
}



Plane::Plane(double maxAltitude){
    this->maxAltitude=maxAltitude;
}
Boat::Boat(int boatLength) {
    this->boatLength=boatLength;
}
void Boat::swin(){
    cout<<"I am Swinging"<<endl;
}
void Plane::fly() {
    cout<<"I am flying"<<endl;
}

