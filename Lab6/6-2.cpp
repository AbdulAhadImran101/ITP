#include <iostream>

using namespace std;

int main() {
    double my_list[6];
    double vals[] = {3.14, 3.24, 3.34, 3.44, 3.54}; 

    int k = 0;
    while (k < 5) {
        my_list[k] = vals[k];
        k = k + 1;
    }

    int a = 0;
    while (a < 5) {
        int b = 0;
        while (b < 4) {
            if (my_list[b] < my_list[b + 1]) {
                double helper = my_list[b];
                my_list[b] = my_list[b + 1];
                my_list[b + 1] = helper;
            }
            b = b + 1;
        }
        a = a + 1;
    }

    cout << "Numbers in descending order:" << endl;
    int p = 0;
    while (p < 5) {
        cout << my_list[p] << " ";
        p = p + 1;
    }
    cout << endl