#include <iostream>

using namespace std;

float* findMax(float arr[], int n){
    float high = -1000000.0; 
    float secondHigh = -1000000.0;
    
    float *ptr1 = &high;
    float *ptr2 = &secondHigh;

    for(int i = 0; i < n; i++){
        if(arr[i] > *ptr1){
            *ptr2 = *ptr1;
            *ptr1 = arr[i];
        }
        else if(arr[i] > *ptr2 && arr[i] < *ptr1){
            *ptr2 = arr[i];
        }
    }
    
   
    float* out = new float;
    *out = *ptr2;
    return out;
}

int main(){
    float arr[] = {4.5, 3.3, 0.5, 4.57};

    float *result = findMax(arr, 4);

    cout << "Second highest = " << *result << endl;

    return 0;
}