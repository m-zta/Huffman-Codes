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

// NOTE: Defined in the .hpp file
// Converts a vector to a string
// template <typename T>
// std::string vector_to_string(const std::vector<T>& vector) {
//     unsigned int length = vector.size();
//     std::string str = "[ ";

//     for (unsigned int i {0}; i < length - 1; i++) {
//         str += std::to_string(vector.at(i)) + ", ";
//     }

//     str += std::to_string(vector.at(length - 1)) + " ]";

//     return str;
// }

// NOTE: Defined in the .hpp file
// Converts a vector of type T to a string
// template <typename T>
// std::string vector_to_string(const std::vector<T>& vector) {
//     unsigned int length = vector.size();
//     std::string str = "[ ";

//     for (unsigned int i {0}; i < length - 1; i++) {
//         str += std::to_string(vector.at(i)) + ", ";
//     }

//     str += std::to_string(vector.at(length - 1)) + " ]";

//     return str;
// }