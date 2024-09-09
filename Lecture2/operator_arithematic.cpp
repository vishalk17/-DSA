// arithematic operators

#include <iostream>
using namespace std;

int main(){
    int a = 2, b = 10;
    double c =15;

    cout << "sum: " << (a+b+c) << "\n";
    cout << "mixed: " << (a-b+c) << "\n";
    cout << "moduler: " << (a % b) << "\n";
    cout << "product: " << (a*b) << "\n";
    cout << "division: " << (b/a) << "\n";

    return 0;
}  // end of main

// Output:

// vishal@vishalk17:~/Documents/Learn/DSA$ g++ operator.cpp && ./a.out