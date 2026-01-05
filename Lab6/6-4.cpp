#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    double random_array[6];
    double total_sum = 0.0;

    int counter = 0;
    while (counter < 6) {
        double r = (double)rand() / RAND_MAX;
        random_array[counter] = r;
        
        cout << "Array elements are = " << random_array[counter] << endl;
        
        total_sum = total_sum + random_array[counter];
        counter = counter + 1;
    }

    double avg = total_sum / 6;

    cout << endl;
    cout << "Sum is =          " << total_sum << endl;
    cout << "Average is =      " << avg << endl;

    return 0;
}