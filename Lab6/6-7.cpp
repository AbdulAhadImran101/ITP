#include <iostream>

using namespace std;

int main() {
    long long input_val;
    cout << "Enter the number = ";
    cin >> input_val;

    long long copy_for_digits = input_val;
    int digit_count = 0;
    
    if (copy_for_digits == 0) {
        digit_count = 1;
    } else {
        while (copy_for_digits > 0) {
            digit_count = digit_count + 1;
            copy_for_digits = copy_for_digits / 10;
        }
    }

    cout << "Total num of digits:    " << digit_count << endl;

    long long current_num = input_val;
    while (current_num >= 10) {
        long long sum_of_parts = 0;
        while (current_num > 0) {
            sum_of_parts = sum_of_parts + (current_num % 10);
            current_num = current_num / 10;
        }
        current_num = sum_of_parts;
    }

    cout << "Digital root of number: " << current_num << endl;

    return 0;
}