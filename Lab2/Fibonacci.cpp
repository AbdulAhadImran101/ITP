#include <iostream>

using namespace std;

int main() {
    int N;
    int checkNum;
    
    cout << "Enter how many Fibonacci numbers to print: ";
    cin >> N;

    int current = 0;
    int next = 1;
    int count = 0;

    cout << "Sequence: ";
    while (count < N) {
        cout << current << " ";
        int temp = current + next;
        current = next;
        next = temp;
        count = count + 1;
    }
    cout << endl;

    cout << "Enter a number to check if it is in the sequence: ";
    cin >> checkNum;

    int f1 = 0;
    int f2 = 1;
    int found = 0;

    if (checkNum == 0) {
        found = 1;
    }

    while (f1 <= checkNum) {
        if (f1 == checkNum) {
            found = 1;
        }
        int next_f = f1 + f2;
        f1 = f2;
        f2 = next_f;
    }

    if (found == 1) {
        cout << checkNum << " belongs to the Fibonacci sequence." << endl;
    } else {
        cout << checkNum << " does not belong to the Fibonacci sequence." << endl;
    }

    return 0;
}