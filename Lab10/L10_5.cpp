#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

void setup_cards(int b[4][4]) {
    int v[16];
    int count = 0;
    for (int i = 1; i <= 8; i++) {
        v[count++] = i;
        v[count++] = i;
    }

    srand(time(0));
    for (int i = 15; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    int k = 0;
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 4; c++) {
            b[r][c] = v[k++];
        }
    }
}

void show_board(int b[4][4], bool f[4][4]) {
    cout << "  0 1 2 3" << endl;
    for (int i = 0; i < 4; i++) {
        cout << i << " ";
        for (int j = 0; j < 4; j++) {
            if (f[i][j]) {
                cout << b[i][j] << " ";
            } else {
                cout << "* ";
            }