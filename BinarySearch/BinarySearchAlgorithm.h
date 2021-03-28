#pragma once
#include <iostream>

#define Log(x) std::cout << x << std::endl;

class BinarySearchResult {
public:
    bool found;
    int position, steps;
};

BinarySearchResult binarySearch(const int const array[], const int const value, const int const lenght);