//
// Created by HP G8 on 5/19/2023.
//

#include <iostream>
#include "UserAccount.h"
#include <vector>

UserAccount::UserAccount(const string &username, const string &password) : username(username), password(password) {

    posts = vector<Post>();
}

void UserAccount::displayInfo() {
    cout<<"Displaying the user information:"<<endl;
    cout << "\tUser Name: " << username << endl;
    cout << "\tPassword: " << password << endl;

}

void UserAccount::viewAllPosts() {
    cout << "\nDisplaying all the post:" << endl;
    for (int i = 0; i < posts.size(); ++i) {

        cout << "Title :" << posts[i].getTitle() << endl;
        cout << "Description: " << posts[i].getDescription() << endl;
        cout << endl;
    }
}

void UserAccount::addPost(string title, string dis) {

    posts.push_back(Post(title, dis));

}