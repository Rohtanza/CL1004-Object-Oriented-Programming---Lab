//
// Created by rayhan on 4/14/23.
//

#ifndef OOP_LAB_TASK_10_ZEBRATYPE_H
#define OOP_LAB_TASK_10_ZEBRATYPE_H

#include "animalType.h"

class zebraType : virtual public animalType {
private:
    string stripe_pattern;
public:
    const string &getStripePattern() const;

    ~zebraType() override;

    zebraType(const string &name, const string &color, const string &stripePattern);

    void display()const;

};





#endif //OOP_LAB_TASK_10_ZEBRATYPE_H
