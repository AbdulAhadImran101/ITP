#include <iostream>
#include <string>

using namespace std;

int main() {
    int ageNum;
    int expYears;
    string carType;
    int accidents;
    double base_premium = 0;

   
    cin >> ageNum >> expYears >> carType >> accidents;

    
    if (ageNum < 25) {
        base_premium = 1000; 
    } else {
        if (ageNum <= 65) {
            base_premium = 600;
        } else {
            base_premium = 800; 
        }
    }

    
    if (expYears < 2) {
        base_premium = base_premium * 1.3; 
    } else {
        if (expYears <= 5) {
            base_premium = base_premium * 1.1;
        } else {
            base_premium = base_premium * 0.9;
        }
    }

    
    if (carType == "SUV") {
        base_premium = base_premium * 1.2;
    } else {
        if (carType == "Sports") {
            base_premium = base_premium * 1.5;
        }
    }

   
    if (accidents > 0) {
        double penalty = 0.25 * accidents;
        base_premium = base_premium + (base_premium * penalty);
    }

    cout << "Annual Premium: $" << base_premium << endl;

    return 0;
}