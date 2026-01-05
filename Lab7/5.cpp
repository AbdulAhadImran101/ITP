#include <iostream>

using namespace std;

int main() {
    int MatSide;
    int MyMatrix[10][10];
    int TransMatrix[10][10];
    bool SameFound = true;

    cout << "Enter the size of square matrix: ";
    cin >> MatSide;

    int r = 0;
    while (r < MatSide) {
        int c = 0;
        while (c < MatSide) {
            cout << "Enter element at [" << r << "][" << c << "]: ";
            cin >> MyMatrix[r][c];
            c = c + 1;
        }
        r = r + 1;
    }

    int i = 0;
    while (i < MatSide) {
        int j = 0;
        while (j < MatSide) {
            TransMatrix[j][i] = MyMatrix[i][j];
            j = j + 1;
        }
        i = i + 1;
    }

    cout << endl << "Original Matrix:" << endl;
    int p = 0;
    while (p < MatSide) {
        int q = 0;
        while (q < MatSide) {
            cout << MyMatrix[p][q] << " ";
            q = q + 1;
        }
        cout << endl;
        p = p + 1;
    }

    cout << endl << "Transpose Matrix:" << endl;
    int x = 0;
    while (x < MatSide) {
        int y = 0;
        while (y < MatSide) {
            cout << TransMatrix[x][y] << " ";
            y = y + 1;
        }
        cout << endl;
        x = x + 1;
    }

    int a = 0;
    while (a < MatSide) {
        int b = 0;
        while (b < MatSide) {
            if (MyMatrix[a][b] != TransMatrix[a][b]) {