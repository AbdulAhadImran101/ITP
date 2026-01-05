#include <iostream>
using namespace std;
int main(){
    int n1,d1,n2,d2,nr,dr;
    char op;
    cout << "Enter numerator and denominator of first fraction: ";
    cin >> n1 >> d1;

    cout << "Enter numerator and denominator of second fraction: ";
    cin >> n2 >> d2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> op;
    
    if (op == '+'){
        nr= n1*d2 + n2*d1;
        dr= d1*d2;
    }
    else if(op == '-'){
        nr= n1*d2 - n2*d1;
        dr= d1*d2;
    }
    else if(op == '*'){
        nr= n1*n2;
        dr= d1*d2;
    }
    else if (op == '/') {
        nr = n1 * d2;
        dr = d1 * n2;
    } 
    else {
        cout << "Invalid operation!" << endl;
        return 0;
    }
    
    int a = nr, b = dr;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    int gcd;
    if (a == 0){
        gcd = 1;
    }
    else{
    gcd = a;
    }
    
    nr /= gcd;
    dr /= gcd;


    if (dr < 0) {
        dr = -dr;
        nr = -nr;
    }

    cout << "Result: " << nr << "/" << dr << endl;


}