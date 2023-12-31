//Muhammad Rehan || 22P-9106 || BSE-2A || OOP LAB no 2, Task no 3
#include <iostream>
// Library to use the bool in the program
#include <stdbool.h>
// I am using the streamstring object from the library below
#include <sstream>
// I am using the system("CLS") from the library below to clear my screen.
#include <stdlib.h>
/*
    =>IMPORTANT READ BEFORE LOOKING AT THE CODE:
        This whole program contain a logic of bool returned from a function
        so if function returns false back to the previous function then 
        the break; will be skpied and the function will be called again 
        into a infinity loop untill the function return the bool value true.

*/
#define Floor 4
#define Room 5
#define floorOneTwo 10000
#define floorThirdFourth 6000
using namespace std;
bool ShowMenu(char Rooms[Floor][Room]);
bool operations(char Rooms[Floor][Room]);
bool BookesRooms(char Rooms[Floor][Room]);
bool FloorSelection(char Rooms[Floor][Room]);
bool RoomSelection(char Rooms[Floor][Room], char floor_option);
bool DaySelection(char Rooms[Floor][Room], char floor_option, char room_option);

int main()
{
    //Creating Array of Rooms and Floors
    char Rooms[Floor][Room];
    for (int i = 0; i < Floor; i++)
    {
        for (int j = 0; j < Room; j++)
        {
            Rooms[i][j] = '*';
        }
    }
    // Using Infnite Loop.
    while (1)
    {
        // False from operation function will skip the break and operation function will be called again.
        // this function operations will handle the whole program.
        if (operations(Rooms))
            break;
    }
    return 0;
}
bool operations(char Rooms[Floor][Room])
{
    /* I am using char instead of int because of the input limition of int 
    because if someone enter char or any text in the cin of int,
    it makes the program go carzy*/
    char option;
    cout << "Hi there!\nChoose from menu:\n1. Show Available /Booked Rooms\n2. Book a Room\n3. Exit the program." << endl
         << "=>",
        cin >> option;
    switch (option)
    {
    case '1':
        if (ShowMenu(Rooms))
            return true;
    case '2':
        while (1)
        {
            if (FloorSelection(Rooms))
                break;
        }
        break;
    case '3':
        return true;
    default:
    // Invalid input will return false to previous funtion.
        system("CLS");
        cout << "\nEnter a Valid Input." << endl
             << endl;
        return false;
    }
    return false;
}
bool FloorSelection(char Rooms[Floor][Room])
{

    char floor_option;
    cout << "=> First and Second Floor cost 1,0000/- per Night\n=> Third and Fourth Floor Cost 6,000/- per Night \n\nEnter the floor no in which you want to occupy a Room: (1 - 4): ", cin >> floor_option;
    switch (floor_option)
    {
    case '1':
        while (1)
        {
            if (RoomSelection(Rooms, floor_option))
                break;
        }
        break;
    case '2':
        while (1)
        {
            if (RoomSelection(Rooms, floor_option))
                break;
        }
        break;
    case '3':
        while (1)
        {
            if (RoomSelection(Rooms, floor_option))
                break;
        }
        break;
    case '4':
        while (1)
        {
            if (RoomSelection(Rooms, floor_option))
                break;
        }
        break;
    default:
        system("CLS");
        cout << "\nEnter a Valid Floor Input." << endl
             << endl;
        return false;
    }
    return true;
}
bool RoomSelection(char Rooms[Floor][Room], char floor_option)
{
    char room_option;
    cout << "Enter the Room no you want to occupy: (1 - 5): ", cin >> room_option;
    switch (room_option)
    {
    case '1':
        DaySelection(Rooms, floor_option, room_option);
        break;
    case '2':
        DaySelection(Rooms, floor_option, room_option);
        break;
    case '3':
        DaySelection(Rooms, floor_option, room_option);
        break;
    case '4':
        DaySelection(Rooms, floor_option, room_option);
        break;
    case '5':
        DaySelection(Rooms, floor_option, room_option);
        break;
    default:
        system("CLS");
        cout << "\nEnter a Valid Room Input." << endl
             << endl;
        return false;
        break;
    }
    return true;
}
bool DaySelection(char Rooms[Floor][Room], char floor_option, char room_option)
{
    char day_option;
    cout << "For how many days you want to book the room?: ", cin >> day_option;
    /* First i am creating three stringstream 
     Now i am directing my char into these strings
     Then with the help of stoi(StreamstringNAME.str()) funtion
    the char will be converted to the interger value but 
    the good thing is like the char '5' will be converted into 5 integer 
    not into its ACSII Values*/
    stringstream BF, BR, DAY;
    BF << floor_option, BR << room_option, DAY << day_option;
    int BookedFloor = stoi(BF.str()) - 1;
    int BookedRoom = stoi(BR.str()) - 1;
    int days = stoi(DAY.str());
    // Checking if the room is available
    if (Rooms[BookedFloor][BookedRoom] == '*')
    {
        int bill = 0;
        //Checking for floor number
        if (BookedFloor == 1 || BookedFloor == 2)
            bill = floorOneTwo * days;
        else
            bill = floorThirdFourth * days;
        cout << "\n=> Room Booked! Your Total Bill is: " << bill << endl;
        Rooms[BookedFloor][BookedRoom] = '-';
        cout << "=> Here's Your Booking" << endl;
        ShowMenu(Rooms);
    }
    else
    {
        system("CLS");
        cout << "\n=> Ohh! Sorry Room is already Booked.\n=> Try Another Room." << endl
             << endl
             << endl;
        return true;
    }
    return true;
}
bool ShowMenu(char Rooms[Floor][Room])
{
    // Printing Array.
    for (int i = 0; i < Floor; i++)
    {
        for (int j = 0; j < Room; j++)
        {
            cout << " " << Rooms[i][j];
        }
        cout << endl;
    }
    int flag;
    // Simply asking if want to contiune or exit the program.
    cout << "\nTo Book Enter \"1\" or press any key to exist program: ", cin >> flag, cout << endl;
    if (flag == 1)
    {
        system("CLS");
        return false;
    }
    return true;
}
