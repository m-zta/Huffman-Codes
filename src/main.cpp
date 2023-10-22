#include <iostream>
#include <vector>
#include "huffman.hpp"
#include "utility.hpp"

int main() {
    std::cout << "Hello!" << std::endl;

    std::vector<char> symbolVector = getSymbols();
    std::vector<double> probVector = getProbabilities(symbolVector);
    double entropy = calculateEntropy(probVector);

    std::cout << entropy << std::endl;

    return 0;
}