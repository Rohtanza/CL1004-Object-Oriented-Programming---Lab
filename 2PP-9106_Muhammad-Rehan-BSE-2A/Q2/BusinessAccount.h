//
// Created by HP G8 on 5/19/2023.
//

#ifndef Q2_BUSINESSACCOUNT_H
#define Q2_BUSINESSACCOUNT_H


#include "UserAccount.h"

class BusinessAccount : public UserAccount {

private:
    double revenue;
public:
    BusinessAccount(const string &username, const string &password, double revenue);

    void displayInfo() override;

    void viewAllPosts() override;

    void addPost(string title, string dis) override;
};


#endif //Q2_BUSINESSACCOUNT_H
