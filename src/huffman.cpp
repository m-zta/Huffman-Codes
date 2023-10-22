#include <iostream>
#include <vector>
#include "huffman.hpp"
#include "utility.hpp"

class Huffman {
    private:
        std::vector<char> symbolVector;
        std::vector<double> probabilities;
    public:

        // Constructor
        Huffman(std::vector<char> symbolVector = {}, std::vector<double> probabilities = {})
            : symbolVector {symbolVector}, probabilities {probabilities} {}

        // Prints the symbols and their probabilities
        void printSymbolsAndProbabilities() {
            std::cout << "Symbols and their probabilities:\n";
            for (size_t i {0}; i < symbolVector.size(); i++) {
                std::cout << symbolVector.at(i) << ": " << probabilities.at(i) << "%\n";
            }
        }
};