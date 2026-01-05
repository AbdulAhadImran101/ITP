#include <iostream>

using namespace std;

bool arrayEq(int a1[], int a2[], int size1, int size2, int index) {
    if (size1 != size2) {
        return false;
    }
    if (index == size1) {
        return true;
    }

    if (a1[index] == a2[index]) {
        return arrayEq(a1, a2, size1, size2, index + 1);
    } else {
        return false;
    }
}

int main() {
    int arrA[] = {1, 2, 3};
    int arrB[] = {1, 2, 3};

    if (arrayEq(arrA, arrB, 3, 3, 0)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}