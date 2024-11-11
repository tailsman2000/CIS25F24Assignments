#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

std::string doubleToString(double number, int precision = 1) {
    std::ostringstream stream;
    stream << std::fixed << std::setprecision(precision) << number;
    return stream.str();
}

int main() {
    double number = 12.34;

    // Use the helper function to convert the double to a string
    std::string str = doubleToString(number, 1);

    std::cout << str << std::endl;
    return 0;
}
