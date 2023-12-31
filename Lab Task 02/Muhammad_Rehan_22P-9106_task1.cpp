/*Muhammad Rehan || 22P-9106 || BSE-2A || OOP LAB no 2, Task no 1
"Password Cheacker"
    This code will keep asking and keep checking for:
        1.Capital alphabets
        2.Spaces
        3.Numbers
        4.Special Chars
*/
#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;
bool passcode(string);
bool PasscodeEntery(string, string);
bool PasscodeReEntery(string, string);
int main()
{
    string password, name;
    cout << "Enter Name: ", getline(cin, name);
    fflush(stdin);
    while (1)
    {
        cout << "Enter Passowrd: ", getline(cin, password);
        fflush(stdin);
        if (PasscodeEntery(password, name))
            break;
    }
    cout << "\nGood\n";
    string Passcode_again;
    fflush(stdin);
    while (1)
    {
        cout << "\nRenter the Passoword:", getline(cin, Passcode_again);
        if (PasscodeReEntery(password, Passcode_again))
        {
            cout << "\nGood Work!😊\n\nLogin in Detials:\n"
                 << "  Name: "
                 << name << endl
                 << "  Password: "
                 << password << endl
                 << endl;
            break;
        }
    }
    return 0;
}
bool PasscodeReEntery(string password, string Passcode_again)
{
    int same = password.compare(Passcode_again);
    if (same == 0)
    {
        return true;
    }
    else
    {
        cout << "Sorry Passwords are not same.\nTry again Reneterin the password.(You can Exit the program with Ctrl+C)";
        return false;
    }
}
bool PasscodeEntery(string password, string name)
{
    if (passcode(password))
        return true;
    else
    {
        cout << "\nTry Again! (You can Exit the program with Ctrl+C)\n";
        return false;
    }
}
bool passcode(string password)
{
    int Errors = 0;
    if (password.length() < 9)
    {
        cout << "\t• Kindly write a password with more then 8 characters for Security\n";
        Errors++;
    }
    // Checking the Capital
    {
        int flag = 0;
        for (int j = 65; j < 91; j++)
        {
            char Capital = j;
            // The method below will find the "j" in tha string
            if (password.find(Capital) != string::npos)
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            cout << "\t• Kindly add a Capital Character in your Password for Security\n";
            Errors++;
        }
    }
    // Checking the Special Chars
    {
        int flag = 0;
        /*It will require more then one loop as the
        ASCII values of special chars are in different
        ranges and program needs to chcek every range*/
        // Loop 1:
        for (int j = 33; j < 48; j++)
        {
            char Special = j;
            // The method below will find the Special Char in tha string
            if (password.find(Special) != string::npos)
                flag++;
        }
        // Loop 2:
        for (int j = 58; j < 65; j++)
        {
            char Special = j;
            // The method below will find the Special Char in tha string
            if (password.find(Special) != string::npos)
                flag++;
        }
        // Loop 3:
        for (int j = 91; j < 97; j++)
        {
            char Special = j;
            // The method below will find the Special Char in tha string
            if (password.find(Special) != string::npos)
                flag++;
        }
        if (flag == 0)
        {
            cout << "\t• Kindly add a Special Character in your Password for Security\n";
            Errors++;
        }
    }
    // Checking the Numbers within password.
    {
        int flag = 0;
        // ASCII values of numbers is between 48 and 58.
        for (int j = 48; j < 58; j++)
        {
            char Number = j;
            // The method below will find numbers in tha string
            if (password.find(Number) != string::npos)
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            cout << "\t• Kindly add a Number in your Password for Security\n";
            Errors++;
        }
    }
    // Checking the Space
    {
        // The method below will find Space (ASCII value 32) in tha string
        char Space = 32;
        if (password.find(Space) != string::npos)
        {
            cout << "\t• Kindly Remove Space from your Password for Security\n";
            Errors++;
        }
    }
    if (Errors == 0)
    {
        return true;
    }
    return false;
}
