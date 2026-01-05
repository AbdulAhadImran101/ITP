#include <iostream>
using namespace std;

int main() {
    int input;
    int count = 0;

    while (true) {
        cout << "Enter the number: ";
        cin >> input;

        if (input < 0) {
            cout << "**********************" << endl;
            break;
        }

        cout << "**********************" << endl;

        for (int i = 0; i < input; i++) {
            cout << "CL1002 exam is in week 09" << endl;
            count++;
        }
    }

    cout << "The message displayed " << count << " times" << endl;

    return 0;
}