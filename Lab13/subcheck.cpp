#include <iostream>
#include <string>
using namespace std;

bool isSub(string s1, string s2, int m, int n) {
    if (m == 0) return true; [cite_start]
    if (n == 0) return false; [cite_start]

    if (s1[m - 1] == s2[n - 1]) {
        [cite_start]return isSub(s1, s2, m - 1, n - 1); [cite: 20]
    }

    [cite_start]return isSub(s1, s2, m, n - 1); [cite: 20]
}

int main() {
    string str1, str2;
    cout << "Enter first string: "; cin >> str1;
    cout << "Enter second string: "; cin >> str2;

    [cite_start]if (isSub(str1, str2, str1.length(), str2.length())) { [cite: 20]
        [cite_start]cout << "true" << endl; [cite: 22]
    } else {
        [cite_start]cout << "false" << endl; [cite: 24]
    }
    return 0;
}