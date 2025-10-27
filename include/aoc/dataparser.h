// DATAPARSER_H
#pragma once
#ifndef DATAPARSER_H
#define DATAPARSER_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <tuple>

namespace aoc {
    std::tuple<std::vector<int>, std::vector<int>> twoColsParser(std::string inputPath);
}

#endif // DATAPARSER_H