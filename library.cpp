#include "library.h"
#include <iostream>

Library* Library::instance = nullptr;

Library::Library() {}

Library* Library::getInstance() {
    if (!instance) instance = new Library();
    return instance;
}

void Library::addBook(Book* book) { books.push_back(book); }
void Library::addUser(User* user) { users.push_back(user); }

Book* Library::findBookByTitle(const std::string& title) {
    for (Book* book : books) {
        if (book->getTitle() == title) return book;
    }
    return nullptr;
}

User* Library::findUserByID(int id) {
    for (User* user : users) {
        if (user->getUserID() == id) return user;
    }
    return nullptr;
}

void Library::listBooks() {
    for (Book* book : books) {
        std::cout << "Title: " << book->getTitle() << ", Author: " << book->getAuthor()
                  << ", ISBN: " << book->getISBN() << ", Available: " << (book->isAvailable() ? "Yes" : "No") << "\n";
    }
}

void Library::listUsers() {
    for (User* user : users) {
        std::cout << "ID: " << user->getUserID() << ", Type: " << user->getUserType() << "\n";
    }
}
