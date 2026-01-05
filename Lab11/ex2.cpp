#include <iostream>

using namespace std;

float sumAll(float *ptr, int n){
    float the_sum = 0.0;
    for(int i = 0; i < n; i++){
        
        the_sum = the_sum + *(ptr + i);
    }
    return the_sum;
}

int main(){
    float arr[] = {4.5, 3.3, 0.5, 4.57};
    
    cout << sumAll(arr, 4) << endl;

    return 0;
}