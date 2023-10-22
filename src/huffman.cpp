#include <iostream>
#include <vector>
#include "huffman.hpp"
#include "utility.hpp"

// Constructor
huffman::huffman(std::vector<char> symbolVector, std::vector<double> probabilities)
    : symbolVector {symbolVector}, probabilities {probabilities} {}

// Prints the symbols and their probabilities
void huffman::printSymbolsAndProbabilities() {
    std::cout << "Symbols and their probabilities:\n";
    for (size_t i {0}; i < symbolVector.size(); i++) {
        std::cout << symbolVector.at(i) << ": " << probabilities.at(i) << "%\n";
    }
}
