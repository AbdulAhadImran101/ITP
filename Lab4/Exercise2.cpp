#include <iostream>
#include <string>

using namespace std;

int main() {
    double side1, side2, side3;

    cin >> side1 >> side2 >> side3;

    string result = (side1 == side2 && side2 == side3) ? "Equilateral" : 
                    (side1 == side2 || side1 == side3 || side2 == side3) ? "Isosceles" : 
                    "Scalene";

    cout << result << endl;

    return 0;
}