#include <iostream>

int main() {
    int size;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    std::cout << "Sum of the array elements: " << sum << std::endl;

    delete[] arr;

    return 0;
}
