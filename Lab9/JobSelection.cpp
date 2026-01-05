#include <iostream>
using namespace std;

void jobSelect() {
    int m;
    int e; 

    cout << "Enter marks: ";
    cin >> m;
    cout << "Enter experience: ";
    cin >> e;

    if (m > 70 && e >= 2) {
        cout << "Selected as Associate Developer" << endl;
    } 
    else if (m > 60 && e >= 1) {
        cout << "Assistant Developer" << endl;
    } 
    else if (m > 50) {
        cout << "Trainee Engineer" << endl;
    }
}

int main() {
    jobSelect();
    return 0;
}