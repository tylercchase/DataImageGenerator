#include <iostream>
#include <fstream>
#include <vector>
#include <bitset>

int main() {


    std::cout << "Enter a string to put into a barcode" << std::endl;
    std::string userInput;
    getline(std::cin, userInput);

    std::vector<std::string> dataPoints;

    std::ofstream outfile ("test.ppm");


    for(char & c : userInput){
        dataPoints.push_back(std::bitset<8>((unsigned long long int)(c)).to_string());
    }

    for(std::string & r : dataPoints){
        std::cout << r << std::endl;
    }

    outfile << "P2\n"
               "8 " << dataPoints.size() << "\n"
               "1\n";

    for(std::string & character : dataPoints){
        for(char & c : character){
            outfile << c << " ";
        }
        outfile << "\n";
    }
    outfile << std::endl;

//
//               "0  1  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  0  0  0  0  0  0  1  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  1  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  1  0\n"
//               "0  1  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  0  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  1  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  1  0  0  0  0  0  1  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0\n"
//               "0  1  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0"<< std::endl;

    outfile.close();
    return 0;
}