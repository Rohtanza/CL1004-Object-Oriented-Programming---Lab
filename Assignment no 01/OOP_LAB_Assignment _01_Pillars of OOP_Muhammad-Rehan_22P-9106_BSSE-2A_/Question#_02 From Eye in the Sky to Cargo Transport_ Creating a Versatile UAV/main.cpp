#include <iostream>
#include "CargoDeliveryUAV.h"
#include "SurvellienceUAV.h"
#include "MultiPurpose_UAV.h"

#define welcometext "\t\t\t    Welcome to The Program\n \t\t     From Eye in the Sky to Cargo Transport\n \t\t\t   Creating a Versatile UAV\n\n"
#define welcome "\n\t\t\t⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀\n\t\t\t⠀⢀⣀⣀⣀⣈⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣁⣀⣀⣀⡀⠀\n\t\t\t⠀⠀⠀⠀⠀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣄⠀⠀⠀⠀⠀\n\t\t\t⠀⠀⠀⠀⠀⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⠀⠀⠀⠀⠀\n\t\t\t⠀⠀⠀⣾⣿⣿⣿⣿⠀⠀⠀⠀⠀⠞⠛⠛⠳⠀⠀⠀⠀⠀⣿⣿⣿⣿⣷⠀⠀⠀\n\t\t\t⠀⠀⠀⠛⠛⠻⠿⠿⣿⣿⣿⡟⢁⡴⠛⠛⢦⡈⢻⣿⣿⣿⠿⠿⠟⠛⠛⠀⠀⠀\n\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡈⠁⠘⢧⣀⣀⡼⠃⠈⢁⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\t\t\t⠀⠀⠀⠀⠀⠀⠀⣠⣾⡿⠋⠀⢶⣄⣉⣉⣠⡶⠀⠙⢿⣷⣄⠀⠀⠀⠀⠀⠀⠀\n\t\t\t⠀⠀⠀⠀⢀⣠⣾⠟⠋⠀⠀⠀⠈⠉⠉⠉⠉⠁⠀⠀⠀⠙⠻⣷⣄⡀⠀⠀⠀⠀\n\t\t\t⠀⠀⠀⠀⣿⣿⡅⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢨⣿⣿⠀⠀⠀⠀\n\t\t\t⠀⠀⠀⠀⠈⠻⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⠟⠁⠀⠀⠀⠀\n\t\t\t⠀⠀⠀⠀⠀⠀⠙⢿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⡿⠋⠀⠀⠀⠀⠀⠀\n\t\t\t⠀⠀⠀⠀⠀⠀⠀⠈⠛⢁⣀⡀⠀⠀⠀⠀⠀⠀⢀⣀⡈⠛⠁⠀⠀⠀⠀⠀⠀⠀\n\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀"


/*
 * Muhammad Rehan | 22P-9106 | BSSE-2A
 * OOP Assignment# 01 | Task# 02
 *
 * Diamond problem we will encounter in this code
 *
 *                     -----UAV------
 *                    /              \
 *                   /                \
 *                  /                  \
 *           SurvellienceUAV    CargoDeliveryUAV
 *                   \                /
 *                    \              /
 *                     \            /
 *                    MultiPurpose_UAV
 *
 *
 *      To handle this we will add the virtual key work with the base classes, and we will make the methods
 *      static within base classes, so they can be accessed if we only create one object of any class
 *      Furthermore, we will make the variables of the base classes protected, so they can be
 *      accessed.
 *
 * */







int main() {

    //Showing a little something to enhance user experience
        std::cout<<welcometext<<tab<<welcome<<std::endl;


    // Creating Objects to Test our Program
    //01
   SurvellienceUAV survellienceUav_drone("Survellience drone",16.7,1000,20,3,true);
    survellienceUav_drone.display();
    //02
    CargoDeliveryUAV cargoDelivery_drone("Cargo Delivery Drone",14.5,3000,40);
    cargoDelivery_drone.display();
    //03
    MultiPurpose_UAV multiPurposeUav_drone("Multi Purpose Drone", 10.4, 2000, 20, 5, true, 5,5);
    multiPurposeUav_drone.display();

    return 0;



}
