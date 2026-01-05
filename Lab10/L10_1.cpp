#include <iostream>
#include <string>

using namespace std;

bool checkSub(string s1, string s2, int n1, int n2) {
    if (n1 == 0) {
        return true;
    }
    if (n2 == 0) {
        return false;
    }

    if (s1[n1 - 1] == s2[n2 - 1]) {
        return checkSub(s1, s2, n1 - 1, n2 - 1);
    }

    return checkSub(s1, s2, n1, n2 - 1);
}

int main() {
    string first, second;

    cout << "First string: ";
    cin >> first;
    cout << "Second string: ";
    cin >> second;

    int len1 = first.length();
    int len2 = second.length();

    bool result = checkSub(first, second, len1, len2);

    if (result == true) {
        cout << "first string is subset of second" << endl;
    } else {
        cout << "not a subset" << endl;
    }

    return 0;
}