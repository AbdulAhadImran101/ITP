#include <iostream>

using namespace std;

int main() {
    int arr_size = 6;
    int user_vals[100]; 
    bool is_it_same = true;

    int counter = 0;
    while (counter < arr_size) {
        cout << "Enter element a[" << counter << "]= ";
        cin >> user_vals[counter];
        counter = counter + 1;
    }

    int start_index = 0;
    int end_index = arr_size - 1;

    while (start_index < end_index) {
        if (user_vals[start_index] != user_vals[end_index]) {
            is_it_same = false;
        }
        start_index = start_index + 1;
        end_index = end_index - 1;
    }

    if (is_it_same == true) {
        cout << "Array is Symmetric" << endl;
    } else {
        if (is_it_same == false) {
            cout << "Array is Non-Symmetric" << endl;
        }
    }

    return 0;
}