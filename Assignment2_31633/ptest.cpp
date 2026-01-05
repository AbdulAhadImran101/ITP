#include <iostream>
using namespace std;

int main() {
    int cor = 0;         
    int num[10];         
    float pred[10];      
    float real[10];      
    for (int i = 0; i < 10; i++) {
        cout << "enter number " << i + 1 << ":\n";
        cin >> num[i];
    }

    const float w =  4.65f;
    const float b =  0.10f;

    for (int count = 0; count < 10; count++) {
        float x = (float)num[count];

        float y = w * x + b;          
        float t = 2.0f * (x * x) - 4; 

        pred[count] = y;
        real[count] = t;

        cout << "x value: " << x
             << ", y value: " << y
             << ", target value: " << real[count] << "\n";

        float diff = y - real[count];
        if (diff <= 1.0f && diff >= -1.0f) {
            cout << " correct\n";
            cor = cor + 1;
        } else {
            cout << " not correct\n";
        }
    }

    cout << (cor / 10.0f) * 100.0f << "% accuracy\n";
    return 0;
}