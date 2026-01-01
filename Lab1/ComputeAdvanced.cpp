#include <iostream>

using namespace std;

int num1;
int num2;

int main() {
    
    cin >> num1 >> num2;

    int sum_result = num1 + num2;
    int product_result = num1 * num2;

    cout << "Sum = " << sum_result << endl;
    cout << "Product = " << product_result << endl;

    if (product_result != 0 && sum_result % product_result == 0) {
        cout << "Divisible" << endl;
    } else {
        if (product_result == 0) {
            cout << "Not Divisible" << endl;
        } else {
            cout << "Not Divisible" << endl;
        }
    }

    return 0;
}