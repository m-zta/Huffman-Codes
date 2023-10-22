#pragma once 

#include <vector>

class Huffman {
private:
    std::vector<char> symbolVector;
    std::vector<int> probabilities;

public:
    Huffman(std::vector<char> symbolVector = {}, std::vector<int> probabilities = {});

    void getSymbols();

    void getProbabilities();
    
    void printSymbolsAndProbabilities();
};
