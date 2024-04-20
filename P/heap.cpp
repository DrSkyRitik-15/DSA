#include <iostream>
#include <vector>
#include <algorithm>

void printArray(std::vector<int>& arr) {
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> arr = {60, 20, 40, 70, 30, 10};

    // Convert the vector into a Max Heap
    std::make_heap(arr.begin(), arr.end());

    std::cout << "After heapifying, array is: ";
    printArray(arr);

    // Sort the Max Heap
    std::sort_heap(arr.begin(), arr.end());

    std::cout << "Sorted array is: ";
    printArray(arr);

    return 0;
}
