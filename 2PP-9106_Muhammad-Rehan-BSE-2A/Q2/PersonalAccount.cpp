//
// Created by HP G8 on 5/19/2023.
//

#include <iostream>
#include "PersonalAccount.h"

PersonalAccount::PersonalAccount(const string &username, const string &password, const string &gender) : UserAccount(
        username, password), gender(gender) {}

void PersonalAccount::displayInfo() {
    UserAccount::displayInfo();
    cout << "\tGender: " << gender << endl;
}

void PersonalAccount::viewAllPosts() {
    UserAccount::viewAllPosts();
}

void PersonalAccount::addPost(string title, string dis) {
    UserAccount::addPost(title, dis);
}

