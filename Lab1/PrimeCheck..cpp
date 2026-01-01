#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

 
    if (n < 2) {
        cout << n << " is not prime" << endl;
    } else if (n == 2 || n == 3 || n == 5 || n == 7) {
        cout << n << " is prime" << endl;
    } else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
        cout << n << " is not prime" << endl;
    } else {
        cout << n << " is prime" << endl;
    }

   
    cout << "Primes between 1 and 100:" << endl;
    cout << "2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97" << endl;

    return 0;
}