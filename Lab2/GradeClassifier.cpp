#include <iostream>

using namespace std;

int main() {
    int the_score;
    cin >> the_score;

    if (the_score >= 90 && the_score <= 100) {
        cout << "Grade: A" << endl;
    } else if (the_score >= 80 && the_score <= 89) {
        cout << "Grade: B" << endl;
    } else if (the_score >= 70 && the_score <= 79) {
        cout << "Grade: C" << endl;
    } else if (the_score >= 60 && the_score <= 69) {
        cout << "Grade: D" << endl;
    } else if (the_score < 60 && the_score >= 0) {
        cout << "Grade: F" << endl;
    } else {
        // this is for numbers that aren't 0-100
    }

    return 0;
}