#include <iostream>
#include <vector>
#include <string>

// Returns a line of dashes of a given length
std::string horizontal_line(const unsigned int& length) {
    std::string line = "";

    for (int i {0}; i < length; i++) {
        line += "-";
    }

    return line;
}

// Converts a string to a vector of characters
std::vector<char> string_to_vector(const std::string& str) {
    std::vector<char> char_vector;

    for (char ch : str) {
        if (ch != ' ') {
            char_vector.push_back(ch);
        }
    }

    return char_vector;
}