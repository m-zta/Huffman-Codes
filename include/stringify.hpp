#ifndef STRINGIFY_HPP
#define STRINGIFY_HPP

#include <string>

// Returns a line of dashes of a given length
std::string horizontal_line(const unsigned int& length);

// Converts a string to a vector of characters
std::vector<char> string_to_vector(const std::string& str);

// Converts a vector of type T to a string
template <typename T>
inline std::string vector_to_string(const std::vector<T>& vector) {
    unsigned int length = vector.size();
    std::string str = "\n[ ";

    for (unsigned int i {0}; i < length - 1; i++) {
        str += vector.at(i);  // Directly append the character
        str += ", ";
    }

    str += vector.at(length - 1);  // Directly append the last character
    str += " ]";

    return str;
}

// Converts a vector of char to a string
template <>
inline std::string vector_to_string(const std::vector<char>& vector) {
    unsigned int length = vector.size();
    std::string str = "\n[ ";

    for (unsigned int i {0}; i < length - 1; i++) {
        str += vector.at(i);  // Directly append the character
        str += ", ";
    }

    str += vector.at(length - 1);  // Directly append the last character
    str += " ]";

    return str;
}

#endif // STRINGIFY_HPP