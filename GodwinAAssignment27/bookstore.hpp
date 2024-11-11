#ifndef BOOKSTORE_HPP
#define BOOKSTORE_HPP

#include "Book.hpp"
#include <vector>

class Bookstore {
private:
    std::string storeName;
    std::string location;
    std::vector<Book> inventory;

public:
    Bookstore(const std::string& name, const std::string& location);

    void addBook(const Book& book);
    Book* findBook(const std::string& isbn);
    void displayInventory() const;
};

#endif // BOOKSTORE_HPP
