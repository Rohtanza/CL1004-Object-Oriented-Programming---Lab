//
// Created by rayhan on 4/14/23.
//

#ifndef OOP_LAB_TASK_10_ANIMALTYPE_H
#define OOP_LAB_TASK_10_ANIMALTYPE_H

#include <string>

using namespace std;

class animalType {
protected:
    string name;
    string color;
public:
    virtual ~animalType();

    animalType(const string &name, const string &color);

    const string &getName() const;

    const string &getColor() const;

    void virtual display() const = 0;


};


#endif //OOP_LAB_TASK_10_ANIMALTYPE_H
