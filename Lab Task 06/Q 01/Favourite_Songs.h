//
// Created by rayhan on 3/12/23.
//

#ifndef TASK_01_FAVOURITE_SONGS_H
#define TASK_01_FAVOURITE_SONGS_H

#include <string>

using namespace std;

class Favourite_Songs {
private:
    int ArraySize;
    string *songlist;
public:
    void UserInput(void);

    void printList(void);

    void addSong(void);
    
    void DeleteSong(void);

    void Update(void);

    Favourite_Songs(int= 0);

    Favourite_Songs(const Favourite_Songs &);

    void Operations(Favourite_Songs &List);

    ~Favourite_Songs();


};

int size(void);

#endif //TASK_01_FAVOURITE_SONGS_H
