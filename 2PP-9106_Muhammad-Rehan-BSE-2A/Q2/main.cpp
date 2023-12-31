
/*
 * Muhammad Rehan | 22P-9106 | BSe-2a
 * Question no 02 | OOP Final lab exam |
 *
 * -->> i have tired to make a full mirror program from the output sample provided.
 * -->> thats why i didn't do the gold plating
 * */


#include <iostream>
#include "PersonalAccount.h"
#include "BusinessAccount.h"
#include <limits>

using namespace std;

int main() {
    //All the variables i will be needing
    string name;
    string password;
    UserAccount *acc;
    string title;
    string discription;
    double revenue = 0.0;
    int choice = 0;
    int option = 0;

    // Asking user the account type.

    cout << "Which Type of account you want to create\n1. Personal Account\n2. Business Account\n:", cin >> choice;
    if (choice == 1) {
        //This is used to clean the input buffer.
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Name: ", getline(cin, name);
        cout << "Enter Password :", getline(cin, password);
        string gender;
        cout << "Enter gender: ", getline(cin, gender);
        acc = new PersonalAccount(name, password, gender);


    } else if (choice == 2) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Name: ",
                getline(cin, name
                );
        cout << "Enter Password :",
                getline(cin, password
                );
        cout << "Enter revenue: ", cin >>
                                       revenue;

        acc = new BusinessAccount(name, password, revenue);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
        cout << "Invalid Option" <<
             endl;
        return -1;
    }
    //Taking in the first post.
    cout << "lets create posts" << endl;
    cout << "Enter the post Title:", getline(cin, title);
    cout << "Enter the description:", getline(cin, discription);

    acc->addPost(title, discription);


    //Endless loop to add post till the users enters no as 2.

    while (true) {

        cout << "Would you like to add another post\n1. Yes\n2. No\n:", cin >> option;
        if (option == 1) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter the post Title:", getline(cin, title);
            cout << "Enter the description:", getline(cin, discription);
            acc->addPost(title, discription);

        } else if (option == 2) {
            acc->displayInfo();
            acc->viewAllPosts();
            return 0;
        } else {
            cout << "Enter a valid option." << endl;
        }
    }


    return 0;
}
