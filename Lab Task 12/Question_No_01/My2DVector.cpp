//
// Created by _rayhan on 5/5/23.
//

#include "My2DVector.h"

My2DVector::My2DVector(double x, double y) : x(x), y(y) {}

My2DVector::My2DVector() {
    x = y = 0;

}

double My2DVector::calculateDotProduct(My2DVector vector) const {

    return ((x * vector.x) + (y * vector.y));


    return 0;
}
template<class V>
ostream &operator<<(ostream &c, V vector) {
    c << " Vector : (" << vector.x << "," << vector.y << ")\n";
}

template<class V>
istream &operator>>(istream &c, V vector) {
    c >> vector.x >> vector.y;
}

