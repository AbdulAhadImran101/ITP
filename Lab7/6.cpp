#include <iostream>
#include <string>

using namespace std;

int main() {
    string students[] = {"Ali", "Zuhair", "Faisal", "Maaz", "Anis"};
    int n = 5;

    int i = 1;
    while (i < n) {
        string key = students[i];
        int j = i - 1;

        while (j >= 0 && students[j] > key) {
            students[j + 1] = students[j];
            j = j - 1;
        }
        students[j + 1] = key;
        i = i + 1;
    }

    int k = 0;
    while (k < n) {
        cout << students[k] << " ";
        k = k + 1;
    }
    cout << endl;

    return 0;
}