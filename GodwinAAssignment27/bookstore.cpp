#include "Bookstore.hpp"
#include <iostream>

Bookstore::Bookstore(const std::string& name, const std::string& location)
    : storeName(name), location(location) {}

void Bookstore::addBook(const Book& book) {
    // Check if the book already exists in the inventory by ISBN
    for (auto& existingBook : inventory) {
        if (existingBook == book) {
            existingBook.quantity += book.quantity;
            return;
        }
    }
    // If not found, add the new book
    inventory.push_back(book);
}

Book* Bookstore::findBook(const std::string& isbn) {
    for (auto& book : inventory) {
        if (book.isbn == isbn) {
            return &book;
        }
    }
    return nullptr;
}

void Bookstore::displayInventory() const {
    std::cout << "Inventory for " << storeName << " at " << location << ":\n";
    for (const auto& book : inventory) {
        std::cout << "Title: " << book.title << ", Author: " << book.author
                  << ", ISBN: " << book.isbn << ", Quantity: " << book.quantity << '\n';
    }
}
