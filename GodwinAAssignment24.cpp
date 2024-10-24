#include <iostream>
#include <string>
using namespace std;

struct Customer {
    int customerID;
    string name;
    string email;
};

void printCustomer(const Customer& customer) {
    cout << "Customer ID: " << customer.customerID 
         << ", Name: " << customer.name 
         << ", Email: " << customer.email << endl;
}

int main() {
    Customer customer;

    cout << "Enter Customer ID: ";
    cin >> customer.customerID;
    cin.ignore();  

    cout << "Enter Customer Name: ";
    getline(cin, customer.name);

    cout << "Enter Customer Email: ";
    getline(cin, customer.email);

    // Print the result
    printCustomer(customer);

    return 0;
}
