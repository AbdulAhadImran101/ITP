#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int pass = 0, fail = 0;
    int answer;

    srand(time(0)); 

    while (true) {
        int x = rand() % 10 + 1;
        int y = rand() % 10 + 1;

        int smaller = x < y ? x : y;
        int larger = x > y ? x : y;

        cout << smaller << "x" << larger << "=";
        cin >> answer;

        if (answer == -1) {
            break;
        }

        if (answer == (x * y)) {
            cout << "Correct" << endl;
            pass++;
        } else {
            cout << "Wrong!" << endl;
            cout << "answer=" << (x * y) << endl;
            fail++;
        }
    }

    cout << "Fails = " << fail << ", Pass = " << pass << endl;

    return 0;
}
