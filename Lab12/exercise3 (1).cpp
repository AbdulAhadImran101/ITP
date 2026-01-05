
#include <iostream>

using namespace std;

int main() {
    [cite_start]float *f_ptr = new float; [cite: 27]
    
    [cite_start]cin >> *f_ptr; [cite: 27, 29]

    [cite_start]cout << "Value = " << *f_ptr << endl; [cite: 28, 31]
    [cite_start]cout << "Address " << f_ptr << endl; [cite: 28, 32]

    [cite_start]*f_ptr = *f_ptr + 10; [cite: 28]
    [cite_start]cout << "Updated Value = " << *f_ptr << endl; [cite: 33]

    delete f_ptr;
    return 0;
}