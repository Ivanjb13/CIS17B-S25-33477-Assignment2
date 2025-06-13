#include "book.h"
#include <stdexcept>

Book::Book(std::string t, std::string a, std::string i) : title(t), author(a), ISBN(i), available(true) {}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getISBN() const { return ISBN; }
bool Book::isAvailable() const { return available; }

void Book::borrowBook() {
    if (!available) throw std::runtime_error("Error: Book already borrowed!");
    available = false;
}

void Book::returnBook() { available = true; }
