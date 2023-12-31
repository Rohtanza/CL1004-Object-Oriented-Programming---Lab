//
// Created by _rayhan on 4/27/23.
//

#include <iostream>
#include "MultiPurpose_UAV.h"


MultiPurpose_UAV::MultiPurpose_UAV(const std::string &name, double weight, double maxAlitude, double zoomLevel,
                                   double recordingCapacity, bool isNightVision, double cargoArea,
                                   double solarPanelEfficiency) : solarPanelEfficiency(solarPanelEfficiency),
                                                                  SurvellienceUAV(name, weight, maxAlitude, zoomLevel,
                                                                                  recordingCapacity, isNightVision),
                                                                  CargoDeliveryUAV(name, weight, maxAlitude,
                                                                                   cargoArea) {}







                // This method will be displaying the information of the drone having the
                // attributes of the both base classes.
void MultiPurpose_UAV::display() {


    std::cout << tab << "I am a Multi Purpose UAV Drone." << std::endl;
    std::cout << tab << "My name is " <<  SurvellienceUAV::Name << std::endl;
    std::cout << tab << "My weight is " << SurvellienceUAV:: weight << " kg " << std::endl;
    std::cout << tab << "My altitude is " << SurvellienceUAV::  maxAlitude << " ft " << std::endl;
    std::cout << tab << "My zoom level is " << zoomLevel << " x " << std::endl;
    std::cout << tab << "My recording capacity is " << recordingCapacity << " GB " << std::endl;
    isNightVision ? std::cout << tab << "I have " : std::cout << tab << "I don't have", std::cout << " night vision."
                                                                                                  << std::endl;
    std::cout << tab << "My cargo area is " << cargoArea << " sqft " << std::endl;
    std::cout << tab << "My solar panel efficiency is " << solarPanelEfficiency << " Watt-peak " << std::endl;

    deliverCargoWithSurvellience();

}

void MultiPurpose_UAV::deliverCargoWithSurvellience() {

    // Displaying the required data.
    takeOff();
    recordVideo();
    land();
    deliverCargo();

}


