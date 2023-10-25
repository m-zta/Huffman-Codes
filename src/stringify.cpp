#include <string>

// Returns a line of dashes of a given length
std::string horizontal_line(const unsigned int& length) {
    std::string line = "";

    for (int i {0}; i < length; i++) {
        line += "-";
    }

    return line;
}