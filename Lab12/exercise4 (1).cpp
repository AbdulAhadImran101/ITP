
#include <iostream>

using namespace std;

[cite_start]int countEven(int *arr, int size) { [cite: 35]
    int count = 0;
    int *p = arr;
    
    for (int i = 0; i < size; i++) {
        [cite_start]if (*p % 2 == 0) { [cite: 35, 36]
            count = count + 1;
        }
        p++;
    }
    return count;
}

int main() {
    [cite_start]int some_nums[] = {27, 8, 11, 14}; [cite: 37]
    int n = 4;

    int total = countEven(some_nums, n);
    [cite_start]cout << "Number of even values = " << total << endl; [cite: 38]

    return 0;
}