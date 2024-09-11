#// syntax for for loop
// 
// for (initialization; condition; increment/decrement) {
//     // code to be executed
// }

// sum of odd number form 1 to n


#include <iostream>
using namespace std;

int main() {
    int n = 15;
    int sum = 0;

    for (int i = 1; i <= n ; i++ ){
        if ( i%2 != 0 ){
            cout << i << " " ;
            sum += i;
        }

    }

    cout << endl << "Sum of Odd Numbers : "<< sum << endl;
    return 0;
}