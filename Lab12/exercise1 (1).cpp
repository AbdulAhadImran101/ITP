
#include <iostream>

using namespace std;

int main() {
    int N;
    [cite_start]cin >> N; [cite: 17]

    [cite_start]int* my_ptr = new int[N]; [cite: 17]

    for (int i = 0; i < N; i++) {
        [cite_start]cin >> *(my_ptr + i); [cite: 17]
    }

    int* maxVal = my_ptr;

    for (int j = 1; j < N; j++) {
        if (*(my_ptr + j) > *maxVal) {
            maxVal = (my_ptr + j);
        }
    }

    [cite_start]cout << "Maximum = " << *maxVal << endl; [cite: 18, 20]

    delete[] my_ptr; 
    return 0;
}