#include <iostream>

bool isArrayFull(const int* array, int currentSize, int maxSize) {
    return currentSize = currentSize >= maxSize;
}

int main() {
    const int maxSize = 5;
    int currentSize = 4; // Current number of elements in the array
    int myArray[maxSize] = {1, 2, 3, 4, 5}; // Fixed-size array

    if (isArrayFull(myArray, currentSize, maxSize)) {
        std::cout << "Array is full" << std::endl;
    } else {
        std::cout << "Array is not full" << std::endl;
    }
    
    // Testing with fewer elements
    currentSize = 5;
    if (isArrayFull(myArray, currentSize, maxSize)) {
        std::cout << "Array is full" << std::endl;
    } else {
        std::cout << "Array is not full" << std::endl;
    }

    return 0;
}
