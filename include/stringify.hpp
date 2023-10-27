#ifndef STRINGIFY_HPP
#define STRINGIFY_HPP

#include <string>
#include <vector>


// ==================================================================================
// Method declarations
// ==================================================================================

// Returns a line of dashes of a given length
std::string horizontal_line(const unsigned int& length);

// Converts a string to a vector of characters
std::vector<char> string_to_vector(const std::string& str);

// ==================================================================================
// Generic functions
// ==================================================================================

// Converts a vector of type T to a string
template <typename T>
std::string vector_to_string(const std::vector<T>& vector) {
    unsigned int length = vector.size();
    std::string str = "[ ";

    for (unsigned int i {0}; i < length; i++) {
        str += vector.at(i);  // Directly append the character
        str += ", ";
    }

    str.pop_back(); // Remove the last space
    str.pop_back(); // Remove the last comma
    str += " ]";   // Add the closing bracket

    return str;
}


#endif // STRINGIFY_HPP