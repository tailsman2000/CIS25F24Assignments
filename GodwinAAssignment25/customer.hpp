#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>

struct Address {
    std::string street;
    std::string city;
    int zipCode;
};

struct Customer {
    int customerID;
    std::string name;
    std::string email;
    Address address; 
};


void printCustomer(const Customer& customer);

#endif 
