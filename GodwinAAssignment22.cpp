#include <iostream>
#include <cstring>

void extractFirstAndLastName(const char* fullName, char* firstName, char* lastName) {
    // Copy the fullName to a temporary buffer for manipulation
    char temp[100];
    std::strcpy(temp, fullName);

    // Use strtok to split by spaces and extract first and last names
    char* token = std::strtok(temp, " ");
    
    std::strcpy(firstName, token);
    
    // Continue getting tokens until the last one (which will be the last name)
    char* lastToken = token;
    while (token != nullptr) {
        lastToken = token;
        token = std::strtok(nullptr, " ");
    }
    
    std::strcpy(lastName, lastToken);
}

int main() {
    const char fullName[] = "John Michael Doe";
    char firstName[50];
    char lastName[50];

    extractFirstAndLastName(fullName, firstName, lastName);

    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;

    return 0;
}
