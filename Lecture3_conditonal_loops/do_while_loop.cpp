/**
 *
 * A do-while loop is a type of loop that executes a block of code at least once, and 
 * then continues to execute the block as long as a specified condition is true.
 * The syntax for a do-while loop is as follows:
 *
 * do {
 *     // code to be executed
 *     // ...
 * } while (condition);
 *
 */


#include <iostream>
using namespace std;

int main(){
    int i = 1;

    do {
        cout << i << " ";
        i++;
    } while (i <= 10);

    cout << endl;
    return 0;
}