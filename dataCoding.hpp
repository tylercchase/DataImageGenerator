//
// Created by tyler on 3/26/19.
//

#ifndef QRCODE_DATACODING_HPP
#define QRCODE_DATACODING_HPP

void encodeImage(const std::string &outputFile, std::string &dataPoints);

std::string decodeImage(const std::string &inputFile);

#endif //QRCODE_DATACODING_HPP
