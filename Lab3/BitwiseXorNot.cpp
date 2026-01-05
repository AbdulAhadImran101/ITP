#include <iostream>

using namespace std;

int main() {
    int UserInput;
    
    
    cin >> UserInput;

    int notResult = ~UserInput;
    int xorWithOne = UserInput ^ 1;

    cout << "NOT of " << UserInput << " = " << notResult << " " << UserInput << " XOR 1 = " << xorWithOne << endl;

    return 0;
}