//
// Created by tyler on 3/26/19.
//

#include <fstream>
#include <istream>
#include <vector>
#include <iostream>
#include <bitset>
#include <algorithm>
#include <sstream>
#include "dataCoding.hpp"

void encodeImage(const std::string &outputFile, std::vector<std::string> &dataPoints) {
    std::ofstream outfile(outputFile);


    outfile << "P2\n"
               "8 " << dataPoints.size() /* File only needs to be as tall as the amount of characters within string */
            << "\n"
               "1\n";

    for (std::string &character : dataPoints) {
        for (char &c : character) {
            outfile << c << " ";
        }
        outfile << "\n";
    }
    outfile << std::endl;

    outfile.close();

}

std::string decodeImage(const std::string &inputFile) {

    std::ifstream infile(inputFile);
    std::string fileLine;

    for (int c = 0; c < 3; ++c) {
        getline(infile, fileLine);
    }

    std::string output;

    while (getline(infile, fileLine)) {
        std::istringstream iss(fileLine);
        std::string processingString;
        if (!(iss >> processingString)) { break; }
        processingString = iss.str();
        processingString.erase(std::remove(processingString.begin(), processingString.end(), ' '), processingString.end());
        unsigned long decimal = std::bitset<8>(processingString).to_ulong();
        output += (char)decimal;

    }

    std::cout << output << std::endl;
    infile.close();

}