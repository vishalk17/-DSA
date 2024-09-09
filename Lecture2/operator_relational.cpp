// relational operator
// values are in forms of true = 1 or false = 0

#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout << "less than " << (6 < 7) << endl;
    cout << "less than: " << (a<b) << "\n";
    cout << "greater than: " << (a>b) << "\n";
    cout << "less than or equal to: " << (a<=b) << "\n";
    cout << "greater than or equal to: " << (a>=b) << "\n";
    cout << "equal to: " << (a==b) << "\n";
    cout << "not equal to: " << (a!=b) << "\n";

    return 0;
}  // end of main