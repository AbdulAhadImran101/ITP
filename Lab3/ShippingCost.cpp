#include <iostream>
#include <string>

using namespace std;

int main() {
    double w, orderVal;
    char zone;
    string expressInput;
    double cost = 0;

    
    cin >> w >> zone >> expressInput >> orderVal;

    
    if (orderVal > 200) {
        cost = 0;
    } else {
        
        double rate = 0;
        if (zone == 'A') {
            rate = 5;
        } else {
            if (zone == 'B') {
                rate = 7;
            } else {
                if (zone == 'C') {
                    rate = 10;
                }
            }
        }

        cost = w * rate;

        
        if (w > 50) {
            cost = cost + 30;
        } else {
            if (w > 20) {
                cost = cost + 15;
            }
        }

        
        if (expressInput == "Yes") {
            cost = cost * 1.5;
        }
    }

    cout << "Shipping Cost = $" << cost << endl;

    return 0;
}