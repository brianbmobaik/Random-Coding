// This code outputs the binary of a decimal number given
#include <iostream>
#include <vector>

// Constant
const int TWO = 2;

// Function Prototype
std::vector<int> binaryVector(int wholeNumber);

int main()
{
    // Variables
    int decimal;
    std::vector<int> binary;
    std::string userPrompt = "Please enter an integer number in decimal: ";

    // Prompt user to input an integer
    std::cout << userPrompt;
    std::cin >> decimal;

    // Convert the input integer to binary
    binary = binaryVector(decimal);

    // Output the Binary
    for(int i = 0; i < binary.size(); i++)
    {
        std::cout << binary[binary.size() - i - 1];
    }

    std::cout << std::endl;
}

// This function converts an integer to binary
std::vector<int> binaryVector(int wholeNumber)
{
    // Variable
    std::vector<int> binary;
    
    // Converts given integer to binary
    while(wholeNumber != 0)
    {
        // Push back each remainder
        binary.push_back(wholeNumber % TWO);
        wholeNumber /= TWO;
    }

    // Return the binary
    return binary;
}
