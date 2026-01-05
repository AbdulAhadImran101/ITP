#include <iostream>

using namespace std;


void swapPointers(int * &a, int * &b){
    int *hold; 
    hold = a;
    a = b;
    b = hold;
}

int main(){
    int a = 5;
    int b = 10;
    
    int *ptrA = &a;
    int *ptrB = &b;

    
    cout << *ptrA << "          " << *ptrB << endl;
    
    cout << &ptrA << "--->" << ptrA << "    " << &ptrB << "--->" << ptrB << endl;

    swapPointers(ptrA, ptrB);

    cout << *ptrA << "          " << *ptrB << endl;
    cout << &ptrA << "--->" << ptrA << "    " << &ptrB << "--->" << ptrB << endl;

    return 0;
}