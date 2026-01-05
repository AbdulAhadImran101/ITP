#include <iostream>

using namespace std;

int main() {
    double totalCalories, fatGrams;

    cin >> totalCalories >> fatGrams;

    if (totalCalories < 0 || fatGrams < 0) {
        cout << "Error: inputs cannot be less than 0" << endl;
    } else {
        double caloriesFromFat = fatGrams * 9;

        if (caloriesFromFat > totalCalories) {
            cout << "Error: calories or fat grams incorrectly entered" << endl;
        } else {
            double percentage = (caloriesFromFat / totalCalories) * 100;

            cout << "Percentage of calories from fat: " << percentage << "%" << endl;

            if (percentage < 30) {
                cout << "The food is low in fat" << endl;
            }
        }
    }

    return 0;
}