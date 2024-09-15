# include <iostream>

using namespace std;

int main (){

    // Given code
    // int x = 10;
    // int y = 3;
    // double z = x / y; 
    // cout << z;
    // return 0;

    // Modified code that changes z from an int to a double
    int x = 10;
    int y = 3;
    double z = x / static_cast<double>(y);
    cout << z;
    return 0;
}