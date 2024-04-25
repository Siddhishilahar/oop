#include <vector>
#include <sstream>
#include <string>
#include <iostream>

std::vector<int> parseInts(const std::string& str) {
    std::stringstream ss(str);  // Create a stringstream object using the input string
    std::vector<int> result;    // Vector to store the parsed integers
    int number;                 // Temporary variable to store the integers
    char ch;                    // Temporary variable to discard the commas

    // While the stringstream has more data to process
    while (ss >> number) {
        result.push_back(number);  // Add the integer to the vector
        ss >> ch;                  // Read and discard the comma
    }

    return result;  // Return the vector of parsed integers
}

int main() {
    std::string input;
    std::getline(std::cin, input);  // Read a line of input from stdin

    std::vector<int> integers = parseInts(input);  // Parse the string into integers

    // Print out the integers
    for (int num : integers) {
        std::cout << num << std::endl;
    }

    return 0;
}
