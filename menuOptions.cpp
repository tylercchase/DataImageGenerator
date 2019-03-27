//
// Created by tyler on 3/26/19.
//

#include <iostream>

#include "dataCoding.hpp"

void menuEncode(){


    std::cout << "Enter a string to put into a barcode" << std::endl;
    std::string userInput;
    getline(std::cin, userInput);

    std::cout << "Enter a file to decode" << std::endl;
    std::string userFile;
    getline(std::cin, userFile);



    encodeImage(userFile, userInput);

}
void menuDecode(){

    std::cout << "Enter a file to decode" << std::endl;
    std::string userInput;
    getline(std::cin, userInput);
    std::string output = decodeImage(userInput);
    std::cout << output << std::endl;

}
