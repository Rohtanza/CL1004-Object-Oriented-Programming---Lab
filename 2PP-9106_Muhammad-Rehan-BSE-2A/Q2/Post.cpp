//
// Created by HP G8 on 5/19/2023.
//

#include "Post.h"

const string &Post::getTitle() const {
    return title;
}

void Post::setTitle(const string &title) {
    Post::title = title;
}

const string &Post::getDescription() const {
    return description;
}

void Post::setDescription(const string &description) {
    Post::description = description;
}

Post::Post(const string &title, const string &description) : title(title), description(description) {}
