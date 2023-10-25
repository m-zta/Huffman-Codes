#include <iostream>
#include <string>

// Prints a string to the console
void printString(const std::string& str);

// Prints a welcome message
void print_welcome_message();

// Prints the table of symbols and their probabilities
template <typename T>
void print_table_row(std::vector<T> row, std::string row_name) {
    printString("| " + row_name + " ");

    for (int i {0}; i < row.size(); i++) {
        printString("| " + row[i] + " ");
    }

    printString("|\n");
}