// DATAPARSER_H
#pragma once
#ifndef DATAPARSER_H
#define DATAPARSER_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <tuple>
#include <sstream>


namespace aoc {
    std::tuple<std::vector<int>, std::vector<int>> twoColsParser(std::string inputPath);
    std::vector<std::vector<int>> stringToIntTab(std::string inputPath);
    std::string txtToString(std::string inputPath);
}

#endif // DATAPARSER_H