#include <iostream>
#include <algorithm>
#include "utility.hpp"

// Returns the sum of all elements in a std::vector
double getSum(std::vector<double>& vec) {
    if (vec.empty()) {
        return 0;
    }

    double sum {0};
    for (double i : vec) {
        sum += i;
    }

    return sum;
}

// Makes sure the sum of all elements in a vector is 100
void fitTo100(std::vector<double>& vec) {
    if (getSum(vec) < 100) {
        std::cout << "Sum of probabilities is less than 100. Adding the difference to the last probability.\n";
        vec[vec.size() - 1] += 100 - getSum(vec);
    } else if (getSum(vec) > 100) {
        std::cout << "Sum of probabilities is greater than 100. Subtracting the difference from the last probability.\n";
        vec[vec.size() - 1] -= getSum(vec) - 100;
    }
}

// Returns the base 2 logarithm of a number
double log2(double n) {
    return log(n) / log(2);
}

// Calculates the entropy of a vector
double calculateEntropy(std::vector<double>& vec) {
    double entropy {0};
    for (double i : vec) {
        entropy += (i / 100.0) * log2(100.0 / i);
    }

    return entropy;
}

// Gets the symbols from the user
std::vector<char> getSymbols() {
    std::vector<char> symbolVector;
    while (true) {
        std::cout << "Next character: ";
        char symbol {' '};
        std::cin >> symbol;

        if (symbol == '\n') {
            std::cout << "Invalid input.";
            continue;
        } else if (symbol == '-') {
            std::cout << '\n';
            break;
        } else if (symbol == 'q') {
            exit(0);
        }

        symbolVector.push_back(symbol);
    }

    return symbolVector;
}


std::vector<double> getProbabilities(std::vector<char>& symbolVector) {
    std::vector<double> probabilities;

    for (size_t i {0}; i < symbolVector.size(); ){
        std::cout << "Probability of " << symbolVector.at(i) << ": ";
        double probability {0};
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

    return probabilities;
}
