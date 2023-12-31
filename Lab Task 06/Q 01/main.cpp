//Muhammad Rehan | 22P-9106 | BSE-2A | Task 01
#include <iostream>
#include "Favourite_Songs.h"

using namespace std;

int main() {
    Favourite_Songs Songs(size());
    Songs.UserInput();
    Songs.Operations(Songs);
    return 0;
}
