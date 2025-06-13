#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "book.h"

class User {
protected:
    std::string name;
    int userID;
    std::vector<Book*> borrowedBooks;

public:
    User(std::string n, int id);
    virtual void borrowBook(Book* book);
    virtual void returnBook(Book* book);
    virtual std::string getUserType() const = 0;
    int getUserID() const;
};

class Student : public User {
public:
    Student(std::string name, int id);
    std::string getUserType() const override;
};

class Faculty : public User {
public:
    Faculty(std::string name, int id);
    std::string getUserType() const override;
};

#endif
