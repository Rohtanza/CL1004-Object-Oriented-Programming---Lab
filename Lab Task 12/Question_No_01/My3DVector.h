//
// Created by _rayhan on 5/5/23.
//

#ifndef QUESTION_NO_01_MY3DVECTOR_H
#define QUESTION_NO_01_MY3DVECTOR_H

#include <iostream>
#include "Vector.h"

using namespace std;

class My3DVector {

private:
    template<class V>
    friend ostream &operator<<(ostream &c, V vector);
    template<class V>
    friend istream &operator>>(istream &c, V vector);

    double x;
    double y;
    double z;

public:

    My3DVector();

    My3DVector(double x, double y, double z);

    [[nodiscard]] double calculateDotProduct( My3DVector vector) const;

};


#endif //QUESTION_NO_01_MY3DVECTOR_H
