#include <iostream>
#include <string>
using namespace std;

struct student_info {
    string name;
    int roll;
};

int main() {
    int N;
    cout << "Enter N: ";
    [cite_start]cin >> N; [cite: 54]

    [cite_start]student_info* list = new student_info[N]; [cite: 54]

    for(int i=0; i<N; i++) {
        cout << "Enter name for student " << i+1 << ": ";
        cin >> list[i].name;
        cout << "Enter roll: ";
        cin >> list[i].roll;
    }

    cout << "Stored info:" << endl;
    for(int i=0; i<N; i++) {
        cout << list[i].name << " " << list[i].roll << endl;
    }

    delete[] list;
    return 0;
}