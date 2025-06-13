#include <iostream>
#include "library.h"
#include "factory.h"

void displayMenu() {
    std::cout << "Welcome to the Library:\n1. Manage Books\n2. Manage Users\n3. Manage Transactions\n4. Exit\n";
}

void handleBookManagement(Library* lib) {
    int choice;
    std::cout << "Manage Books:\n1. Add a Book\n2. List Books\n3. Go Back\nEnter your choice: ";
    std::cin >> choice;
    if (choice == 1) {
        std::string title, author, ISBN;
        std::cout << "Enter Title: "; std::cin >> title;
        std::cout << "Enter Author: "; std::cin >> author;
        std::cout << "Enter ISBN: "; std::cin >> ISBN;
        lib->addBook(Factory::createBook(title, author, ISBN));
    } else if (choice == 2) {
        lib->listBooks();
    }
}

int main() {
    Library* lib = Library::getInstance();
    int choice;
    while (true) {
        displayMenu();
        std::cin >> choice;
        if (choice == 1) handleBookManagement(lib);
        else if (choice == 2) lib->listUsers();
        else if (choice == 3) std::cout << "Transaction Management Coming Soon!\n";
        else if (choice == 4) break;
    }
    std::cout << "Thank you for using the Library System!\n";
    return 0;
}

