#include <iostream>


#include "My2DVector.h"
#include "My3DVector.h"
#include "Vector.h"

int main() {

    My2DVector vector1,vector2;
    Vector object1(vector1);
    Vector object2(vector2);

    cin>>object1;
    cin>>object2;

    cout<<"The dot product is : ",object1.calculateDotProduct(object2);

    cout<<object1;
    cout<<object2;


    My3DVector vector3,vector4;

    Vector object3(vector3);
    Vector object4(vector4);

    cin>>object3;
    cin>>object4;

    cout<<"The dot product is : ",object3.calculateDotProduct(object4);


    cout<<object3;
    cout<<object4;
















    return 0;
}
