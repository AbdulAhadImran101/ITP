#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int H = 20;
    const int W = 80;
    char grid[H + 1][W + 1];
    float min, max;
    float x[W + 1];
    float ymin = -1.0;
    float ymax = 1.0;
    char sym = '*';

    cout << "enter min and max x values: ";
    cin >> min >> max;

    for (int i = 0; i <= W; i++) {
        x[i] = min + (double)i * (max - min) / W;
    }

    for (int i = 0; i <= H; i++) {
        for (int j = 0; j <= W; j++) {
            grid[i][j] = ' ';
        }
    }

    for (int i = 0; i <= H; i++) {
        grid[i][W / 2] = '|';
    }

    for (int j = 0; j <= W; j++) {
        grid[H / 2][j] = '-';
    }

    for (int i = 0; i <= W; i++) {
        int grid_x = (int)(((x[i] - min) / (max - min)) * W);
        float y = sin(x[i]);
        int grid_y = (int)(((y - ymin) / (ymax - ymin)) * H);
        grid_y = H - grid_y;

        if (grid_x >= 0 && grid_x <= W && grid_y >= 0 && grid_y <= H) {
            grid[grid_y][grid_x] = sym;
        }
    }

    for (int i = 0; i <= H; i++) {
        for (int j = 0; j <= W; j++) {
            cout << grid[i][j];
        }
        cout << "\n";
    }

    return 0;
}
