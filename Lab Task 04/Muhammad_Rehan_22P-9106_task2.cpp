// Muhammad Rehan | 22P-9016 | BSE-2A | OOP Lab 04 Task 01 |s
#include <iostream>
#include <cstdlib>
#define range 6 + 1
using namespace std;
class Dice
{
private:
    int value;

public:
    Dice()
    {
        value = 0;
    }

    void roll()
    {
        int value = getValue();
        cout << "Side : " << value << endl;
        if (value != 6 && value != 4)
        {
            cout << "Better Luck Next time :)" << endl;
        }
        if (value == 4)
        {
            cout << "Chukkaaaa!" << endl;
        }
        if (value == 6)
        {
            cout << "Chakkaaaa!" << endl;
        }
        setValue(value);
    }

    int getValue()
    {
        int value = rand() % range;
        return value;
    }

    void setValue(int side)
    {
        value = side;
    }
};
int main()
{
    Dice game;
    while (1)
    {
        char option;
        cout << "Do you want to roll the dice? Y/N\n=>", cin >> option;
        switch (option)
        {
        case 'Y':
            game.roll();
            break;
        case 'y':
            game.roll();
            break;
        case 'N':
            return 0;
            break;
        case 'n':
            return 0;
            break;
        default:
            cout << "Kindly Enter a valid option." << endl;
            break;
        }
    }
}
