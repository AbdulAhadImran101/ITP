#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int rand_vals[10];
    int c = 0;
    while (c < 10) {
        rand_vals[c] = rand() % 10;
        c = c + 1;
    }

    char phone[15];
    
    phone[0] = '(';
    phone[1] = (char)(rand_vals[0] + 48);
    phone[2] = (char)(rand_vals[1] + 48);
    phone[3] = (char)(rand_vals[2] + 48);
    phone[4] = ')';
    phone[5] = ' ';
    phone[6] = ' ';
    phone[7] = (char)(rand_vals[3] + 48);
    phone[8] = (char)(rand_vals[4] + 48);
    phone[9] = (char)(rand_vals[5] + 48);
    phone[10] = '-';
    phone[11] = (char)(rand_vals[6] + 48);
    phone[12] = (char)(rand_vals[7] + 48);
    phone[13] = (char)(rand_vals[8] + 48);
    phone[14] = (char)(rand_vals[9] + 48);

    cout << "Sample output:" << endl << endl;
    
    int p = 0;
    while (p < 15) {
        cout << phone[p];
        p = p + 1;