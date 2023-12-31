#include <memory>
#include "animalType.h"
#include "deerType.h"
#include "zebraType.h"


void displayAll(animalType **animals);

int main() {
//    std::unique_ptr<animalType> animals[] = {
//            std::make_unique<deerType>("Bambi","Brown",true),
//            std::make_unique<zebraType> ("Marty","Black and White","Long curly strips")
//    };

    animalType *animals[]={

            new deerType("Bambi","Brown",true),
            new zebraType ("Marty","Black and White","Long curly strips")
    };


    displayAll(animals);


    for (int i = 0; i < 2; ++i)
        delete animals[i];
    return 0;

}

void displayAll(animalType **animals) {
    for (std::size_t j = 0; j < 2; ++j) {
        animals[j]->display();
    }

}

