//
// Created by _rayhan on 4/27/23.
//

#ifndef QUESTION__02_FROM_EYE_IN_THE_SKY_TO_CARGO_TRANSPORT__CREATING_A_VERSATILE_UAV_SURVELLIENCEUAV_H
#define QUESTION__02_FROM_EYE_IN_THE_SKY_TO_CARGO_TRANSPORT__CREATING_A_VERSATILE_UAV_SURVELLIENCEUAV_H

#define tab "\t"


#include <string>
#include "UAV.h"



class SurvellienceUAV : virtual public UAV {

    //protected so they can be accessed in the derived class.
protected:

    std::string Name;
    double weight;
    double maxAlitude;
    double zoomLevel;
    double recordingCapacity;
    bool isNightVision;


public:

    SurvellienceUAV(std::string name, double weight, double maxAlitude, double zoomLevel,
                    double recordingCapacity, bool isNightVision);

    void display();

    // These two methods are static so, they can we called if we create only one object of any class.
    // Apart from this reason, it is a good coding OOP practice to make methods static if possible.
    static void captureImage();

    static void recordVideo();


};


#endif //QUESTION__02_FROM_EYE_IN_THE_SKY_TO_CARGO_TRANSPORT__CREATING_A_VERSATILE_UAV_SURVELLIENCEUAV_H
