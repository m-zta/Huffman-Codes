#include <iostream>
#include <vector>
#include <algorithm>

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

// Scales the elements of the vector to a sum of 100
bool fitTo100(std::vector<double>& vec) {
    double sum {getSum(vec)};

    if (sum - 100.0 < 0.0001) {
        return false;
    }

    for (double& i : vec) {
        i = (i / sum) * 100;
    }

    return true;
}