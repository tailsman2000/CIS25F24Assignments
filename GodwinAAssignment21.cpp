#include <iostream>
#include <memory> 

void fillArray(std::unique_ptr<int[]>& arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1; // Fill with 1, 2, 3, ..., size
    }
}

void printSum(const std::unique_ptr<int[]>& arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    std::cout << "Sum of array elements: " << sum << std::endl;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::unique_ptr<int[]> arr = std::make_unique<int[]>(size);

    fillArray(arr, size);

    printSum(arr, size);

    return 0;
}
