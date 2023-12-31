//
// Created by rayhan on 3/31/23.
//

#ifndef OOP_LAB_TASK_09_REPTILE_H
#define OOP_LAB_TASK_09_REPTILE_H

#include <string>
#include "Animal.h"

using namespace std;

class Reptile : private Animal {
    string habitat;
public:
    Reptile(string name, int age, string habitat);

    void speak(void);
};


#endif //OOP_LAB_TASK_09_REPTILE_H
