// Task 2 || Muhammad Rehan || 22P-9106 || BSE-2A.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    // Declaring the variables
    float Mass, Height;
    // Asking User for the values
    cout << "Enter the Mass in KGs:", cin >> Mass;
    cout << "Enter your Height in Meters:", cin >> Height;
    // Displaying the BMI
    cout << "The BMI is : " << setprecision(3) << Mass / pow(Height, 2) << endl;
    return 0;
}