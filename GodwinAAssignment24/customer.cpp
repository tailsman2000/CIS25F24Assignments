// Customer.cpp
#include "Customer.hpp"
#include <iostream>

void printCustomer(const Customer& customer) {
    std::cout << "Customer ID: " << customer.customerID 
              << ", Name: " << customer.name 
              << ", Email: " << customer.email << std::endl;
}
