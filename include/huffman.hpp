#pragma once 

#include <vector>

class huffman {
private:
    std::vector<char> symbolVector;
    std::vector<double> probabilities;

public:
    huffman(std::vector<char> symbolVector = {}, std::vector<double> probabilities = {});

    void getSymbols();

    void getProbabilities();
    
    void printSymbolsAndProbabilities();
};
