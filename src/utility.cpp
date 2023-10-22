#include <iostream>
#include <algorithm>
#include "utility.hpp"

// Returns the sum of all elements in a std::vector
int getSum(std::vector<int>& vec) {
    if (vec.empty()) {
        return 0;
    }

    int sum {0};
    for (int i : vec) {
        sum += i;
    }

    return sum;
}

// Makes sure the sum of all elements in a vector is 100
void fitTo100(std::vector<int>& vec) {
    if (getSum(vec) < 100) {
        std::cout << "Sum of probabilities is less than 100. Adding the difference to the last probability.\n";
        vec[vec.size() - 1] += 100 - getSum(vec);
    } else if (getSum(vec) > 100) {
        std::cout << "Sum of probabilities is greater than 100. Subtracting the difference from the last probability.\n";
        vec[vec.size() - 1] -= getSum(vec) - 100;
    }
}