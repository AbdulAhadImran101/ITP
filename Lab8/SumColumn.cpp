#include <iostream>

using namespace std;

int main() {
    int grid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int col_num;
    cout << "Input: column ";
    cin >> col_num;

    int total_sum = 0;
    
    for (int row_index = 0; row_index < 3; row_index++) {
        int value = grid[row_index][col_num - 1];
        total_sum = total_sum + value;
    }

    cout << "Output: Sum = " << total_sum << endl;

    return 0;
}