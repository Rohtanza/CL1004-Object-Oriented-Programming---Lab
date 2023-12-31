//
// Created by rayhan on 4/14/23.
//

#ifndef OOP_LAB_TASK_10_DEERTYPE_H
#define OOP_LAB_TASK_10_DEERTYPE_H

#include "animalType.h"

class deerType : virtual public animalType {
private:
    bool hasAntlers;
public:
    bool isHasAntlers() const;

    deerType(const string &name, const string &color, bool hasAntlers);

    ~deerType() override;

    void display() const;




};


#endif //OOP_LAB_TASK_10_DEERTYPE_H
