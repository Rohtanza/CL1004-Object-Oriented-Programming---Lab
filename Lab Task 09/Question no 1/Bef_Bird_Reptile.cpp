//
// Created by rayhan on 3/31/23.
//
#include<iostream>
#include "Animal.h"
#include "Bird.h"
#include "Reptile.h"

Bird::Bird(string name, int age, int wingLength) {
    this->name = name;
    this->age = age;
    this->wingLength = wingLength;
}

Reptile::Reptile(string name, int age, string habitat) {
    this->name = name;
    this->age = age;
    this->habitat = habitat;
}

void Bird::speak() {
    std::cout << "I am a bird and name is : "<<name<< "\nI can sing and and age is : "<< age <<"\nMy wing lenght is " << wingLength << std::endl;
}

void Reptile::speak() {
    std::cout << "I am a Reptile and name is : "<<name<< "\ni can creep and my age is : "<<age<< "\nMy habitat is " << habitat << std::endl;

}
