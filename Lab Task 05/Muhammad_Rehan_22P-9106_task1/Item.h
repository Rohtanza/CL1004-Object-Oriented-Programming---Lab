//
// Created by rayhan on 2/24/23.
//

#ifndef TASK_01_ITEM_H
#define TASK_01_ITEM_H


#include <string>

#define tab "\t\t\t"

using namespace std;

// Class Template
class Item {
private:
    string ID;
    string name;
    string price;
    string quantity;
public:
    // Default Constructor Declaration
    Item();

    // Destructor Declaration
    ~Item();

    // Parameterized Constructor Declaration
    Item(string ID, string name, string price, string quantity);

    // GetterMethods Declaration
    string getID() const;

    string getName() const;

    string getPrice() const;

    string getQuantity() const;

    //Setter Methods Declaration
    void setID(string ID);

    void setName(string name);

    void setPrice(string price);

    void setQuantity(string Quantity);

};

//Other Functions Declaration
int size();

int Menu(Item storeItem[], int length);

void DataEntry(Item storeItem[], int length);

void FLUSH();

// Required Functions
void Display_items(Item storeItem[], int length);

void UpdateItem(Item storeItem[], int length);

void Search(Item storeItem[], int length);

#endif //TASK_01_ITEM_H
