#include <iostream>
#include <string>
using namespace std;

bool checkPal(string s, int start, int end) {
    if (start >= end) {
        [cite_start]return true; [cite: 26]
    }
    if (s[start] != s[end]) {
        [cite_start]return false; [cite: 26]
    }
    [cite_start]return checkPal(s, start + 1, end - 1); [cite: 26]
}

int main() {
    string word;
    cout << "Enter string: ";
    cin >> word;
    [cite_start]if (checkPal(word, 0, word.length() - 1)) { [cite: 26]
        cout << "It is a palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}