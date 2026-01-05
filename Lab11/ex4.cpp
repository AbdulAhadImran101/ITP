#include <iostream>

using namespace std;

int WordCount(char *Text, int size){
    int total = 0;
    
   
    if(size > 0 && Text[0] != ' '){
        total = 1;
    }
    
    for(int x = 0; x < size - 1; x++){
        
        if(Text[x] == ' ' && Text[x+1] != ' '){
            total++;
        }
    }
    
    return total;
}

int main(){
    char my_string[] = "This is a test";
    int length = 14; 
    
    int words = WordCount(my_string, length);
    
    cout << "Word count is: " << words << endl;

    return 0;
}