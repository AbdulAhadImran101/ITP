#include <iostream>

using namespace std;

int main() {
    int checkNum;

  
    cin >> checkNum;

    if ((checkNum & 1) == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}