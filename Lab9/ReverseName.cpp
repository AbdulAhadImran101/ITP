#include <iostream>
#include <string>

using namespace std;

int main() {
    string fname, lname;
    
    
    cout << "First Name: ";
    cin >> fname;
    cout << "Last Name: ";
    cin >> lname;

    string combined = fname + " " + lname;
    
    
    for(int i = combined.length() - 1; i >= 0; i--) {
        cout << combined[i];
    }
    cout << endl;

    return 0;
}