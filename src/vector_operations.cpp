#include <iostream>
#include <vector>
#include <algorithm>

// Returns the sum of all elements in a std::vector
double get_sum(std::vector<double>& vec) {
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
bool fit_to_100(std::vector<double>& vec) {
    double sum {get_sum(vec)};

    if (sum - 100.0 < 0.0001) {
        return false;
    }

    for (double& i : vec) {
        i = (i / sum) * 100;
    }

    return true;
}

// Returns the maximum length of a string in a std::vector
unsigned int get_max_length(const std::vector<std::string>& vec) {
    unsigned int max_length {0};

    for (std::string i : vec) {
        if (i.length() > max_length) {
            max_length = i.length();
        }
    }

    return max_length;
}