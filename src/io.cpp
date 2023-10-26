#include <iostream>
#include <string>
#include <vector>

#include "io.hpp"
#include "stringify.hpp"

// Prints a string to the console
void print_string(const std::string& str) {
    std::cout << str;
}

// Prints a welcome message
void print_welcome_message() {
    print_string("==================================\n");
    print_string("Welcome to the Huffman Calculator!\n");
    print_string("==================================\n\n");
}

// NOTE: Defined in the .hpp file
// Prints a vector of char
// template <>
// void print_vector(const std::vector<char>& vector) {
//     print_string(vector_to_string(vector) + "\n");
// }

// NOTE: Defined in the .hpp file
// Prints a vector of type T
// template <typename T>
// void print_vector(const std::vector<T>& vector) {
//     print_string(vector_to_string(vector) + "\n");
// }

// NOTE: Defined in the .hpp file
// Prints a row of type T
// template <typename T>
// void print_table_row(std::vector<T> row, std::string row_name) {
//     print_string("| " + row_name + " ");

//     for (int i = 0; i < row.size(); i++) {
//         print_string("| " + std::to_string(row[i]) + " ");
//     }

//     print_string("|\n");
// }

// NOTE: Defined in the .hpp file
// Prints a row of characters
// template <>
// void print_table_row(std::vector<char> row, std::string row_name) {
//     print_string("| " + row_name + " ");

//     for (int i = 0; i < row.size(); i++) {
//         print_string("| " + std::to_string(row[i]) + " ");
//     }

//     print_string("|\n");
// }