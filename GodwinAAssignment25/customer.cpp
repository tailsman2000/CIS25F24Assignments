#include "Customer.hpp"
#include <iostream>

void printCustomer(const Customer& customer) {
    std::cout << "Customer ID: " << customer.customerID << std::endl
              << "Name: " << customer.name << std::endl
              << "Email: " << customer.email << std::endl
              << "Address: " << customer.address.street << ", "
              << customer.address.city << ", "
              << customer.address.zipCode << std::endl;
}
