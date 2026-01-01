#include <iostream>

using namespace std;

int main() {
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;

    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    float avg = (s1 + s2 + s3 + s4 + s5) / 5.0;

    if (avg >= 90) {
        cout << "A" << endl;
    } else if (avg >= 80 && avg <= 89) {
        cout << "B" << endl;
    } else if (avg >= 70 && avg <= 79) {
        cout << "C" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}