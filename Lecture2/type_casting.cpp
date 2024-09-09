// Type Casting : converting data from one data type to another
//  two types : implicit and explicit
// implicit :  compilier do their self ; explicit : developer manual intervation

#include <iostream>
using namespace std;

int main(){
    double num3 = 100.89;
    int final = (int)num3;   // (int) : telling that it has to be in integer value ; // Explicitly casting double to int

    cout << final << "\n";
    return 0;
}  // end of main

// Output: 100  : The int type does not store any fractional or decimal parts. 
// When casting from double to int, the fractional part is discarded, not rounded. Therefore, 100.89 becomes 100.