//
// Created by rayhan on 3/12/23.
//
#include <iostream>
#include <limits>
#include <algorithm>
#include "Favourite_Songs.h"

#define Tab "\t\t"
using namespace std;


/*
        class clock{
            int hr;
            int min; 
            int sec;
        }

        s1.setmethod(hr, min ,sec);
        setmethod(int hr, int min, int sec){
            this->hr=hr;
            this->min=min;
            this->sec-sec;
        }



*/

Favourite_Songs::Favourite_Songs(const Favourite_Songs &Obj) {
    this->ArraySize = Obj.ArraySize;
    songlist = new string[ArraySize];
    songlist = Obj.songlist;
}


void Favourite_Songs::Operations(Favourite_Songs &List) {
    while (true) {
        while (true) {
            int option;
            cout
                    << "1. Add a song\n2. Delete a Song\n3. Update a song\n4. Print all song\n5. Create Backup of Songs\n6. Exit\n"
                    << Tab << "Enter Your Choice: ", cin >> option;
            switch (option) {
                case 1:
                    List.addSong();
                    break;
                case 2:
                    List.DeleteSong();
                    break;
                case 3:
                    List.Update();
                    break;
                case 4:
                    List.printList();
                    break;
                case 5: {
                    Favourite_Songs BackUp = List;
                    //fs backup(list)
                    cout << "Back Up Created\n";
                    break;
                }
                case 6:
                    return;
                default:
                    cout << "Enter a valid Option" << endl;
            }
        }
        break;
    }
}

void Favourite_Songs::Update() {
    int option;
    cout << "Which song would you like to update: ", cin >> option;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter new song name:", getline(cin, songlist[option - 1]);
    cout << "Updated." << endl;
}

void Favourite_Songs::addSong() {
    int addSize = 0;
    cout << "How many songs you want to add: ", cin >> addSize;
    ArraySize += addSize;
    string *tempPointer = new string[ArraySize];
    fill(tempPointer, tempPointer + ArraySize, "Empty");
    copy(songlist, songlist + (ArraySize - addSize), tempPointer);
    delete[] songlist;
    songlist = tempPointer;
    tempPointer = NULL;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = ArraySize - addSize; i < ArraySize; ++i)
        cout << "Enter the name(s) of new song: ", getline(cin, songlist[i]);
}

void Favourite_Songs::DeleteSong() {
    int delsize = 0;
    cout << "How many Song(s) you want to delete: ", cin >> delsize;
    int numbers[delsize];
    cout << "Enter the number(s) of songs\n";
    if (delsize < ArraySize) {
        int Temp;
        for (int i = 0; i < delsize; ++i) {
            cin >> Temp;
            numbers[i] = Temp - 1;
        }
    } else
        cout << "Enter number within List Size" << endl;
    ArraySize -= delsize;
    string *tempointer = new string[ArraySize];
    int temp = 0;
    for (int i = 0; i < ArraySize + delsize; ++i) {
        bool check = true;
        for (int j = 0; j < delsize; ++j) {
            if (i == numbers[j])
                check = false;
        }
        if (check) {
            tempointer[temp] = songlist[i];
            temp++;
        }
        check = true;
    }
    delete[] songlist;
    songlist = tempointer;
    tempointer = NULL;
}

void Favourite_Songs::printList(void) {
    cout << "LIST:" << endl;
    for (int i = 0; i < ArraySize; ++i) {
        cout << Tab << i + 1 << ". " << songlist[i] << endl;
    }
}

void Favourite_Songs::UserInput(void) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < ArraySize; ++i) {
        cout << "Enter the name of Song no " << i + 1 << " : ", getline(cin, songlist[i]);
    }


}

Favourite_Songs::Favourite_Songs(int size) {
    this->ArraySize = size;
    songlist = new string[ArraySize];
    cout << "Status: Dynamic Array Created." << endl;
}

Favourite_Songs::~Favourite_Songs() {
    delete[] songlist;
    cout << "Status: Dynamic Array Deleted." << endl;
}


int size(void) {
    int size;
    cout << "Hey There! Enter the size of the Song list : ", cin >> size;
    return size;
}