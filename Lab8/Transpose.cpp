#include <iostream>

using namespace std;

int main() {
    int grid[4][3] = {
        {9, 5, 7},
        {1, 3, 6},
        {5, 4, 1},
        {0, 8, 2}
    };

    int flipped[3][4];

    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 3; c++) {
            flipped[c][r] = grid[r][c];
        }
    }

    cout << "Output Transpose (4x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << flipped[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}