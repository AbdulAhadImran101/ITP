#include <iostream>
using namespace std;


int R1, C1, R2, C2;

void multiplyMatrices(int a[10][10], int b[10][10], int res[10][10], int r, int c, int k) {
    if (r >= R1) {
        return; [cite_start]
    }
    
    if (c < C2) {
        if (k < C1) {
            [cite_start]res[r][c] += a[r][k] * b[k][c]; [cite: 16]
            multiplyMatrices(a, b, res, r, c, k + 1);
        } else {
            
            multiplyMatrices(a, b, res, r, c + 1, 0);
        }
    } else {
        
        multiplyMatrices(a, b, res, r + 1, 0, 0);
    }
}

int main() {
    cout << "Enter rows and cols for mat 1: ";
    cin >> R1 >> C1;
    cout << "Enter rows and cols for mat 2: ";
    cin >> R2 >> C2;

    if (C1 != R2) {
        cout << "Cant multiply these!";
        return 0;
    }

    int m1[10][10], m2[10][10], result[10][10];

    for(int i=0; i<R1; i++) {
        for(int j=0; j<C1; j++) {
            cout << "m1 element: "; cin >> m1[i][j];
        }
    }

    for(int i=0; i<R2; i++) {
        for(int j=0; j<C2; j++) {
            cout << "m2 element: "; cin >> m2[i][j];
        }
    }

    
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            result[i][j] = 0;

    [cite_start]multiplyMatrices(m1, m2, result, 0, 0, 0); [cite: 16]

    cout << "Result matrix is:" << endl;
    for(int i=0; i<R1; i++) {
        for(int j=0; j<C2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}