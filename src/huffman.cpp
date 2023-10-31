#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#include "huffman.hpp"
#include "utility.hpp"
#include "stringify.hpp"
#include "vector_operations.hpp"
#include "io.hpp"

// Constructor
huffman::huffman(std::vector<char> symbols, std::vector<double> probabilities)
    : symbols {symbols}, probabilities {probabilities} {
    // Check if the symbols and probabilities are the same size
    if (symbols.size() != probabilities.size()) {
        print_string("Symbols and probabilities are not the same size!\n");
        return;
    }

    fit_to_100(probabilities);
}

// Prints the table of symbols and their probabilities
void huffman::print_table() {
    unsigned int max_length = get_max_length(labels);

    print_string(horizontal_line(symbols.size() * 10 + 10) + "\n");
    print_table_row("Symbols", max_length, symbols);
    print_table_row("Probabilities", max_length, probabilities);
    print_string(horizontal_line(symbols.size() * 10 + 10) + "\n");
}

// Prints the symbols of the table
void huffman::print_symbols() {
    print_string("Symbols: ");
    print_vector(symbols);
}

// Adds a symbol to the table
void huffman::add_symbol(char symbol) {
    if (std::find(symbols.begin(), symbols.end(), symbol) != symbols.end()) {
        print_string("Symbol already exists in table!\n");
        return;
    }

    symbols.push_back(symbol);
}

// Adds a probability to the table
void huffman::add_probability(double probability) {    
    probabilities.push_back(probability);
}

// Get the symbols from the user
void huffman::get_symbols() {
    // Get the symbols as a string
    print_string("Enter the symbols: ");

    // If test mode is enabled, use the default symbols
    std::string symbols_string {};
    if (this->test_mode) {
        symbols_string = "abcde";
    } else {
        std::getline(std::cin, symbols_string);
    }

    // Convert the symbol string to a vector of chars
    symbols = string_to_vector(symbols_string);
}

// Get the probabilities from the user
void huffman::get_probabilities() {
    if (this->test_mode) {
        for (int i = 0; i < symbols.size(); i++) {
            probabilities.push_back(1.0 / symbols.size());
        }
        return;
    }

    for (int i = 0; i < symbols.size(); i++) {
        print_string("Probability of " + std::string(1, symbols.at(i)) + ": ");
        double probability {};
        std::cin >> probability;
        probabilities.push_back(probability);
    }

    // Normalize the probabilities
    fit_to_100(probabilities);
}