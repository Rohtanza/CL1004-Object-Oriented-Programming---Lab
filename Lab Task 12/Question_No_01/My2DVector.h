//
// Created by _rayhan on 5/5/23.
//

#ifndef QUESTION_NO_01_MY2DVECTOR_H
#define QUESTION_NO_01_MY2DVECTOR_H

#include <iostream>
#include "Vector.h"

using namespace std;

class My2DVector {
    template<class V>
    friend ostream &operator<<(ostream &c, V vector);
    template<class V>
    friend istream &operator>>(istream &c, V vector);

private:

    double x;
    double y;
public:
    My2DVector(double x, double y);

    My2DVector();

    [[nodiscard]] double calculateDotProduct(My2DVector vector) const;
};


#endif //QUESTION_NO_01_MY2DVECTOR_H
