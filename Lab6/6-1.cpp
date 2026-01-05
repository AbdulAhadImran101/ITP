#include <iostream>

using namespace std;

int main() {
    int MyNumbers[10];
    int look_for;
    int count_times = 0;

    int i = 0;
    while (i < 10) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> MyNumbers[i];
        i = i + 1;
    }

    cout << "What number are you looking for? ";
    cin >> look_for;

    int j = 0;
    while (j < 10) {
        if (MyNumbers[j] == look_for) {
            count_times = count_times + 1;
        }
        j = j + 1;
    }

    if (count_times > 0) {
        cout << "The number " << look_for << " occurred " << count_times << " times" << endl;
    } else {
        if (count_times == 0) {
            cout << "number not found" << endl;
        }
    }

    return 0;
}