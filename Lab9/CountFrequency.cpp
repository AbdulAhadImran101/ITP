#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int s;
    cout << "Enter array size: ";
    cin >> s;

    int arr[100]; 
    
    cout << "Numbers: ";
    for(int i=0; i<s; i++){
        arr[i] = rand() % 11; // 0 to 10
        cout << arr[i] << " ";
    }
    cout << endl;

    
    for(int i=0; i<=10; i++) {
        int count = 0;
        bool found = false;
        
        for(int j=0; j<s; j++) {
            if(arr[j] == i) {
                count++;
                found = true;
            }
        }

        if(found == true) {
            cout << i << " -> " << count << " times" << endl;
        }
    }

    return 0;
}