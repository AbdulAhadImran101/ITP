#include <iostream>
using namespace std;

int recursiveSearch(int arr[], int size, int target, int current) {
    if (current >= size) {
        return -1; [cite_start]
    }
    if (arr[current] == target) {
        [cite_start]return current; [cite: 29]
    }
    [cite_start]return recursiveSearch(arr, size, target, current + 1); [cite: 29]
}

int main() {
    [cite_start]int A[10] = {5, 4, 3, 2, 1, 6, 10, 9, 7, 8}; [cite: 28]
    [cite_start]int findMe = 7; [cite: 31]
    
    [cite_start]int result = recursiveSearch(A, 10, findMe, 0); [cite: 29]
    
    if (result != -1) {
        [cite_start]cout << "Element found at index " << result << endl; [cite: 33]
    } else {
        cout << "Not found";
    }
    return 0;
}