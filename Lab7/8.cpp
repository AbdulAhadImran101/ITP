#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double report[5][9];
    
    int row = 0;
    while (row < 5) {
        int col = 0;
        while (col < 9) {
            report[row][col] = 0;
            col = col + 1;
        }
        row = row + 1;
    }

    int i = 0;
    while (i < 5) {
        cout << "Entering data for Student Row " << i + 1 << endl;
        
        cout << "  Enter Student ID: ";
        cin >> report[i][0];
        
        double current_sum = 0;
        int j = 1;
        while (j < 6) {
            cout << "  Enter marks for Course " << j << ": ";
            cin >> report[i][j];
            current_sum = current_sum + report[i][j];
            j = j + 1;
        }

        report[i][6] = 500; 
        report[i][7] = current_sum;
        report[i][8] = (current_sum / 500.0) * 100.0;
        
        cout << "-----------------------------------" << endl;
        i = i + 1;
    }

    cout << endl;
    cout << setw(8) << "Std-id" << setw(10) << "C1" << setw(10) << "C2" << setw(10) << "C3" 
         << setw(10)