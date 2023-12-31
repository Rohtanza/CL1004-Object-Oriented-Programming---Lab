//
// Created by _rayhan on 5/5/23.
//

#ifndef QUESTION_NO_01_VECTOR_H
#define QUESTION_NO_01_VECTOR_H

template<class V>
class Vector {

private:
    V v;
public:
    explicit Vector(V v);
    double calculateDotProduct(V object);

};



#endif //QUESTION_NO_01_VECTOR_H
