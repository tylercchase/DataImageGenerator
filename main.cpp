#include <iostream>
#include "menuOptions.hpp"

int main() {

    while (true) {

        std::cout << "1. Encode text\n"
                     "2. Decode Image\n"
                     "3. Exit" <<
                  std::endl;
        std::string userInput;
        std::getline(std::cin, userInput);
        int menuOption = std::stoi(userInput);
        if (menuOption == 1) {
            menuEncode();
        } else if (menuOption == 2) {
            menuDecode();
        } else if (menuOption == 3) {
            break;
        }
    }


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