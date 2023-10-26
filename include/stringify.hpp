#ifndef STRINGIFY_HPP
#define STRINGIFY_HPP

#include <string>

// Returns a line of dashes of a given length
std::string horizontal_line(const unsigned int& length);

// Converts a string to a vector of characters
std::vector<char> string_to_vector(const std::string& str);

// Converts a vector to a string
template <typename T>
std::string vector_to_string(const std::vector<T>& vector) {
    unsigned int length = vector.size();
    std::string str = "[ ";

    for (unsigned int i {0}; i < length - 1; i++) {
        str += std::to_string(vector.at(i)) + ", ";
    }

    str += std::to_string(vector.at(length - 1)) + " ]";

    return str;
}

#endif // STRINGIFY_HPP