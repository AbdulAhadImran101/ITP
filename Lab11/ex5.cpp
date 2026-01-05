#include <iostream>

using namespace std;

void SortFunction(int *arr, int *size, int order) {
    int n = *size;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            bool shouldSwap = false;
            
            if (order == 1) { 
                if (arr[j] > arr[j + 1]) {
                    shouldSwap = true;
                }
            } else if (order == 2) { 
                if (arr[j] < arr[j + 1]) {
                    shouldSwap = true;
                }
            }

            if (shouldSwap) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int myNumbers[] = {5, 2, 9, 1, 5, 6};
    int totalElements = 6;
    int sortType = 1; 

    SortFunction(myNumbers, &totalElements, sortType);

    cout << "Sorted array: ";
    for (int k = 0; k < totalElements; k++) {
        cout << myNumbers[k] << " ";
    }
    cout << endl;

    return 0;
}