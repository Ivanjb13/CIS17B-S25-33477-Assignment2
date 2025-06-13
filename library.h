#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book.h"
#include "user.h"

class Library {
private:
    static Library* instance;
    std::vector<Book*> books;
    std::vector<User*> users;
    Library();  // Private constructor

public:
    static Library* getInstance();
    void addBook(Book* book);
    void addUser(User* user);
    Book* findBookByTitle(const std::string& title);
    User* findUserByID(int id);
    void listBooks();
    void listUsers();
};

#endif
