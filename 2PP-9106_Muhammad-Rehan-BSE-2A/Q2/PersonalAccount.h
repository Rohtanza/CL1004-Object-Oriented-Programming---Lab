//
// Created by HP G8 on 5/19/2023.
//

#ifndef Q2_PERSONALACCOUNT_H
#define Q2_PERSONALACCOUNT_H


#include "UserAccount.h"

class PersonalAccount : public UserAccount {

private:
    string gender;

public:
    PersonalAccount(const string &username, const string &password, const string &gender);


    void displayInfo() override;

    void viewAllPosts() override;

    void addPost(string title, string dis) override;


};


#endif //Q2_PERSONALACCOUNT_H
