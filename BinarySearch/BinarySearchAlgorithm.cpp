#include <iostream>

class BinarySearchResult {
public:
    bool found;
    int position, steps;
};

BinarySearchResult binarySearch(const int const array[], const int const value, const int const lenght) {
    int midPos = lenght / 2;
    int min = 0, max = lenght, steps = 0;
    BinarySearchResult binarySearchResult;

    while (max >= min)
    {
        midPos = (min + max) / 2;
        steps++;


        if (array[midPos] == value) {
            binarySearchResult.found = true;
            binarySearchResult.position = midPos;
            binarySearchResult.steps = steps;
            return binarySearchResult;
        }
        else if (value > array[midPos]) {
            // Right half
            min = midPos + 1;
        }
        else {
            // Left half
            max = midPos - 1;
        }
    }
    // The value is not in the array
    binarySearchResult.found = false;
    binarySearchResult.position = -1;
    binarySearchResult.steps = steps;
    return binarySearchResult;
}