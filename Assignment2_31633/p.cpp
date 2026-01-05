#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double x = 3.0;          
    const double target = 14.0;    
    const double learningRate = 0.01;
    const int steps = 1000;

    double w = 0.0;
    double b = 0.0;

    cout << fixed << setprecision(2);

    for (int i = 0; i < steps; i++) {
        double y = w * x + b;

        double error = target - y;

        w = w + learningRate * error * x;   
        b = b + learningRate * error;       

        if (i % 100 == 0) {
            cout << "Step " << setw(3) << i
                 << ": prediction = " << setw(5) << y
                 << ", error = " << error << "\n";
        }
    }

    double finalPrediction = w * x + b;
    cout << "\nFinal prediction at x=3: " << finalPrediction << "\n";
    cout << "Target value: " << target << "\n";
    cout << "Final w = " << w << ", b = " << b << "\n";

}