#include <iostream>
#include "Customer.hpp"

int main() {
    Customer customer;

    std::cout << "Enter Customer ID: ";
    std::cin >> customer.customerID;
    std::cin.ignore();  

    std::cout << "Enter Customer Name: ";
    std::getline(std::cin, customer.name);

    std::cout << "Enter Customer Email: ";
    std::getline(std::cin, customer.email);

    printCustomer(customer);

    return 0;
}
