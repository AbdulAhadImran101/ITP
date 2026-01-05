#include <iostream>
using namespace std;

void swap_them(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Before swap: a=" << a << ", b=" << b << endl;

    swap_them(a, b);

    cout << "After swap: a=" << a << ", b=" << b << endl;

    return 0;
}        