#include "TextBox.hpp"

TextBox::TextBox() : value("") {}

TextBox::TextBox(const std::string& initialValue) : value(initialValue) {}

std::string TextBox::getValue() const {
    return value;
}

void TextBox::setValue(const std::string& newValue) {
    value = newValue;
}
