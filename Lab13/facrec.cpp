#include <iostream>
using namespace std;

int findFactorial(int number) {
    if (number == 0) {
        return 1; [cite_start]
    } else {
        [cite_start]return number * findFactorial(number - 1); [cite: 18]
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    [cite_start]int ans = findFactorial(n); [cite: 18]
    cout << "Factorial is " << ans << endl;
    return 0;
}