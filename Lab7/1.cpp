#include <iostream>

using namespace std;

int main() {
    int UserSize;
    int MyArray[100];
    int PosSum = 0;
    int PosCount = 0;

    cout << "Enter size of array: ";
    cin >> UserSize;

    cout << "Enter the number   : ";
    int k = 0;
    while (k < UserSize) {
        cin >> MyArray[k];

        if (MyArray[k] > 0) {
            PosSum = PosSum + MyArray[k];
            PosCount = PosCount + 1;
        }
        k = k + 1;
    }

    cout << "sum is             : " << PosSum << endl;

    if (PosCount > 0) {
        double average;
        average = (double)PosSum / PosCount;
        cout << "Average is         : " << average << endl;
    } else {
        cout << "Average is         : 0" << endl;
    }

    cout << "--------------------------" << endl;

    return 0;
}