//
// Created by HP G8 on 5/19/2023.
//

#ifndef Q2_USERACCOUNT_H
#define Q2_USERACCOUNT_H


#include <vector>
#include "Post.h"

class UserAccount {
protected:
    string username;
    string password;


    //Using vector to get rid or memory mangement.

    std::vector<Post> posts;
public:

    UserAccount(const string &username, const string &password);

     virtual void displayInfo();

     virtual void viewAllPosts();

     virtual void addPost(string title, string dis);
};


#endif //Q2_USERACCOUNT_H
