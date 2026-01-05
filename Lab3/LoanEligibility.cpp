#include <iostream>
#include <string>

using namespace std;

int main() {
    int credit;
    double incomeVal;
    double debtRatio;
    int yearsEmployed;

    
    cin >> credit >> incomeVal >> debtRatio >> yearsEmployed;

    if (credit >= 650) {
        if (incomeVal >= 40000) {
            if (debtRatio <= 40) {
                if (yearsEmployed >= 2) {
                    cout << "Loan Approved" << endl;
                } else {
                    cout << "Rejected: Employment status must be full-time for 2 years" << endl;
                }
            } else {
                cout << "Rejected: Debt-to-income ratio must be 40%" << endl;
            }
        } else {
            cout << "Rejected: Income must be $40,000 annually" << endl;
        }
    } else {
        cout << "Rejected: Credit score must be 650" << endl;
    }

    return 0;
}