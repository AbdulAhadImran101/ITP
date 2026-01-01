#include <iostream>

using namespace std;

int main() {
    double balance = 0.0;
    int choice = 0;
    double amount = 0.0;

    while (choice != 4) {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Amount to deposit: ";
            cin >> amount;
            balance = balance + amount;
        } 
        else if (choice == 2) {
            cout << "Amount to withdraw: ";
            cin >> amount;
            if (amount <= balance) {
                balance = balance - amount;
            } else {
                cout << "Not enough money!" << endl;
            }
        } 
        else if (choice == 3) {
            cout << "Balance is: " << balance << endl;
        }
        else if (choice == 4) {
            cout << "Exit" << endl;
        }
        else {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}