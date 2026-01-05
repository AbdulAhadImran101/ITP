#include <iostream>

using namespace std;

int main() {
    double income;
    double tax_owed = 0;


    cin >> income;

    if (income <= 10000) {
        tax_owed = 0;
    } else {
        if (income <= 50000) {
            tax_owed = (income - 10000) * 0.10;
        } else {
            if (income <= 100000) {
                tax_owed = (income - 50000) * 0.20 + 4000;
            } else {
                tax_owed = (income - 100000) * 0.30 + 14000;
            }
        }
    }

    cout << "Tax = $" << tax_owed << endl;

    return 0;
}