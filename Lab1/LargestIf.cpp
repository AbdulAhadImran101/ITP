#include <iostream>

using namespace std;

int main() {
    int first;
    int second;
    int third;

    cin >> first >> second >> third;

    int the_largest;

    if (first >= second) {
        if (first >= third) {
            the_largest = first;
        } else {
            the_largest = third;
        }
    } else {
        if (second >= third) {
            the_largest = second;
        } else {
            the_largest = third;
        }
    }

    cout << "Largest = " << the_largest << endl;

    return 0;
}