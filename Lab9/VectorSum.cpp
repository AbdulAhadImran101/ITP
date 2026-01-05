#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cnt;
    cout << "Enter count: ";
    cin >> cnt;

    vector<int> numbers;

    cout << "Enter numbers: ";
    for (int i = 0; i < cnt; i++) {
        int val;
        cin >> val;
        numbers.push_back(val);
    }

    int total = 0;
    for (int i = 0; i < numbers.size(); i++) {
        total = total + numbers[i];
    }

    cout << "Sum = " << total << endl;

    return 0;
}