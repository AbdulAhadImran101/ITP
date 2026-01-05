#include <iostream>
using namespace std;

int main() {
    int one;
    int one1;
    int ten;
    int ten1;
    int hundred;
    int hundred1;
    int thousand;
    int num;
    cout << " input an integer between −999, 999 and 999, 999: ";
    cin >> num;
    if (num == 0){
        cout << "zero";
        
    }
    else{
        if (num < 0){
            cout << "negative ";
            num = num * -1;
        }
        if (num > 0){
            one = num % 10;
            ten = (num % 100)/10;
            hundred = (num %1000 )/100;
            
            thousand = num/1000;
            one1 = thousand % 10;
            ten1= (thousand%100)/10;
            hundred1 = (thousand /100 );
            
            if (hundred1 != 0){
                if (hundred1 == 1){
                    cout << "one ";
                }
                if (hundred1 == 2){
                    cout << "two ";
                }
                if (hundred1 == 3){
                    cout << "three ";
                }
                if (hundred1 == 4){
                    cout << "four ";
                }
                if (hundred1 == 5){
                    cout << "five ";
                }
                if (hundred1 == 6){
                    cout << "six ";
                }
                if (hundred1 == 7){
                    cout << "seven ";
                }
                if (hundred1 == 8){
                    cout << "eight ";
                }
                if (hundred1 == 9){
                    cout << "nine ";
                }
                
                cout << "hundred ";
            }
            if (ten1 != 0){
                
                if (ten1 == 1){
                    if (one1 == 0){
                        cout << "ten ";
                    }
                    if (one1 == 1){
                    cout << "eleven ";
                }
                if (one1 == 2){
                    cout << "twelve ";
                }
                if (one1 == 3){
                    cout << "thirteen ";
                }
                if (one1 == 4){
                    cout << "fourteen ";
                }
                if (one1 == 5){
                    cout << "fifteen ";
                }
                if (one1 == 6){
                    cout << "sixteen ";
                }
                if (one1 == 7){
                    cout << "seventeen ";
                }
                if (one1 == 8){
                    cout << "eighteen ";
                }
                if (one1 == 9){
                    cout << "nineteen ";
                }   
                }
                if (ten1 == 2){
                    cout << "twenty ";
                }
                if (ten1 == 3){
                    cout << "thirty ";
                }
                if (ten1 == 4){
                    cout << "forty ";
                }
                if (ten1 == 5){
                    cout << "fifty ";
                }
                if (ten1 == 6){
                    cout << "sixty ";
                }
                if (ten1 == 7){
                    cout << "seventy ";
                }
                if (ten1 == 8){
                    cout << "eighty ";
                }
                if (ten1 == 9){
                    cout << "ninety ";
                    
                }
                
            }
            if (one1 != 0 && one1 != 1){
                if (one1 == 1){
                    cout << "one ";
                }
                if (one1 == 2){
                    cout << "two ";
                }
                if (one1 == 3){
                    cout << "three ";
                }
                if (one1 == 4){
                    cout << "four ";
                }
                if (one1 == 5){
                    cout << "five ";
                }
                if (one1 == 6){
                    cout << "six ";
                }
                if (one1 == 7){
                    cout << "seven ";
                }
                if (one1 == 8){
                    cout << "eight ";
                }
                if (one1 == 9){
                    cout << "nine ";
                }   
                
            }
            if (hundred1 != 0 && ten1 !=0 && one1 != 0){
                cout << "thousand ";
            }
            
                        
            if (hundred != 0){
                if (hundred == 1){
                    cout << "one ";
                }
                if (hundred == 2){
                    cout << "two ";
                }
                if (hundred == 3){
                    cout << "three ";
                }
                if (hundred == 4){
                    cout << "four ";
                }
                if (hundred == 5){
                    cout << "five ";
                }
                if (hundred == 6){
                    cout << "six ";
                }
                if (hundred == 7){
                    cout << "seven ";
                }
                if (hundred == 8){
                    cout << "eight ";
                }
                if (hundred == 9){
                    cout << "nine ";
                }
                
                cout << "hundred ";
            }
            if (ten != 0){
                
                if (ten == 1){
                    if (one == 0){
                        cout << "ten ";
                    }
                    if (one == 1){
                    cout << "eleven ";
                }
                if (one == 2){
                    cout << "twelve ";
                }
                if (one == 3){
                    cout << "thirteen ";
                }
                if (one == 4){
                    cout << "fourteen ";
                }
                if (one == 5){
                    cout << "fifteen ";
                }
                if (one == 6){
                    cout << "sixteen ";
                }
                if (one == 7){
                    cout << "seventeen ";
                }
                if (one == 8){
                    cout << "eighteen ";
                }
                if (one == 9){
                    cout << "nineteen ";
                }   
                }
                if (ten == 2){
                    cout << "twenty ";
                }
                if (ten == 3){
                    cout << "thirty ";
                }
                if (ten == 4){
                    cout << "forty ";
                }
                if (ten == 5){
                    cout << "fifty ";
                }
                if (ten == 6){
                    cout << "sixty ";
                }
                if (ten == 7){
                    cout << "seventy ";
                }
                if (ten == 8){
                    cout << "eighty ";
                }
                if (ten == 9){
                    cout << "ninety ";
                    
                }
                
            }
            if (one != 0 && one != 1){
                if (one == 1){
                    cout << "one ";
                }
                if (one == 2){
                    cout << "two ";
                }
                if (one == 3){
                    cout << "three ";
                }
                if (one == 4){
                    cout << "four ";
                }
                if (one == 5){
                    cout << "five ";
                }
                if (one == 6){
                    cout << "six ";
                }
                if (one == 7){
                    cout << "seven ";
                }
                if (one == 8){
                    cout << "eight ";
                }
                if (one == 9){
                    cout << "nine ";
                }   
                
            }
        }
    }

}