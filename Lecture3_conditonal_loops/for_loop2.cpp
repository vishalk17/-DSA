// syntax for for loop
// 
// for (initialization; condition; increment/decrement) {
//     // code to be executed
// }

// sum of number form 1 to n

#include <iostream>
using namespace std;

int main() {
    int n = 15;
    int sum = 0;
    for ( int i = 1; i <= n; i++ ){
        sum += i;  // we can also write it as --> sum = (sum + i )  // 1+2+3..+n
        if (i == 5){
            break;  // it will break the loop when i == 5
        }
    }

    cout << sum << endl;
    return 0;
}