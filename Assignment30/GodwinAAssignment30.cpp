#include <iostream>
#include "TextBox.hpp"

int main() {
    TextBox defaultTextBox;
    std::cout << "Default TextBox value: " << defaultTextBox.getValue() << std::endl;

    TextBox customTextBox("Hello, World!");
    std::cout << "Custom TextBox value: " << customTextBox.getValue() << std::endl;

    customTextBox.setValue("Updated Value");
    std::cout << "Updated TextBox value: " << customTextBox.getValue() << std::endl;

    return 0;
}
