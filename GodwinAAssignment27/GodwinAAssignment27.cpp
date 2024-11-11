#include "Bookstore.hpp"
#include <iostream>

int main() {
    // Create a bookstore instance
    Bookstore myStore("Local Bookstore", "123 Main St");

    // Add some books to the inventory
    Book book1 = {"The Catcher in the Rye", "J.D. Salinger", "9780316769488", 10};
    Book book2 = {"To Kill a Mockingbird", "Harper Lee", "9780061120084", 8};
    Book book3 = {"1984", "George Orwell", "9780451524935", 15};

    myStore.addBook(book1);
    myStore.addBook(book2);
    myStore.addBook(book3);

    // Find a book
    std::string searchIsbn = "9780061120084";
    Book* foundBook = myStore.findBook(searchIsbn);
    if (foundBook) {
        std::cout << "Book found: " << foundBook->title << " by " << foundBook->author << '\n';
    } else {
        std::cout << "Book with ISBN " << searchIsbn << " not found.\n";
    }

    // Display the inventory
    myStore.displayInventory();

    return 0;
}
