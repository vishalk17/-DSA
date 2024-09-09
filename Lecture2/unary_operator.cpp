//  a++ or  a = (a + 1) : post increment  , ++a : preincrement
//  a--  : post decrement  , --a : predecrement

// Post-Increment (a++) vs. Pre-Increment (++a)

//     Post-Increment (a++): Returns the current value of a, then increments a by 1.
//     Pre-Increment (++a): Increments a by 1 first, then returns the incremented value.

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = a++;  // 'b' gets the value of 'a' (10), then 'a' becomes 11
    cout << "a vaule is : " << a << "\n";  // must return 11
    cout << "b vaule is : " << b << "\n";   // must return 10

    int c = 20;
    int d = ++c;  // increment >> update
    cout << "c value is : " << c << "\n";  // should return 21
    cout << "d value is : " << d << "\n";  // should return 21 (not 20)

    return 0;
}