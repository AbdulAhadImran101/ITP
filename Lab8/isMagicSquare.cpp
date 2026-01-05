#include <iostream>

using namespace std;

int main() {
    int n = 3;
    int square[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    int target = 0;
    for (int i = 0; i < n; i++) {
        target = target + square[0][i];
    }

    bool check = true;

    for (int i = 0; i < 3; i++) {
        int r_sum = 0;
        for (int j = 0; j < 3; j++) {
            r_sum = r_sum + square[i][j];
        }
        if (r_sum != target) {
            check = false;
        }
    }

    for (int i = 0; i < 3; i++) {
        int c_sum = 0;
        for (int j = 0; j < 3; j++) {
            c_sum = c_sum + square[j][i];
        }
        if (c_sum != target) {
            check = false;
        }
    }

    int diag1 = square[0][0] + square[1][1] + square[2][2];
    int diag2 = square[0][2] + square[1][1] + square[2][0];

    if (diag1 != target || diag2 != target) {
        check = false;
    }

    if (check == true) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}