//
// Created by _rayhan on 5/5/23.
//

#include "My3DVector.h"
#include "Vector.h"

My3DVector::My3DVector() {
    x = y = z = 0;
}

My3DVector::My3DVector(double x, double y, double z) : x(x), y(y), z(z) {}

double My3DVector::calculateDotProduct(My3DVector vector) const {
    return ((x * vector.x) + (y * vector.y) + (z * vector.z));
}

template<class V>

ostream &operator<<(ostream &c, V vector) {

    c << " Vector : (" << vector.x << "," << vector.y << "," << vector.z << ")\n";

}

template<class V>

istream &operator>>(istream &c, V vector) {
    c >> vector.x >> vector.y >> vector.z;
}
