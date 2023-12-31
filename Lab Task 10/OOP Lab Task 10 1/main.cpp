#include "animalType.h"
#include "deerType.h"
#include "zebraType.h"


int main() {



    animalType *animal= new deerType("Bambi","Brown",true);
    animal->display();
    animal =   new zebraType ("Marty","Black and White","Long curly strips");
    animal->display();
    delete animal;
    return 0;





}
