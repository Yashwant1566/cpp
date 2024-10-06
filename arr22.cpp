#include <iostream>

// bool insertElement(int* array, int& currentSize, int maxSize, int index, int value) {
//     if (currentSize >= maxSize) {
//         std::cout << "Array is full. Cannot insert new element." << std::endl;
//         return false; // Cannot insert as the array is full
//     }m

//     if (index < 0 || index > currentSize) {
//         std::cout << "Invalid index." << std::endl;
//         return false; // Index is out of bounds
//     }

//     // Shift elements to the right to make room for the new element
//     for (int i = currentSize; i > index; --i) {
//         array[i] = array[i - 1];
//     }

//     // Insert the new element
//     array[index] = value;
//     ++currentSize; // Increase the size

//     return true;
// }

// int main() {
//     const int maxSize = 10;
//     int array[maxSize] = {1, 2, 3, 4, 5};
//     int currentSize = 5;

//     int index = 5;
//     int value = 99;

//     if (insertElement(array, currentSize, maxSize, index, value)) {
//         std::cout << "Element inserted successfully." << std::endl;
//         for (int i = 0; i < currentSize; ++i) {
//             std::cout << array[i] << " ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }
