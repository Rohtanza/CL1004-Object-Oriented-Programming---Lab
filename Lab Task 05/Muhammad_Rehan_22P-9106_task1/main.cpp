#include <iostream>
// Including our Class
#include "Item.h"

using namespace std;

int main() {
    int length = size();
    Item storeItem[length];
    DataEntry(storeItem, length);
    Menu(storeItem, length);
    return 0;
}

