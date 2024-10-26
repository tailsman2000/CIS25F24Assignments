#include <iostream>
#include "Customer.hpp"

int main() {
    Customer customer = {
        1,                            
        "Alice Johnson",               
        "alice.johnson@example.com",   
        {"123 Elm Street", "Metropolis", 54321} 
    };

    printCustomer(customer);

    return 0;
}
