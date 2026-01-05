
#include <iostream>

using namespace std;

[cite_start]void reverseArray(int *arr, int size) { [cite: 22]
    int *start_ptr = arr;
    int *end_ptr = arr + size - 1;

    while (start_ptr < end_ptr) {
        int temporary = *start_ptr;
        *start_ptr = *end_ptr;
        *end_ptr = temporary;

        start_ptr++;
        end_ptr--;
    }
}

int main() {
    int size = 4; 
    [cite_start]int arr[] = {5, 10, 15, 20}; [cite: 24]

    [cite_start]reverseArray(arr, size); [cite: 22]

    for (int k = 0; k < size; k++) {
        [cite_start]cout << *(arr + k) << " "; [cite: 23]
    }
    cout << endl;

    return 0;
}