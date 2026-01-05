#include <iostream>
using namespace std;

int main() {
    int totalSeats = 500;
    int choice;
    int totalTicketsSold = 0;
    float totalIncome = 0;

    while (true) {
        cout << "Menu selections" << endl;
        cout << "#*-*-*-*-*-*-**-*-*-*-*#" << endl;
        cout << "1. Purchase Ticket" << endl;
        cout << "2. Display Information" << endl;
        cout << "3. Exit" << endl;
        cout << "#*-*-*-*-*-*-**-*-*-*-*#" << endl;
        cout << "Enter your Choice Pleas -: ";
        cin >> choice;

        if (choice == 1) {
            int tickets;
            cout << "How many tickets would you like to buy? ";
            cin >> tickets;

            if (tickets > totalSeats) {
                cout << "Sorry, the available seats are " << totalSeats << endl;
            } else {
                int sophos, juniors;
                cout << "How many Sopho? ";
                cin >> sophos;
                cout << "How many Juniors? ";
                cin >> juniors;

                if (sophos + juniors != tickets) {
                    cout << "Ticket count mismatch. Try again." << endl;
                    continue;
                }

                float total = (sophos * 100) + (juniors * 50);

                if (tickets > 3) {
                    total = total * 0.8;
                }

                totalSeats -= tickets;
                totalTicketsSold += tickets;
                totalIncome += total;
            }
        } else if (choice == 2) {
            cout << "Free seats: " << totalSeats << " Income: " << totalIncome << endl;
        } else if (choice == 3) {
            break;
        }
    }

    return 0;
}
