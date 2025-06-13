#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Resource.h"
#include "Book.h"
#include "User.h"

class Library
{
    std::vector<Resource *> resources;
    User *user;

public:
    Library(User *u);
    ~Library();
    void addBook(string id, string title, string author, int year);
    void listResources() const;
    void borrowById(string id);
    void returnById(string id);
};

#endif
