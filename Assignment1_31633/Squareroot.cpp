#include <iostream>
using namespace std;
int main() {
    float num,mid;
    float eval = 999.0;
    float eval2;
    cout << "enter num ";
    cin >> num;
    float low = 0;
    float high = num;
    
    while (eval > 0.01 || eval <-0.01){
    mid = (low + high)/2;
    eval = (mid*mid)-num;
    eval2 = (low * low)-num;
        
    
    if (eval >-0.01 && eval <0.01){
        break;
    }
    else{
        if ((eval * eval2)<0){
            high = mid;
        }
        else {
            low = mid;
        }
        
    }
    }
    cout <<mid;

    
}