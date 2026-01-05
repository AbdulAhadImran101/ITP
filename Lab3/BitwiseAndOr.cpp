#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    

    cin >> num1 >> num2;

    int result_and = num1 & num2;
    int result_or = (num1 | num2);

    cout << "a & b = " << result_and << " " << "a | b = " << result_or << endl;

    return 0;
}