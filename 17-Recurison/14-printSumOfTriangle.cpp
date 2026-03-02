// Given an array of integers, print a sum triangle using recursion from it such that the first level has 
// all array elements. After that, at each level the number of elements is one less than the previous 
// level and elements at the level will be the sum of consecutive two elements in the previous level. 
// So, if sample input is [5, 4, 3, 2, 1], sample output will be:
//  [5, 4, 3, 2, 1] 
// [9, 7, 5, 3] 
// [16, 12, 8] 
// [28, 20] 
// [48]

#include <iostream>
#include <vector>
using namespace std;

// Recursive function to print the sum triangle
void printSumTriangle(vector<int> arr) {
    // Base case: if array has only 1 element, print it and return
    if (arr.size() < 1) return;

    // Create the next level by summing consecutive elements
    vector<int> nextLevel;
    for (int i = 0; i < arr.size() - 1; i++) {
        nextLevel.push_back(arr[i] + arr[i + 1]);
    }

    // First print the smaller triangle (recursive call)
    printSumTriangle(nextLevel);

    // Then print the current level
    cout << "[";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    printSumTriangle(arr);
    return 0;
}
