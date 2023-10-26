#include <cmath>
#include <vector>
#include "vector_operations.hpp"

// Calculates the entropy of a vector
double calculate_entropy(std::vector<double>& vec) {
    double entropy {0};
    for (double i : vec) {
        entropy += (i / 100.0) * log2(100.0 / i);
    }

    return entropy;
}
