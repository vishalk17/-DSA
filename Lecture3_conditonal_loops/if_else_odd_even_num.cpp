#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter number : ";
    cin >> num;

    if ( (num%2) == 0 ) {
        cout << "Number is Even " << endl;
    } else {
        cout  << "Number is odd" << endl;
    }

    return 0;
}