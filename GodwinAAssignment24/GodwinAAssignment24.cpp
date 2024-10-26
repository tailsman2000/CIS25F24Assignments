// main.cpp
#include <iostream>
#include "Customer.hpp"

int main() {
    Customer customer;

    // Ask the user for input
    std::cout << "Enter Customer ID: ";
    std::cin >> customer.customerID;
    std::cin.ignore();  // Ignore newline after integer input

    std::cout << "Enter Customer Name: ";
    std::getline(std::cin, customer.name);

    std::cout << "Enter Customer Email: ";
    std::getline(std::cin, customer.email);

    // Print the result
    printCustomer(customer);

    return 0;
}
