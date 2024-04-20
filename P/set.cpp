#include <iostream>
#include <set>

int main() {
    std::set<int> bst;

    // Insert elements
    bst.insert(8);
    bst.insert(3);
    bst.insert(10);
    bst.insert(1);
    bst.insert(6);
    bst.insert(14);
    bst.insert(4);
    bst.insert(7);
    bst.insert(13);

    // Print elements in sorted order
    for (int element : bst) {
        std::cout << element << " ";
    }

    return 0;
}
