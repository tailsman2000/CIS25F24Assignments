#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;  // Store the value at address a
    *a = *b;        // Assign the value at address b to address a
    *b = temp;      // Assign the stored value (from a) to address b
}

int main() {
    int x = 10;
    int y = 20;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    // Call the swap function
    swap(&x, &y);

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}
