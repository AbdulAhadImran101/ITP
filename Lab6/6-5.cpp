#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double PassingMarks[10];
    double FailingMarks[10];
    int passCount = 0;
    int failCount = 0;
    double passSum = 0;
    double failSum = 0;
    
    int StudentCounter = 0;
    while (StudentCounter < 10) {
        double currentMark;
        cout << "Enter the marks of Student " << StudentCounter + 1 << " = ";
        cin >> currentMark;

        if (currentMark == -1) {
            break;
        }

        if (currentMark >= 5 && currentMark <= 10) {
            PassingMarks[passCount] = currentMark;
            passSum = passSum + currentMark;
            passCount = passCount + 1;
        } else {
            if (currentMark >= 0 && currentMark < 5) {
                FailingMarks[failCount] = currentMark;
                failSum = failSum + currentMark;
                failCount = failCount + 1;
            }
        }
        StudentCounter = StudentCounter + 1;
    }

    cout << fixed << setprecision(2);
    
    cout << endl << "Array 1 values are = || ";
    int p = 0;
    while (p < passCount) {
        cout << PassingMarks[p] << " || ";
        p = p + 1;
    }

    cout << endl << endl << "Array 2 values are = || ";
    int f = 0;
    while (f < failCount) {
        cout << FailingMarks[f] << " || ";
        f = f + 1;
    }

    cout << endl << endl;
    if (passCount > 0) {
        cout << "Average of Array 1 is = " << passSum / passCount << endl;