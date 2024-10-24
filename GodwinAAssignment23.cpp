#include <iostream>
#include <cctype>
#include <cstring>

bool validateCustomerNumber(const char* customerNumber) {
    // Check if the length is exactly 6
    if (std::strlen(customerNumber) != 6) {
        return false;
    }

    // Check if the first two characters are alphabetic
    if (!std::isalpha(customerNumber[0]) || !std::isalpha(customerNumber[1])) {
        return false;
    }

    // Check if the next four characters are digits
    for (int i = 2; i < 6; ++i) {
        if (!std::isdigit(customerNumber[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    const char customerNumber[] = "AB1234";

    if (validateCustomerNumber(customerNumber)) {
        std::cout << "Valid customer number." << std::endl;
    } else {
        std::cout << "Invalid customer number." << std::endl;
    }

    return 0;
}
