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
    : symbols {symbols}, probabilities {probabilities} {}

// Prints the table of symbols and their probabilities
void huffman::print() {
    printString(horizontal_line(symbols.size() * 10 + 10) + "\n");
    print_table_row(symbols, "Symbols");
    print_table_row(probabilities, "Probabilities");
    printString(horizontal_line(symbols.size() * 10 + 10) + "\n");
}

// Adds a symbol to the table
void huffman::add_symbol(char symbol) {
    symbols.push_back(symbol);
}

// Adds a probability to the table
void huffman::add_probability(double probability) {
    probabilities.push_back(probability);
}