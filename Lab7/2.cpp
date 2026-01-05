#include <iostream>

using namespace std;

int main() {
    int rows_count, cols_count;
    int my_matrix[10][10];
    int zeros_found = 0;

    cout << "Enter rows: ";
    cin >> rows_count;
    cout << "Enter columns: ";
    cin >> cols_count;

    int r = 0;
    while (r < rows_count) {
        int c = 0;
        while (c < cols_count) {
            cout << "Enter element at [" << r << "][" << c << "]: ";
            cin >> my_matrix[r][c];
            
            if (my_matrix[r][c] == 0) {
                zeros_found = zeros_found + 1;
            }
            c = c + 1;
        }
        r = r + 1;
    }

    int total_elements = rows_count * cols_count;
    
    if (zeros_found >= (total_elements / 2)) {
        cout << "The matrix is a Sparse matrix" << endl;
    } else {
        if (zeros_found < (total_elements / 2)) {
            cout << "The matrix is not a Sparse matrix" << endl;
        }
    }

    cout << "Total zeros counted: " << zeros_found << endl;

    return 0;
}