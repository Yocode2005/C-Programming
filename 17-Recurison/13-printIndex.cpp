#include <iostream>
using namespace std;

// Recursive function to find index of target
int findIndex(int arr[], int index, int size, int target) {
    if (index == size) return -1;  // base case: reached end of array

    if (arr[index] == target) return index; // found the target

    return findIndex(arr, index + 1, size, target); // recursive call
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int result = findIndex(arr, 0, size, target);

    cout << "Index: " << result << endl;

    return 0;
}
