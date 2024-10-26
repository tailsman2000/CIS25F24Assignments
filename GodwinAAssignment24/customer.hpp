// Customer.hpp
#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>

struct Customer {
    int customerID;
    std::string name;
    std::string email;
};

// Declaration of the function to print customer details
void printCustomer(const Customer& customer);

#endif // CUSTOMER_HPP
