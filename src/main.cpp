#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "huffman.hpp"
#include "utility.hpp"
#include "stringify.hpp"
#include "vector_operations.hpp"
#include "io.hpp"

int main() {
    // Print the welcome message
    print_welcome_message();

    // Get the symbols as a string from the user
    print_string("Enter the symbols: ");
    std::string symbols_string {};
    std::getline(std::cin, symbols_string);

    // std::vector<char> test {};
    // for (char ch : symbols_string) {
    //     test.push_back(ch);
    // }

    // for (char ch : test) {
    //     std::cout << ch << ' ' << std::endl;
    // }

    // Convert the symbol string to a vector of chars
    std::vector<char> symbols = string_to_vector(symbols_string);
    print_vector(symbols);

    // Get the probabilities

    // Create the Huffman table

    // Print the Huffman table

    // Calculate the entropy

    // Print the entropy

    // Calculate the binary code

    // Calculate the average code length for the binary code

    // Calculate the huffman code

    // Calculate the average code length for the huffman code

    // Print the average code length

    return 0;
}