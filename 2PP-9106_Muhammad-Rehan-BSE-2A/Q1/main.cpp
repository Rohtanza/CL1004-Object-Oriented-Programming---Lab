
/*
 * Muhammad Rehan | 22P-9106 | BSe-2a
 * Question no 01 | OOP Final lab exam |
 *
 *    ---> I have tired to use the pointer to the shape everywhere as
 *    ---> a good programming oop practice to showcase the polymorphism ability
 *    ---> of C++, thats why i also compared the shapes using pointers.
 *
 * */

#include <iostream>
// Including all the Classes
#include "Shape.h"
#include "Circule.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;
// Operator > overloading, it will take two object and will compare the area.
bool operator>(Shape &obj1, Shape &obj2) {
    if ( obj1.calArea()>obj2.calArea() )
        return true;
    else
        return false;
}

int main() {
// Creating some objects of the shapes.
    Shape *shapes[3] = {

            new Circule(5),
            new Rectangle(4, 6),
            new Triangle(3, 7)
    };

    //Displaying the Information along with the area.
    for (int i = 0; i < 3; ++i) {

        shapes[i]->display();
        cout << "\tThe Area is : " << shapes[i]->calArea() << endl;

    }
    // Comparing the two objects.
    cout << "Comparing Circle with Rectangle" << endl;
    // using the pointer to showcase the polymorphism ability.
    if(shapes[0]>shapes[1]){
    shapes[0]->display(),cout<<"has bigger area then ",shapes[1]->display();
    }
    //Deleting the objects.
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }


}
