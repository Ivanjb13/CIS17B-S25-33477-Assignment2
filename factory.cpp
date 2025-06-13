#include "factory.h"
#include<string>

Book* Factory::createBook(std::string title, std::string author, std::string ISBN) {
    return new Book(title, author, ISBN);
}

User* Factory::createUser(std::string name, int userID, std::string userType) {
    if (userType == "Student") return new Student(name, userID);
    else return new Faculty(name, userID);
}
