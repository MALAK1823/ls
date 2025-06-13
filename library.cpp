#include "Library.h"
#include <iostream>

Library::Library(User *u) : user(u) {}

Library::~Library()
{
    for (auto *r : resources)
        delete r;
}

void Library::addBook(string id, string title, string author, int year)
{
    resources.push_back(new Book(id, title, author, year));
}

void Library::listResources() const
{
    for (auto *r : resources)
    {
        r->display();
    }
}

void Library::borrowById(string id)
{
    for (auto *r : resources)
    {
        if (r->getId() == id)
        {
            user->borrow(r);
            return;
        }
    }
    std::cout << "Resource not found";
}

void Library::returnById(string id)
{
    for (auto *r : resources)
    {
        if (r->getId() == id)
        {
            user->returnResource(r);
            return;
        }
    }
    cout << "Resource not found";
}
