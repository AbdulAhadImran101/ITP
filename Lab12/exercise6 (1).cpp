
#include <iostream>

using namespace std;

[cite_start]void replaceChar(char *text, char oldC, char newC) { [cite: 50]
    char *curr = text;

    while (*curr != '\0') {
        [cite_start]if (*curr == oldC) { [cite: 50]
            *curr = newC;
        }
        curr++;
    }
}

int main() {
    [cite_start]char my_str[] = "banana"; [cite: 52]
    [cite_start]char to_find = 'a'; [cite: 52]
    [cite_start]char to_replace = 'x'; [cite: 52]

    replaceChar(my_str, to_find, to_replace);

    [cite_start]cout << my_str << endl; [cite: 51, 52]

    return 0;
}