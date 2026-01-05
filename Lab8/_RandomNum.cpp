#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N, R;
    
    cout << "Input N and R: ";
    cin >> N >> R;

    srand(time(0));

    for (int i = 0; i < N; i++) {
        int generated = rand() % R;
        cout << generated << " ";
    }
    cout << endl;

    return 0;
}