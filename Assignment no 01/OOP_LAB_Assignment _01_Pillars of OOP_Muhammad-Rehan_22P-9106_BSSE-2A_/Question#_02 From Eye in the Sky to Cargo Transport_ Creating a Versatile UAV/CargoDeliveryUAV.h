//
// Created by _rayhan on 4/27/23.
//

#ifndef QUESTION__02_FROM_EYE_IN_THE_SKY_TO_CARGO_TRANSPORT__CREATING_A_VERSATILE_UAV_CARGODELIVERYUAV_H
#define QUESTION__02_FROM_EYE_IN_THE_SKY_TO_CARGO_TRANSPORT__CREATING_A_VERSATILE_UAV_CARGODELIVERYUAV_H


#include <string>
#include "UAV.h"

class CargoDeliveryUAV : virtual public UAV {

    //Protected to be accessible in the derived class.
protected:

    std::string Name;
    double weight;
    double maxAlitude;
    double cargoArea;


public:
    CargoDeliveryUAV(std::string name, double weight, double maxAlitude, double cargoArea);

    // This method is virtual because it will be over-ridden in the derived class.
    virtual void display();
    // Static to be use good OOP coding practices.
    static void deliverCargo();


};


#endif //QUESTION__02_FROM_EYE_IN_THE_SKY_TO_CARGO_TRANSPORT__CREATING_A_VERSATILE_UAV_CARGODELIVERYUAV_H
