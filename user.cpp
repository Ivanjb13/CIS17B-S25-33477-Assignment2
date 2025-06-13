#include "user.h"
#include <algorithm>

User::User(std::string n, int id) : name(n), userID(id) {}

void User::borrowBook(Book* book) {
    borrowedBooks.push_back(book);
    book->borrowBook();
}

void User::returnBook(Book* book) {
    borrowedBooks.erase(std::remove(borrowedBooks.begin(), borrowedBooks.end(), book), borrowedBooks.end());
    book->returnBook();
}

int User::getUserID() const { return userID; }

Student::Student(std::string name, int id) : User(name, id) {}
std::string Student::getUserType() const { return "Student"; }

Faculty::Faculty(std::string name, int id) : User(name, id) {}
std::string Faculty::getUserType() const { return "Faculty"; }
