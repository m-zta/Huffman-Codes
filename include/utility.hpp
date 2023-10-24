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
    unsigned int n = vec.size();
    if (!n) {
        return;
    }

    std::cout << "[ ";

    for (unsigned int i {0}; i < n - 1; i++) {
        std::cout << vec.at(i) << ", ";
    }

    std::cout << vec.at(n - 1) << " ]\n";
}
