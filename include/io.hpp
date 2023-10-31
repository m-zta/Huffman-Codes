#ifndef IO_HPP
#define IO_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include "io.hpp"
#include "stringify.hpp"

// ==================================================================================
// Method declarations
// ==================================================================================

// Prints a string to the console
void print_string(const std::string& str);

// Prints a welcome message
void print_welcome_message();

// ==================================================================================
// Generic functions
// ==================================================================================

// Prints a vector of type T
template <typename T>
void print_vector(const std::vector<T>& vector) {
    print_string(vector_to_string(vector) + "\n");
}

// Prints a row of type T
template <typename T>
void print_table_row(const std::string& row_name, const unsigned int& max_length, const std::vector<T>& row) {
    unsigned int label_length = row_name.length();

    std::string space {""};
    for (unsigned int i {0}; i < max_length - label_length; i++) {
        space += " ";
    }

    print_string("| " + row_name + space + " ");

    for (int i {0}; i < row.size(); i++) {
        std::string str {"| "};

        if (row_name == "Probabilities") {
            str += std::to_string(std::round(row.at(i) * 100) / 100);
            str += "% ";
        } else {
            str += row.at(i);
        }

        str += " ";
        print_string(str);
    }

    print_string("|\n");
}

#endif // IO_HPP