#include <iostream>

using namespace std;

int main() {
    int rows_count = 3;
    int cols_count = 4;

    int a[3][4] = {{2, 5, 7, 1}, {1, 3, 6, 1}, {5, 4, 1, 3}};
    int b[3][4] = {{1, 9, 5, 0}, {7, 1, 5, 4}, {3, 4, 2, 8}};

    int result_matrix[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            int val1 = a[i][j];
            int val2 = b[i][j];
            result_matrix[i][j] = val1 + val2;
        }
    }

    for (int r = 0; r < rows_count; r++) {
        for (int c = 0; c < cols_count; c++) {
            cout << result_matrix[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}