#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter Your age : ";
    cin >> age;

    if ( age >= 18 ) {
        cout << "Your Age is 18+" << endl;
    } else {
        cout  << "Your Age is less than 18" << endl;
    }

    return 0;
}