#include <iostream>
#include <string>

using namespace std;

bool pal(string s, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (s[start] != s[end]) {
        return false;
    }

    return pal(s, start + 1, end - 1);
}

int main() {
    string input;
    cin >> input;

    if (pal(input, 0, input.length() - 1)) {
        cout << "palindrome" << endl;
    } else {
        cout << "not palindrome" << endl;
    }

    return 0;
}