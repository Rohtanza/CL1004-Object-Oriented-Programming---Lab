//
// Created by HP G8 on 5/19/2023.
//

#include <iostream>
#include "BusinessAccount.h"

BusinessAccount::BusinessAccount(const string &username, const string &password, double revenue) : UserAccount(username,
                                                                                                               password),
                                                                                                   revenue(revenue) {}

void BusinessAccount::displayInfo() {
    UserAccount::displayInfo();
    cout << "\trevenue: " << revenue << endl;

}

void BusinessAccount::viewAllPosts() {
    UserAccount::viewAllPosts();
}

void BusinessAccount::addPost(string title, string dis) {
    UserAccount::addPost(title, dis);


}
