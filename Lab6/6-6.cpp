#include <iostream>

using namespace std;

int main() {
    int array1[5];
    int array2[5];

    cout << "Array 1:" << endl;
    int i = 0;
    while (i < 5) {
        cout << "Enter the marks of Student " << i + 1 << " = ";
        cin >> array1[i];
        i = i + 1;
    }

    cout << endl << "Array 2:" << endl;
    int j = 0;
    while (j < 5) {
        cout << "Enter the marks of Student " << j + 6 << " = ";
        cin >> array2[j];
        j = j + 1;
    }

    cout << endl << "Common values are:" << endl;
    int x = 0;
    while (x < 5) {
        int y = 0;
        while (y < 5) {
            if (array1[x] == array2[y]) {
                
                bool already_printed = false;
                int z = 0;
                while (z < x) {
                    if (array1[z] == array1[x]) {
                        already_printed = true;
                    }
                    z = z + 1;
                }

                if (already_printed == false) {
                    cout << "      " << array1[x] << endl;
                }
                break; 
            }
            y = y + 1;
        }
        x = x + 1;
    }

    return 0;
}