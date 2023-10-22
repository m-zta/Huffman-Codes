#include <iostream>
#include <vector>
#include "huffman.hpp"
#include "utility.hpp"

int main() {
    std::cout << "Hello!" << std::endl;

    std::vector<char> symbolVector = getSymbols();
    printVector(symbolVector);
    std::vector<double> probVector = getProbabilities(symbolVector);

    huffman huf {symbolVector, probVector};

    double entropy = calculateEntropy(probVector);

    std::cout << entropy << std::endl;

    return 0;
}