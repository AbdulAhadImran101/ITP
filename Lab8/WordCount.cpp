#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input_text;
    int word_count = 0;

    cout << "Input: ";
    getline(cin, input_text);

    stringstream ss(input_text);
    string word;

    while (ss >> word) {
        word_count = word_count + 1;
    }

    cout << "Output: Number of words = " << word_count << endl;

    return 0;
}