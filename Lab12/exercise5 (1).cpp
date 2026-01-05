
#include <iostream>

using namespace std;

[cite_start]int* mergeArrays(int *a, int sizeA, int *b, int sizeB) { [cite: 43]
    int total_size = sizeA + sizeB;
    [cite_start]int *merged = new int[total_size]; [cite: 43]

    for (int i = 0; i < sizeA; i++) {
        *(merged + i) = *(a + i);
    }

    for (int j = 0; j < sizeB; j++) {
        *(merged + sizeA + j) = *(b + j);
    }

    [cite_start]return merged; [cite: 44]
}

int main() {
    [cite_start]int A[] = {1, 2, 3}; [cite: 46]
    [cite_start]int B[] = {4, 5}; [cite: 46]

    int *result = mergeArrays(A, 3, B, 2);

    cout << "Merged ";
    for (int k = 0; k < 5; k++) {
        [cite_start]cout << *(result + k) << " "; [cite: 44, 48]
    }
    cout << endl;

    delete[] result;
    return 0;
}