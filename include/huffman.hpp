#ifndef HUFFMAN_HPP
#define HUFFMAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#include "utility.hpp"
#include "vector_operations.hpp"
#include "io.hpp"
#include "stringify.hpp"

class huffman {
    private:
        std::vector<char> symbols;
        std::vector<double> probabilities;
        const bool test_mode {false};

    public:
        // Constructor
        huffman(std::vector<char> symbols, std::vector<double> probabilities);

        // Prints the table of symbols and their probabilities
        void print_table();

        // Prints the symbols of the table
        void print_symbols();

        // Adds a symbol to the table
        void add_symbol(char symbol);

        // Adds a probability to the table
        void add_probability(double probability);

        // Get the symbols from the user
        void get_symbols();

        // Get the probabilities from the user
        void get_probabilities();
};

#endif // HUFFMAN_HPP