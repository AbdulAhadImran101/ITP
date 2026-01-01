#include <iostream>

using namespace std;

int main() {
    int x;
    int y;

    cin >> x;
    cin >> y;

    if (x > 0) {
        if (y > 0) {
            cout << "Quadrant I" << endl;
        } else {
            if (y < 0) {
                cout << "Quadrant IV" << endl;
            }
        }
    } else {
        if (x < 0) {
            if (y > 0) {
                cout << "Quadrant II" << endl;
            } else {
                if (y < 0) {
                    cout << "Quadrant III" << endl;
                }
            }
        }
    }

    if (x == 0 || y == 0) {
       
    }

    return 0;
}