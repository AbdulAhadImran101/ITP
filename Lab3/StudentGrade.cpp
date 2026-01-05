#include <iostream>
#include <string>

using namespace std;

int main() {
    double exam, assignment, participation;
    string attendance;
    double final_percent;
    char letter;

    
    cin >> exam >> assignment >> participation >> attendance;

    
    if (exam < 50) {
        letter = 'F';
        final_percent = (exam * 0.5) + (assignment * 0.3) + (participation * 0.2);
    } else {
        
        final_percent = (exam * 0.5) + (assignment * 0.3) + (participation * 0.2);

        
        if (attendance == "Perfect") {
            final_percent = final_percent + 5;
        }

        
        if (final_percent >= 90) {
            letter = 'A';
        } else {
            if (final_percent >= 80) {
                letter = 'B';
            } else {
                if (final_percent >= 70) {
                    letter = 'C';
                } else {
                    if (final_percent >= 60) {
                        letter = 'D';
                    } else {
                        letter = 'F';
                    }
                }
            }
        }
    }

    cout << "Final Grade: " << letter