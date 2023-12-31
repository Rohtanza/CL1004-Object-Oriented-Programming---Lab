//
// Created by _rayhan on 4/27/23.
//

#ifndef QUESTION__02_FROM_EYE_IN_THE_SKY_TO_CARGO_TRANSPORT__CREATING_A_VERSATILE_UAV_MULTIPURPOSE_UAV_H
#define QUESTION__02_FROM_EYE_IN_THE_SKY_TO_CARGO_TRANSPORT__CREATING_A_VERSATILE_UAV_MULTIPURPOSE_UAV_H


#include "CargoDeliveryUAV.h"
#include "SurvellienceUAV.h"

// This class is inheriting from two virtual base classes.
class MultiPurpose_UAV : public SurvellienceUAV, public CargoDeliveryUAV {


public:
    MultiPurpose_UAV(const std::string &name,
                     double weight, double maxAlitude, double zoomLevel, double recordingCapacity,
                     bool isNightVision, double cargoArea, double solarPanelEfficiency);


    static void deliverCargoWithSurvellience();

    // Over-riding the display function.
    void display() override;

private:

    double solarPanelEfficiency;




};


#endif //QUESTION__02_FROM_EYE_IN_THE_SKY_TO_CARGO_TRANSPORT__CREATING_A_VERSATILE_UAV_MULTIPURPOSE_UAV_H
