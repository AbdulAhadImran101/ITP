#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int probability_calc(float p) {
    float perc = p * 100.0f;
    int r = rand() % 101;
    if (r < perc)
        return 1;
    else
        return 0;
}

int main() {
    srand(time(0));

    int W, H;
    int init_inf;
    float w;
    float inf_prob;

    cout << "Enter grid size (W H): ";
    cin >> W >> H;

    cout << "Enter initial number of infected individuals: ";
    cin >> init_inf;

    cout << "Enter worsening probability (0 to 1): ";
    cin >> w;

    cout << "Enter infection probability (0 to 1): ";
    cin >> inf_prob;

    const int R = 5;
    const int T = 30;

    const int MAX_W = 100;
    const int MAX_H = 100;

    int grid[MAX_W][MAX_H];
    int days_infected[MAX_W][MAX_H];

    for (int i = 0; i < W; i++) {
        for (int j = 0; j < H; j++) {
            grid[i][j] = 0;
            days_infected[i][j] = 0;
        }
    }

    int remaining = init_inf;
    while (remaining > 0) {
        int x = rand() % W;
        int y = rand() % H;

        if (grid[x][y] == 0) {
            grid[x][y] = (rand() % 9) + 1;
            days_infected[x][y] = 1;
            remaining--;
        }
    }

    cout << "\nInitial grid state:\n";
    for (int i = 0; i < W; i++) {
        for (int j = 0; j < H; j++) {
            if (grid[i][j] == 0)
                cout << '.';
            else
                cout << grid[i][j];
        }
        cout << '\n';
    }

    for (int day = 0; day < T; day++) {

        int temp[MAX_W][MAX_H];
        for (int i = 0; i < W; i++)
            for (int j = 0; j < H; j++)
                temp[i][j] = -100;

        for (int i = 0; i < W; i++) {
            for (int j = 0; j < H; j++) {

                int state = grid[i][j];

                if (state == 0) {
                    int max_severity = 0;

                    if (i > 0 && grid[i - 1][j] > max_severity && grid[i - 1][j] < 10)
                        max_severity = grid[i - 1][j];
                    if (i < W - 1 && grid[i + 1][j] > max_severity && grid[i + 1][j] < 10)
                        max_severity = grid[i + 1][j];
                    if (j > 0 && grid[i][j - 1] > max_severity && grid[i][j - 1] < 10)
                        max_severity = grid[i][j - 1];
                    if (j < H - 1 && grid[i][j + 1] > max_severity && grid[i][j + 1] < 10)
                        max_severity = grid[i][j + 1];

                    if (max_severity > 0) {
                        int infect = probability_calc(inf_prob);
                        if (infect == 1) {
                            temp[i][j] = (rand() % max_severity) + 1;
                            days_infected[i][j] = 1;
                        }
                    }
                }
                else if (state > 0 && state < 10) {
                    int worsen = probability_calc(w);

                    if (worsen == 1)
                        temp[i][j] = state + 1;
                    else
                        temp[i][j] = state - 1;

                    days_infected[i][j]++;

                    if (days_infected[i][j] == R) {
                        temp[i][j] = -1;
                    }
                }
            }
        }

        for (int i = 0; i < W; i++) {
            for (int j = 0; j < H; j++) {
                if (temp[i][j] != -100) {
                    grid[i][j] = temp[i][j];
                }
            }
        }

        int healthy = 0, infected = 0, recovered = 0, dead = 0;

        for (int i = 0; i < W; i++) {
            for (int j = 0; j < H; j++) {
                int s = grid[i][j];
                if (s == 0)
                    healthy++;
                else if (s == -1)
                    recovered++;
                else if (s == 10)
                    dead++;
                else if (s > 0 && s < 10)
                    infected++;
            }
        }

        cout << "Day " << day + 1
             << ": Healthy: "  << healthy
             << " Infected: "  << infected
             << " Recovered: " << recovered
             << " Dead: "      << dead << '\n';
    }

    cout << "\nFinal grid state:\n";
    for (int i = 0; i < W; i++) {
        for (int j = 0; j < H; j++) {
            int s = grid[i][j];
            if (s == 0)
                cout << '.';
            else if (s == -1)
                cout << 'R';
            else if (s == 10)
                cout << 'X';
            else
                cout << s;
        }
        cout << '\n';
    }

    return 0;
}
