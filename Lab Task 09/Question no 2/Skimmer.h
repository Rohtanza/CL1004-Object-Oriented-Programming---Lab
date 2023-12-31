//
// Created by rayhan on 3/31/23.
//

#ifndef QUESTION_NO_2_SKIMMER_H
#define QUESTION_NO_2_SKIMMER_H
#include "Boat.h"
#include "Plane.h"
#include <string>

class Skimmer: protected Boat,protected Plane{
private:
    std::string name;
    int numPassengers;
public:
    Skimmer (int boatLength,double maxAltitude,int numPassengers,std::string name);
    void swinAndFly(void);
};


#endif //QUESTION_NO_2_SKIMMER_H
