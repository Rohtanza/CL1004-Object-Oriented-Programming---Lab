//
// Created by _rayhan on 4/27/23.
//

#include "SurvellienceUAV.h"

#include <utility>
#include <iostream>

SurvellienceUAV::SurvellienceUAV(std::string name, double weight, double maxAlitude, double zoomLevel,
                                 double recordingCapacity, bool isNightVision) : Name(std::move(name)), weight(weight),
                                                                                 maxAlitude(maxAlitude),
                                                                                 zoomLevel(zoomLevel),
                                                                                 recordingCapacity(recordingCapacity),
                                                                                 isNightVision(isNightVision) {}
// Definition of the display method to be shown to use drone information
void SurvellienceUAV::display() {


    std::cout << tab << "I am a Survellience UAV Drone." << std::endl << std::endl;
    std::cout << tab << "My name is " << Name << std::endl;
    std::cout << tab << "My weight is " << weight << " kg " << std::endl;
    std::cout << tab << "My altitude is " << maxAlitude << " ft " << std::endl;
    std::cout << tab << "My zoom level is " << zoomLevel << " x " << std::endl;
    std::cout << tab << "My recording capacity is " << recordingCapacity << " GB " << std::endl;
    isNightVision ? std::cout << tab << "I have " : std::cout << tab << "I don't have", std::cout << "night vision."
                                                                                                  << std::endl;
    recordVideo();
    captureImage();
    std::cout << std::endl;

}
// Other methods Definitions
void SurvellienceUAV::captureImage() {

    std::cout << tab << "Drone Capturing Image." << std::endl;

}

void SurvellienceUAV::recordVideo() {

    std::cout << tab << "Drone Recording Video." << std::endl;

}
