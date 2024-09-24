#include <iostream>

void printBinary(int num) {
    if (num == 0) {
        std::cout << "0";
        return;
    }

    // Storing the binary representation in reverse order
    std::string binary;
    
    while (num > 0) {
        binary += (num % 2) ? '1' : '0'; // Append '1' or '0' to the string
        num /= 2;
    }

    // Print the binary representation in reverse order
    for (int i = binary.length() - 1; i >= 0; --i) {
        std::cout << binary[i];
    }
    std::cout << std::endl;
}

int main() {
    int number;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Check for positive integer
    if (number < 1) {
        std::cerr << "Please enter a positive integer." << std::endl;
        return 1;
    }

    std::cout << "Binary representation: ";
    printBinary(number);

    return 0;
}
