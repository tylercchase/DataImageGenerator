#include <iostream>
#include <fstream>
#include <vector>
#include <bitset>
#include "dataCoding.hpp"

int main() {


    std::cout << "Enter a string to put into a barcode" << std::endl;
    std::string userInput;
    getline(std::cin, userInput);

    std::vector<std::string> dataPoints;


    //Convert every character into binary with leading zeros
    for (char &c : userInput) {
        dataPoints.push_back(std::bitset<8>((unsigned long long int) (c)).to_string());
    }


    //Print out all the binary translation
    for (std::string &r : dataPoints) {
        std::cout << r << std::endl;
    }

    encodeImage("test.ppm", dataPoints);

    decodeImage("test.ppm");
    //To eventually convert back to string
    //

//                .ppm File template
//               "0  1  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  0  0  0  0  0  0  1  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  1  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  1  0\n"
//               "0  1  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  0  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  1  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  1  0  0  0  0  0  1  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  1  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0"<< std::endl;

    return 0;
}