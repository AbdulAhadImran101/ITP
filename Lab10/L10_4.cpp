#include <iostream>

using namespace std;

int rec_kadane(int arr[], int n, int i, int current_max, int global_max) {
    if (i == n) {
        return global_max;
    }

    int possible_max;
    if (arr[i] > current_max + arr[i]) {
        possible_max = arr[i];
    } else {
        possible_max = current_max + arr[i];
    }

    int next_global;
    if (possible_max > global_max) {
        next_global = possible_max;
    } else {
        next_global = global_max;
    }

    return rec_kadane(arr, n, i + 1, possible_max, next_global);
}

int main() {
    int my_array[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = 9;

    int result = rec_kadane(my_array, size, 1, my_array[0], my_array[0]);
    cout << result << endl;

    return 0;
}