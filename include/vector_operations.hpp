#ifndef VECTOR_OPERATIONS_HPP
#define VECTOR_OPERATIONS_HPP

#include <iostream>
#include <vector>
#include <algorithm>

// Returns the sum of all elements in a std::vector
double get_sum(std::vector<double>& vec);

// Scales the elements of the vector to a sum of 100
bool fit_to_100(std::vector<double>& vec);

unsigned int get_max_length(const std::vector<std::string>& vec);

#endif // VECTOR_OPERATIONS_HPP