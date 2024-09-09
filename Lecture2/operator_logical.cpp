// or: ||   , AND " && " ,  Not (reverse the answer) : !

// answer would be in true (1) or false (0)

#include <iostream>
using namespace std;

int main(){
    cout << ( (3 < 5) && ( 10 < 12) ) << endl;   // must be true
    cout << ( (3 < 5) || ( 10 < 12) ) << endl;   // must be true
    cout << !(3 < 5) << endl;  // must be false

    return 0;
}