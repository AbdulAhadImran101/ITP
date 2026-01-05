#include <iostream>

using namespace std;

int main() {
    int inputVal;
    
   
    cin >> inputVal;

    int shifted_right = inputVal >> 3;

    cout << shifted_right << endl;

    return 0;
}