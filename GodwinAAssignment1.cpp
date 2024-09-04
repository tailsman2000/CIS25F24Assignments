#include <iostream>

using namespace std;
// Write a function that swaps 2 integers
int main()
{
    int num1 = 1;
    int num2 = 2;
    int temp =  num1;
    num1 = num2;
    num2 = temp;

    cout << "This number should be 1: " << num2 << endl;
    cout << "This number should be 2: " << num1;
    return 0;
}