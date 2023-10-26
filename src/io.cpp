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
// Print a vector
// template <typename T>
// void print_vector(const std::vector<T>& vector) {
//     print_string(vector_to_string(vector) + "\n");
// }

// NOTE: Defined in the .hpp file
// Prints the table of symbols and their probabilities
// template <typename T>
// void print_table_row(std::vector<T> row, std::string row_name) {
//     print_string("| " + row_name + " ");

//     for (int i = 0; i < row.size(); i++) {
//         print_string("| " + row[i] + " ");
//     }

//     print_string("|\n");
// }

