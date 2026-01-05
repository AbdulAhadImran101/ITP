#include <iostream>
#include <string>
using namespace std;

struct Address {
    [cite_start]string street, city, state; [cite: 47]
    [cite_start]int zip; [cite: 47]
};

struct Course {
    [cite_start]string course_name; [cite: 47]
    [cite_start]float gpa; [cite: 47]
};

struct Student {
    [cite_start]string name; [cite: 47]
    [cite_start]Address addr; [cite: 47, 52]
    [cite_start]float cgpa; [cite: 48]
    [cite_start]Course courses[3]; [cite: 49, 52]
};

int main() {
    [cite_start]Student s[2]; [cite: 50]
    for(int i=0; i<2; i++) {
        cout << "Name: "; cin >> s[i].name;
        cout << "CGPA: "; cin >> s[i].cgpa;
        for(int j=0; j<3; j++) {
            cout << "Course " << j+1 << " name: "; cin >> s[i].courses[j].course_name;
            cout << "Course " << j+1 << " GPA: "; cin >> s[i].courses[j].gpa;
        }
    }

    // Compare courses
    for(int j=0; j<3; j++) {
        [cite_start]if(s[0].courses[j].gpa > s[1].courses[j].gpa) [cite: 50]
            cout << s[0].name << " has higher GPA in " << s[0].courses[j].course_name << endl;
        else
            cout << s[1].name << " has higher GPA in " << s[1].courses[j].course_name << endl;
    }

    // Overall
    [cite_start]if(s[0].cgpa > s[1].cgpa) [cite: 51]
        cout << s[0].name << " has highest overall CGPA" << endl;
    else
        cout << s[1].name << " has highest overall CGPA" << endl;

    return 0;
}