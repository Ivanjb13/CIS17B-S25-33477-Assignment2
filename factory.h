#ifndef FACTORY_H
#define FACTORY_H

#include "book.h"
#include "user.h"

class Factory {
public:
    static Book* createBook(std::string title, std::string author, std::string ISBN);
    static User* createUser(std::string name, int userID, std::string userType);
};

#endif
