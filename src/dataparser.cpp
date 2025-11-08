#include "aoc/dataparser.h"

namespace aoc
{
    std::tuple<std::vector<int>, std::vector<int>> twoColsParser(std::string inputPath)
    {
        int num1, num2;
        std::vector<int> list1, list2;
        std::string inputLine;
        std::ifstream inputFile(inputPath);

        while (getline(inputFile, inputLine))
        {
            num1 = stoi(inputLine.substr(0, inputLine.find(" ")));
            num2 = stoi(inputLine.substr(inputLine.find(" ") + 3, inputLine.size() - 1));

            list1.push_back(num1);
            list2.push_back(num2);
        }

        inputFile.close();

        return {list1, list2};
    }

    std::vector<std::vector<int>> stringToIntTab(std::string inputPath)
    {
        std::ifstream inputFile(inputPath);
        std::string inputLine;
        int number;

        std::vector<std::vector<int>> input;

        while (getline(inputFile, inputLine))
        {
            std::stringstream iss(inputLine);
            std::vector<int> line;

            while (iss >> number)
            {
                line.push_back(number);
            }
            input.push_back(line);
        }

        inputFile.close();
        return input;
    }

    std::string txtToString(std::string inputPath)
    {
        std::ifstream inputFile(inputPath);
        std::string input;
        char c;

        while (inputFile.get(c))
        {
            input += c;
        }
        inputFile.close();

        return input;
    }
    
}