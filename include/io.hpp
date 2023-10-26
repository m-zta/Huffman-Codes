#ifndef IO_HPP
#define IO_HPP

#include <iostream>
#include <string>
#include <vector>

#include "io.hpp"
#include "stringify.hpp"

// Prints a string to the console
void print_string(const std::string& str);

// Prints a welcome message
void print_welcome_message();

// Prints a vector of type T
template <typename T>
inline void print_vector(const std::vector<T>& vector) {
    print_string(vector_to_string(vector) + "\n");
}

// Prints a vector of char
template <>
inline void print_vector(const std::vector<char>& vector) {
    print_string(vector_to_string(vector) + "\n");
}

// Prints a row of type T
template <typename T>
inline void print_table_row(const std::string& row_name, const std::vector<T>& row) {
    print_string("| " + row_name + " ");

    for (int i = 0; i < row.size(); i++) {
        print_string("| " + std::to_string(row[i]) + " ");
    }

    print_string("|\n");
}

// Prints a row of characters
template <>
inline void print_table_row(const std::string& row_name, const std::vector<char>& row) {
    print_string("| " + row_name + " ");

    for (int i = 0; i < row.size(); i++) {
        print_string("| " + std::to_string(row[i]) + " ");
    }

    print_string("|\n");
}

#endif // IO_HPP