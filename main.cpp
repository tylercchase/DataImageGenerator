#include <iostream>
#include <fstream>
#include <vector>

#include "BinaryConvert.hpp"
int main() {


    std::cout << "Enter a string to put into a barcode" << std::endl;
    std::string userInput;
    getline(std::cin, userInput);


    std::ofstream outfile ("test.ppm");

    std::vector<std::vector<int>> dataPoints;

    outfile << "P2\n"
               "24 8\n"
               "15\n"
               "0  15  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
               "0  0  3  3  3  0  0  7  7  7  7  0  0 11 11 11 11  0  0 15 15 15 15  0\n"
               "0  15  0  0  0  0  0  7  0  0  0  0  0 11  0  0  0  0  0 15  0  0 15  0\n"
               "0  15  3  3  0  0  0  7  7  7  0  0  0 11 11 11  0  0  0 15 15 15 15  0\n"
               "0  0  0  0  0  0  0  7  0  0  0  0  0 11  0  0  0  0  0 15  0  0  0  0\n"
               "0  15  0  0  0  0  0  7  7  7  7  0  0 11 11 11 11  0  0 15  0  0  0  0\n"
               "0  15  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
               "0  15  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0"<< std::endl;

    outfile.close();
    return 0;
}