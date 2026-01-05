#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N, R;
    cin >> N >> R;

    srand(time(0));

    for (int i = 0; i < N; i++) {
        int random_val = rand() % R;
        cout << random_val << " ";
    }
    cout << endl;

    return 0;
}