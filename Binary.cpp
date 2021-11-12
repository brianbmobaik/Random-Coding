// This code outputs the binary of a decimal number given
#include <iostream>
#include <vector>

const int TWO = 2;

std::vector<int> binaryVector(int wholeNumber);

int main()
{
    int decimal;
    std::vector<int> binary;
    std::string userPrompt = "Please enter a number in decimal: ";

    std::cout << userPrompt;
    std::cin >> decimal;

    binary = binaryVector(decimal);

    for(int i = 0; i < binary.size(); i++)
    {
        std::cout << binary[binary.size() - i - 1];
    }

    std::cout << std::endl;
}

std::vector<int> binaryVector(int wholeNumber)
{
    std::vector<int> binary;
    while(wholeNumber != 0)
    {
        binary.push_back(wholeNumber % TWO);
        wholeNumber /= TWO;
    }

    return binary;
}
