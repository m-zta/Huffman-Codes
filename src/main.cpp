#include <iostream>
#include <vector>
#include "huffman.hpp"
#include "utility.hpp"

int main() {
    std::cout << "First enter the characters, than the corresponding probabilites:\n";
    std::vector<char> symbolVector {};
    printVector(symbolVector);
    
    symbolVector = getSymbols();
    printVector(symbolVector);
    std::vector<double> probVector = getProbabilities(symbolVector);

    huffman huf {symbolVector, probVector};

    double entropy = calculateEntropy(probVector);

    std::cout << "Entropy:\tH(X) = " << entropy << std::endl;

    return 0;
}
