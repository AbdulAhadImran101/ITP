#include <iostream>

using namespace std;

int main() {
    int n;
    
    cin >> n;

    int temp = n;

    while (temp != 7 && temp != -7 && temp != 0) {
        
        if (temp > -10 && temp < 10) {
            break;
        }

        int lastDigit = temp % 10;
        int rest = temp / 10;
        
        int doubled = lastDigit * 2;
        temp = rest - doubled;
    }

    if (temp == 7 || temp == -7 || temp == 0) {
        cout << n << " is divisible by 7" << endl;
    } else {
        cout << n << " is not divisible by 7" << endl;
    }

    return 0;
}