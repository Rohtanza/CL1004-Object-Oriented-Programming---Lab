#include <iostream>
#include "Animal.h"
#include "Bird.h"
#include "Reptile.h"

using namespace std;

int main() {
    string name, habitat;
    int age, wingLenght;
    cout << "Enter the name of the Bird : ", cin >> name;
    cout << "Enter the age of the Bird : ", cin >> age;
    cout << "Enter the wing length of the Bird : ", cin >> wingLenght;
    Bird birdOne(name, age, wingLenght);
    cout << "Enter the name of the Reptile : ", cin >> name;
    cout << "Enter the age of the Reptile : ", cin >> age;
    cout << "Enter the habitat of the Reptile : ", cin >> habitat;
    Reptile reptileOne(name, age, habitat);
    birdOne.speak();
    reptileOne.speak();
    return 0;
}
