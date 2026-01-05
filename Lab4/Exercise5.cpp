#include <iostream>
#include <string>

using namespace std;

int main() {
    string isWeekday;
    string isVacation;

    cin >> isWeekday >> isVacation;

    bool weekday = (isWeekday == "true");
    bool vacation = (isVacation == "true");

    if (!weekday || vacation) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}