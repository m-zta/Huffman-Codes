#include <iostream>
#include <vector>
#include "huffman.hpp"

class Huffman {
    private:
        std::vector<char> symbolVector;
        std::vector<int> probabilities;
    public:

        // Constructor
        Huffman(std::vector<char> symbolVector = {}, std::vector<int> probabilities = {})
            : symbolVector {symbolVector}, probabilities {probabilities} {
                std::cout << "Enter your characters and probabilities. Enter '-' when finished or 'q' to quit.\n";
                getSymbols();
                getProbabilities();
            }

        // Get the symbols from the user
        void getSymbols() {
            while (true) {
                std::cout << "Next character: ";
                char symbol {' '};
                std::cin >> symbol;

                if (symbol == '\n') {
                    std::cout << "Invalid input.";
                    continue;
                } else if (symbol == '-') {
                    break;
                } else if (symbol == 'q') {
                    exit(0);
                }

                symbolVector.push_back(symbol);
            }
        }

        // Gets the probabilities of each symbol from the user
        void getProbabilities() {
            std::cout << "Enter the probabilities of each character. Enter '-1' to quit.\n";

            for (size_t i {0}; i < symbolVector.size(); ){
                std::cout << "Probability of " << symbolVector.at(i) << ": ";
                int probability {0};
                std::cin >> probability;

                if (probability < 0 || 100 < probability) {
                    std::cout << "Invalid input. Try again or enter '-1' to quit.\n";
                    continue;
                } else if (probability == -1) {
                    exit(0);
                }

                probabilities.push_back(probability);
                i++;
            }

            fitTo100(probabilities);
        }

        // Prints the symbols and their probabilities
        void printSymbolsAndProbabilities() {
            std::cout << "Symbols and their probabilities:\n";
            for (size_t i {0}; i < symbolVector.size(); i++) {
                std::cout << symbolVector.at(i) << ": " << probabilities.at(i) << "%\n";
            }
        }


};