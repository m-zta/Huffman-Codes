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
