//
// Created by rayhan on 2/24/23.
//
#include "Item.h"
#include <iostream>
#include <iomanip>

//Default Constructor Definition
Item::Item() {
    ID = price = quantity = name = "Empty";
}

Item::~Item() {
    cout << "Object Destroyed\n";
}

// Parameterized Constructor Definition
Item::Item(string ID, string name, string price, string quantity) {
    this->ID = ID;
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}

// GetterMethods Definition
string Item::getID() const {
    return this->ID;
}

string Item::getName() const {
    return this->name;
}

string Item::getPrice() const {
    return this->price;
}

string Item::getQuantity() const {
    return this->quantity;
}

//Setter Methods Definition
void Item::setID(string ID) {
    this->ID = ID;
}

void Item::setName(string name) {
    this->name = name;
}

void Item::setPrice(string price) {
    this->price = price;
}

void Item::setQuantity(string quantity) {
    this->quantity = quantity;
}

// Other Functions Definition
int size() {
    int size;
    cout << "Enter the Quantity of the Items: ", cin >> size;
    return size;
}

void DataEntry(Item storeItem[], int length) {
    string fooValue;
    FLUSH();
    for (int i = 0; i < length; ++i) {
        cout << tab << "Enter the Data for Item no " << i + 1 << " : \n";
        cout << tab << tab << "ID : ", getline(cin, fooValue);
        storeItem[i].setID(fooValue);
        cout << tab << tab << "Name: ", getline(cin, fooValue);
        storeItem[i].setName(fooValue);
        cout << tab << tab << "Price: ", getline(cin, fooValue);
        storeItem[i].setPrice(fooValue);
        cout << tab << tab << "Quantity: ", getline(cin, fooValue);
        storeItem[i].setQuantity(fooValue);
    }
}

int Menu(Item storeItem[], int length) {
    while (true) {
        int option = 0;
        cout << "\n-------------------------||OPTIONS||-------------------------\n" << tab
             << "1). Display Items\n" << tab << "2). Update item details\n" << tab
             << "3). Search for items by ID\n" << tab << "4). Exit\n" << tab << "=>",
                cin >> option;
        while (true) {
            switch (option) {
                case 1:
                    Display_items(storeItem, length);
                    break;
                case 2:
                    UpdateItem(storeItem, length);
                    break;
                case 3:
                    Search(storeItem, length);
                    break;
                case 4:
                    exit(0);
                default:
                    cout << "\nEnter Valid Input.\n";
                    break;
            }
            break;
        }
    }
}

void Display_items(Item storeItem[], int length) {
    cout << "\n-------------------------||DETAILS||-------------------------\n";
    for (int i = 0; i < length; ++i) {
        cout << "ITEM NO: " << i + 1 << endl;
        cout << tab << "ID:" << right << setw(14) << storeItem[i].getID() << endl;
        cout << tab << "Name:" << right << setw(12) << storeItem[i].getName() << endl;
        cout << tab << "Price:" << right << setw(11) << storeItem[i].getPrice() << endl;
        cout << tab << "Quantity:" << right << setw(8) << storeItem[i].getQuantity() << endl;
    }
    cout << "\n---------------------------||END||---------------------------\n";
}

void UpdateItem(Item storeItem[], int length) {
    int ItemNo, option;
    cout << tab << "\nKindly Select Item Number, You have " << length << " items in inventory.\n" << tab << "=>",
            cin >> ItemNo;
    cout << tab << "Select:\n " << tab << "1) ID\n  " << tab << "2) Name\n  " << tab << "3) Price\n  " << tab
         << "4) Quantity\n" << tab << "=>", cin >> option;
    string fooValue;
    FLUSH();
    ItemNo--;
    cout << "\nKindly new Value:", getline(cin, fooValue);
    switch (option) {
        case 1:
            storeItem[ItemNo].setID(fooValue);
            break;
        case 2:
            storeItem[ItemNo].setName(fooValue);
            break;
        case 3:
            storeItem[ItemNo].setPrice(fooValue);
            break;
        case 4:
            storeItem[ItemNo].setQuantity(fooValue);
            break;
    }


}

void Search(Item storeItem[], int length) {
    string fooValue;
    int check = 0;
    bool flag[length] = {false};
    cout << "\nKindly Enter the ID to Search:", FLUSH(), getline(cin, fooValue);
    for (int i = 0; i < length; ++i) {
        string Check = storeItem[i].getID();
        if (fooValue == Check)
            flag[i] = true;
    }
    cout << "\n-------------------------||Same ID||-------------------------\n";
    for (int i = 0; i < length; ++i) {
        if (flag[i]) {
            check++;
            cout << "ITEM NO: " << i + 1 << endl;
            cout << tab << "ID:" << right << setw(14) << storeItem[i].getID() << endl;
            cout << tab << "Name:" << right << setw(12) << storeItem[i].getName() << endl;
            cout << tab << "Price:" << right << setw(11) << storeItem[i].getPrice() << endl;
            cout << tab << "Quantity:" << right << setw(8) << storeItem[i].getQuantity() << endl;
        }
    }
    if (!check)
        cout << "Item not Found" << endl;
    cout << "\n---------------------------||END||---------------------------\n";
}

void FLUSH() {
    while ((getchar()) != '\n') {};
}