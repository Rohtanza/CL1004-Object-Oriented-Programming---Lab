//Muhammad Rehan || 22P-9106 || BSE-2A || OOP LAB no 2, Task no 2
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void FLUSH();
void Options(string);
void Vowels(string);
void VowelsNDconsonants(string);
void frequent(string);
void Concatenate(string);
int main()
{
    //Creating the string
    string Input_string;
    cout << "Enter the String: ", getline(cin, Input_string);
    //Cleaning the input buffer/stream beforing going ahead.
    fflush(stdin);
    //This function will do all the stuff in the program.
    Options(Input_string);
}
void Options(string Input_string)
{
    char option;
    cout << "\n• A) Count the number of vowels in the string\n• B) Count both the vowels and consonants in the string\n• C) Display the most frequent character in the string.\n• D) Concatenate another string with the existing string.\n";
    while (1)
    {
        cout << endl
             << "Enter your option (You can Exit the program with Ctrl+C): ",
            cin >> option;
        // Again cleaning the input/buffer stream before taking any input from user.
        FLUSH();
        // This switch will run in loop till the e is entered.
        switch (option)
        {
        case 'a':
            Vowels(Input_string);
            break;
        case 'A':
            Vowels(Input_string);
            break;
        case 'b':
            VowelsNDconsonants(Input_string);
            break;
        case 'B':
            VowelsNDconsonants(Input_string);
            break;
        case 'c':
            frequent(Input_string);
            break;
        case 'C':
            frequent(Input_string);
            break;
        case 'D':
            Concatenate(Input_string);
            break;
        case 'd':
            Concatenate(Input_string);
            break;
        case 'E':
            return;
            break;
        case 'e':
            return;
            break;
        default:
            cout << "\nKindly Enter a valid input option.\n";
            break;
        }
    }
}
void Vowels(string Input_string)
{
    int count = 0;
    char Vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    for (int i = 0; i < 10; i++)
    {
        // Instead of the array index compareing i am using the .find method.
        if (Input_string.find(Vowels[i]) != string::npos)
            count++;
    }
    cout << "\tThe Vowels are:" << count << endl;
}
void VowelsNDconsonants(string Input_string)
{
    int count;
    // Checking for both lower and upper case vowels.
    char Vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    for (int i = 0; i < 10; i++)
    {
        // Finding the vowels in the string.
        if (Input_string.find(Vowels[i]) != string::npos)
            count++;
    }
    // consonants are the characters expect the vowels in the string.
    cout << "\tThe Vowels are: " << count << " and the consonants are: " << Input_string.length() - count << endl;
}
void frequent(string Input_string)
{

    int count, flag, length, freq;
    // This variable will store the index of most frequent character.
    freq = 0;
    // This will keep the count of occurence of the character in the string. this is 1 because every character will must occure one time.
    count = 1;
    // Getting string length
    length = Input_string.length();
    for (int i = 0; i < length; i++)
    {
        // flag will strat from zero for every character.
        flag = 0;
        for (int j = 0; j < length; j++)
        {
            // checking the chacater.
            if (Input_string[i] == Input_string[j])
                flag++;
        }
        // if the flag is more then the count
        if (flag > count)
        {
            /* So, if the flag is more then count then
            the flag will be stored in the count,
            and that character index will be stored in the freq */
            count = flag;
            freq = i;
        }
    }
    // If the count remains 1 means every character occures one times in the string.
    if (count == 1)
    {
        cout << "\tAll charactes have same frequence" << endl;
        return;
    }
    cout << "\tThe most frequent characters is: " << Input_string[freq] << endl;
}
void Concatenate(string Input_string)
{
    // Intizialing the strings.
    string con = "";
    string space = " ";
    cout << "\tEnter the String to be Concatenate: ", getline(cin, con);
    // Using the .append method to combine two strings.
    cout << "\t\t• " << Input_string.append(space + con) << endl;
}
void FLUSH()
{
    // This simple loop will clean the buffer or input stream.
    while (getchar() != '\n')
    {
    }
}