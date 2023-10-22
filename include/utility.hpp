#include <vector>

double getSum(std::vector<double>& vec);

void fitTo100(std::vector<double>& vec);

double calculateEntropy(std::vector<double>& vec);

double log2(double n);

std::vector<char> getSymbols();

std::vector<double> getProbabilities(std::vector<char>& symbolVector);

// Prints a vector
template <typename T>
void printVector(std::vector<T>& vec) {
    for (T i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}