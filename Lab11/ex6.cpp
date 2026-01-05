#include <iostream>

using namespace std;

void SentenceCase(char *Text, int *size) {
    int len = *size;
    bool newSentence = true;

    for (int i = 0; i < len; i++) {
        char current = Text[i];

        if (newSentence && current >= 'a' && current <= 'z') {
            
            Text[i] = current - 32;
            newSentence = false;
        } else if (!newSentence && current >= 'A' && current <= 'Z') {
            
            Text[i] = current + 32;
        }

        
        if (current == '.') {
            newSentence = true;
        } else if (current != ' ') {
            
            if (newSentence == false || (current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z')) {
                 
            }
        }
    }
}

int main() {
    char myText[] = "hello. this IS A test. EVERYTHING SHOULD BE CORRECT.";
    int textSize = 52; 

    SentenceCase(myText, &textSize);

    cout << "Corrected Text: " << endl;
    for (int j = 0; j < textSize; j++) {
        cout << myText[j];
    }
    cout << endl;

    return 0;
}