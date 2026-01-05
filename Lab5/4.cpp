#include <iostream>
using namespace std;

int main() {
    int num;
    int positiveCount = 0;
    int negativeCount = 0;
    int range100to200 = 0;

    do {
        cout << "Enter number: ";
        cin >> num;

        if (num > 0)
            positiveCount++;
        else if (num < 0)
            negativeCount++;

        if (num >= 100 && num <= 200)
            range100to200++;

        if (num % 2 != 0)
            cout << "Square of the given number is = " << num * num << endl;

    } while (num <= 15 || num >= 25);

    cout << "Postive Numbers = " << positiveCount
         << " Negative Numbers = " << negativeCount
         << " Total Count of [100-200] = " << range100to200 << endl;

    return 0;
}
