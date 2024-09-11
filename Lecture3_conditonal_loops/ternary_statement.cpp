// ternary statement 
// if else statement can be written in one line using ternary statement
// syntax : (condition) ? statement1 : statement2
// if condition is true then "statement1" will be executed else "statement2" will be executed


#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter age : ";
    cin >> age;

   // (age <= 18 ) ? cout << "age is less than 18\n" : cout << "age is 18+\n";

    cout << ( (age <= 18 ) ? "age is less than 18\n" : "age is 18+\n");

    return 0;
}