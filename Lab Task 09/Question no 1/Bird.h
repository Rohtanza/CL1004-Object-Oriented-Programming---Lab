//
// Created by rayhan on 3/31/23.
//

#ifndef OOP_LAB_TASK_09_BIRD_H
#define OOP_LAB_TASK_09_BIRD_H

#include "Animal.h"

using namespace std;

class Bird : private Animal {
    int wingLength;
public:
    Bird(string name, int age, int wingLength);

    void speak(void);
};


#endif //OOP_LAB_TASK_09_BIRD_H
