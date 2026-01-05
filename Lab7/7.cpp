#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double sales_data[6][4];
    
    int r = 0;
    while (r < 6) {
        int c = 0;
        while (c < 4) {
            sales_data[r][c] = 0;
            c = c + 1;
        }
        r = r + 1;
    }

    cout << "--- Sales Reporting System ---" << endl;
    cout << "Enter -1 for Employee ID to stop entering data." << endl << endl;

    while (true) {
        int empID, prodID;
        double amount;

        cout << "Enter Employee ID (1-4): ";
        cin >> empID;
        if (empID == -1) {
            break;
        }

        cout << "Enter Product ID (1-6) : ";
        cin >> prodID;
        cout << "Enter Sales Amount      : ";
        cin >> amount;

        if (empID >= 1 && empID <= 4 && prodID >= 1 && prodID <= 6) {
            sales_data[prodID - 1][empID - 1] = sales_data[prodID - 1][empID - 1] + amount;
        } else {
            cout << "!! Invalid ID entered, please try again !!" << endl;
        }
        cout << "-------------------------------" << endl;
    }

    cout << endl << "Final Sales Summary Table:" << endl;
    cout << "Product | Emp 1 | Emp 2 | Emp 3 | Emp 4 | Total" << endl;
    cout << "----------------------------------------------------" << endl;

    double GrandTotal = 0;
    double EmpTotals[4] = {0, 0, 0, 0};

    int i = 0;
    while (i < 6) {
        cout << "P" << i + 1 << "     | ";
        double ProductRowTotal = 0;
        
        int j = 0;
        while (j < 4) {
            double current_val = sales_data[i][j];
            cout << fixed << setprecision(1) << current_val << "   | ";
            
            ProductRowTotal = ProductRowTotal + current_val;
            EmpTotals[j] = EmpTotals[j] + current_val;