#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>

struct Customer {
    int customerID;
    std::string name;
    std::string email;
};

void printCustomer(const Customer& customer);

#endif 
