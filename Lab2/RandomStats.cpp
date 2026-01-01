#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double n1 = rand() / (double)RAND_MAX;
    double n2 = rand() / (double)RAND_MAX;
    double n3 = rand() / (double)RAND_MAX;
    double n4 = rand() / (double)RAND_MAX;
    double n5 = rand() / (double)RAND_MAX;

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << n5 << endl;

    double average = (n1 + n2 + n3 + n4 + n5) / 5.0;

    double minimum = n1;
    if (n2 < minimum) minimum = n2;
    if (n3 < minimum) minimum = n3;
    if (n4 < minimum) minimum = n4;
    if (n5 < minimum) minimum = n5;

    double maximum = n1;
    if (n2 > maximum) maximum = n2;
    if (n3 > maximum) maximum = n3;
    if (n4 > maximum) maximum = n4;
    if (n5 > maximum) maximum = n5;

    cout << "Average: " << average << endl;
    cout << "Min: " << minimum << endl;
    cout << "Max: " << maximum << endl;

    return 0;
}