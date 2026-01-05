#include <iostream>
#include <climits>

using namespace std;

int main() {
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    int input_num;

    cout << "Input: ";

    while (cin >> input_num) {
        if (input_num > max_val) {
            max_val = input_num;
        }
        
        if (input_num < min_val) {
            min_val = input_num;
        }
    }

    if (max_val == INT_MIN && min_val == INT_MAX) {
        cout << "No numbers were entered." << endl;
    } else {
        cout << "Output: Max = " << max_val << ", Min = " << min_val << endl;
    }

    return 0;
}