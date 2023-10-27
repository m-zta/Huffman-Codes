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

    huffman huffman_table {{}, {}};

    // Get the symbols as a string from the user
    huffman_table.get_symbols();

    // Print the symbols
    huffman_table.print_symbols();

    // Get the probabilities
    huffman_table.get_probabilities();

    // Print the Huffman table
    huffman_table.print_table();

    // Calculate the entropy

    // Print the entropy

    // Calculate the binary code

    // Calculate the average code length for the binary code

    // Calculate the huffman code

    // Calculate the average code length for the huffman code

    // Print the average code length

    return 0;
}