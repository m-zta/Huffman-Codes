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

    public:
        // Constructor
        huffman(std::vector<char> symbols, std::vector<double> probabilities);

        // Prints the table of symbols and their probabilities
        void print();

        // Adds a symbol to the table
        void add_symbol(char symbol);

        // Adds a probability to the table
        void add_probability(double probability);
};

#endif // HUFFMAN_HPP