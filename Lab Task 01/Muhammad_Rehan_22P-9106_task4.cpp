// Task 4 || Muhammad Rehan || 22P-9106 || BSE-2A.
#include <iostream>
using namespace std;
int main()
{
    //Declaring the Variables.
    int row, col, num;
    // Asking the users the number.
    cout << "Enter the coloums till you want to print the pattren:", cin >> num;
    // Runing the Outer Loop.
    for (row = 1; row < (2 * num); row++)
    {
        // Checking if the number of cols are half way through.
        // This Variable "cols" will get the right number of col to be run.
        int cols = row > num ? 2 * num - row : row;
        for (col = 0; col < cols; col++)
        {
            cout << '*';
        }

        cout << '\n';
    }
    return 0;
}