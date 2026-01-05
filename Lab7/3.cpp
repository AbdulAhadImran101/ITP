#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    int data[50][50];

    cout << "Enter matrix element: ";
    
    rows = 3;
    cols = 3;

    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            cin >> data[i][j];
            j = j + 1;
        }
        i = i + 1;
    }

    cout << "Your matrix is:" << endl;
    int max_val = data[0][0];

    int r = 0;
    while (r < rows) {
        int c = 0;
        while (c < cols) {
            cout << data[r][c] << " ";
            
            if (data[r][c] > max_val) {
                max_val = data[r][c];
            }
            c = c + 1;
        }
        cout << endl;
        r = r + 1;
    }

    cout << "maximum element is: " << max_val << endl;

    return 0;
}