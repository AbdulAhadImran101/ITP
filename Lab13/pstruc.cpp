#include <iostream>
using namespace std;

struct phone {
    [cite_start]int area_code; [cite: 35]
    [cite_start]int exchange; [cite: 35]
    [cite_start]int number; [cite: 35]
};

int main() {
    [cite_start]phone p1 = {212, 767, 8900}; [cite: 36, 42]
    [cite_start]phone p2; [cite: 36]

    [cite_start]cout << "Enter area code: "; cin >> p2.area_code; [cite: 40]
    [cite_start]cout << "Enter exchange: "; cin >> p2.exchange; [cite: 40]
    [cite_start]cout << "Enter number: "; cin >> p2.number; [cite: 41]

    [cite_start]cout << "My number is (" << p1.area_code << ") " << p1.exchange << "-" << p1.number << endl; [cite: 42]
    [cite_start]cout << "Your number is (" << p2.area_code << ") " << p2.exchange << "-" << p2.number << endl; [cite: 43]

    return 0;
}