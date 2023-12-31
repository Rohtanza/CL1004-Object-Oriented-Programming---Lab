#include <iostream>
#include "Boat.h"
#include "Plane.h"
#include "Skimmer.h"
using namespace std;
int main() {
    int boatLength, numPassengers;
    double maxAltitude;
    string name;
    cout<<"Enter the name : ", getline(cin,name);
    cout<<"Enter the boatLength : ",cin>>boatLength;
    cout<<"Enter the Max Altitude : ",cin>>maxAltitude;
    cout<<"Enter the number of passengers : ",cin>>numPassengers;
    Skimmer skimmer_One(boatLength,maxAltitude,numPassengers,name);
    skimmer_One.swinAndFly();
    return 0;
}
