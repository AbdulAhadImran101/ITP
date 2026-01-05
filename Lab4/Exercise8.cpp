#include <iostream>

using namespace std;

int main() {
    int NumberOfTypes;
    int total_bill = 0;

    cout << "Enter number of food types: ";
    cin >> NumberOfTypes;

    int counter = 0;
    while (counter < NumberOfTypes) {
        char FoodChoice;
        int HowMany;

        cout << "Enter choice (B/F/P/S): ";
        cin >> FoodChoice;
        cout << "Enter quantity: ";
        cin >> HowMany;

        if (FoodChoice == 'B' || FoodChoice == 'b') {
            total_bill = total_bill + (200 * HowMany);
        } else {
            if (FoodChoice == 'F' || FoodChoice == 'f') {
                total_bill = total_bill + (50 * HowMany);
            } else {
                if (FoodChoice == 'P' || FoodChoice == 'p') {
                    total_bill = total_bill + (500 * HowMany);
                } else {
                    if (FoodChoice == 'S' || FoodChoice == 's') {
                        total_bill = total_bill + (150 * HowMany);
                    } else {
                        cout << "not a valid choice" << endl;
                        counter = counter - 1; 
                    }
                }
            }
        }
        counter = counter + 1;
    }

    cout << "Total charges: Rs. " << total_bill << endl;

    return 0;
}