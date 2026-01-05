#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter 1st number please: ";
    cin >> num1;

    cout << "Enter 2nd number please: ";
    cin >> num2;

    while (num1 != num2) {
        num1 = num1 >> 2;
        num2 = num2 * 2;

        cout << "# 1stNumber " << num1 << endl;
        cout << "# 2stNumber " << num2 << endl;
        cout << "********************" << endl;
    }

    return 0;
}