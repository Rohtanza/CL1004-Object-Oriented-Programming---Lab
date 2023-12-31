//
// Created by HP G8 on 5/19/2023.
//

#ifndef Q2_POST_H
#define Q2_POST_H

#include <string>

using namespace std;

class Post {

private:
    string title;
    string description;
public:
    Post(const string &title, const string &description);

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getDescription() const;

    void setDescription(const string &description);
};


#endif //Q2_POST_H
