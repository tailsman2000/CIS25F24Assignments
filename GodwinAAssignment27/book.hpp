#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

struct Book {
    std::string title;
    std::string author;
    std::string isbn;
    int quantity;

    // Overload the == operator to compare books by ISBN
    bool operator==(const Book& other) const {
        return isbn == other.isbn;
    }
};

#endif // BOOK_HPP
