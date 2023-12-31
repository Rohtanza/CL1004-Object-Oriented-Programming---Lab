// Task 3 || Muhammad Rehan || 22P-9106 || BSE-2A.
#include <iostream>
using namespace std;
int main()
{
    char option;
    cout << "Do you Want a burger? \'Y\' for yes and \'N\' for No:" << endl, cin >> option;
    if (option == 'Y' || option == 'y')
    {
        cout << "Burger added\nDo you Want fires and drink as a addon? Just for 200 Rs Y/N " << endl, cin >> option;
        if (option == 'Y' || option == 'y')
        {
            cout << "Thank you\nYour Total bill:500." << endl;
            return 0;
        }
        if (option == 'N' || option == 'n')
        {
            cout << "Your Choice! Thank you\nYour Total bill:300." << endl;
            return 0;
        }
        cout << "Invalid" << endl;
        return 0;
    }
    if (option == 'N' || option == 'n')
    {
        cout << "No Problem. See you next time." << endl;
        return 0;
    }
    cout << "Invalid" << endl;
}
