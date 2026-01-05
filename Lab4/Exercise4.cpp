#include <iostream>
#include <string>

using namespace std;

int main() {
    double fsc, nts;
    string university = "None";
    string department = "None";

    cin >> fsc >> nts;

    if (fsc > 70) {
        if (nts >= 70) {
            university = "Oxford University";
            department = "IT";
        } else if (nts >= 60) {
            university = "Oxford University";
            department = "Electronics";
        } else if (nts >= 50) {
            university = "Oxford University";
            department = "Telecommunication";
        }
    } 
    
    if (university == "None") {
        if (fsc >= 60 && fsc <= 70) {
            if (nts >= 50) {
                university = "MIT";
                department = "IT";
            }
        } else if (fsc >= 50 && fsc < 60) {
            if (nts >= 50) {
                university = "MIT";
                department = "Chemical";
            }
        } else if (fsc > 40 && fsc < 50) {
            if (nts >= 50) {
                university = "MIT";
                department = "Computer";
            }
        }
    }

    if (university != "None") {
        cout << "Allocated: " << university << " (" << department << ")" << endl;
    } else {
        cout << "No seat allocated." << endl;
    }

    return 0;
}