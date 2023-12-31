// Task 1 || Muhammad Rehan || 22P-9106 || BSE-2A.
#include <iostream>
using namespace std;
int main()
{
    // Declaring the Variables
    int Secs, mins, hours, days;
    // Asking the user for the Seconds
    cout << "Enter the Seconds:", cin >> Secs;
    // Calculating
    mins = Secs / 60;
    hours = mins / 60;
    days = hours / 24;
    // This int (Variable%Constant) is to print the variable wihtout taking mode beforehand.
    cout << int(days) << " Days, " << int(hours % 24) << " hours, " << int(mins % 60) << " minutes, " << int(Secs % 60) << " seconds.";
    return 0;
}
