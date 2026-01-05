#include <iostream>

using namespace std;

int main() {
    int a_val, b_val, c_val;

    cout << "3a + 7b - 5c = 10" << endl << endl;
    cout << "The integer roots for given problem are:" << endl;

    a_val = -10;
    while (a_val <= 10) {
        
        b_val = -10;
        while (b_val <= 10) {
            
            c_val = -10;
            while (c_val <= 10) {
                
                int math_result = (3 * a_val) + (7 * b_val) - (5 * c_val);

                if (math_result == 10) {
                    cout << "Solution:     a = " << a_val;
                    cout << "          b = " << b_val;
                    cout << "          c = " << c_val << endl;
                }
                
                c_val = c_val + 1;
            }
            b_val = b_val + 1;
        }
        a_val = a_val + 1;
    }

    return 0;
}