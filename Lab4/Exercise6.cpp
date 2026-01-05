#include <iostream>
#include <string>

using namespace std;

void showSteps(string type, double water, double sugar, double mix1, double coffee, double milk, double mix2) {
    cout << "Put Water: " << water << " mins" << endl;
    cout << "Sugar: " << sugar << " mins" << endl;
    cout << "Mix Well: " << mix1 << " mins" << endl;
    cout << "Add Coffee: " << coffee << " mins" << endl;
    if (type == "W") {
        cout << "Add Milk: " << milk << " mins" << endl;
    }
    cout << "Mix Well: " << mix2 << " mins" << endl;
}

int main() {
    string coffeeType;
    string isDouble;
    string isManual;

    cin >> coffeeType >> isDouble >> isManual;

    double water, sugar, mix1, coffee, milk, mix2;

    if (coffeeType == "W") {
        water = 15;
        sugar = 15;
        mix1 = 20;
        coffee = 2;
        milk = 4;
        mix2 = 20;
    } else {
        water = 20;
        sugar = 20;
        mix1 = 25;
        coffee = 15;
        milk = 0;
        mix2 = 25;
    }

    if (isDouble == "yes") {
        water = water * 1.5;
        sugar = sugar * 1.5;
        mix1 = mix1 * 1.5;
        coffee = coffee * 1.5;
        milk = milk * 1.5;
        mix2 = mix2 * 1.5;
    }

    if (isManual == "yes") {
        showSteps(coffeeType, water, sugar, mix1, coffee, milk, mix2);
    } else {
        double total = water + sugar + mix1 + coffee + milk + mix2;
        cout << "Total time: " << total << " mins" << endl;
    }

    return 0;
}