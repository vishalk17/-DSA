#include <iostream>
using namespace std;

int main() {

    int marks;
    cout << "Enter marks : ";
    cin >> marks;

    if ( (marks >= 90) ) {
        cout << "Grade is 'A' " << endl;
    } else if ( (marks >= 80) && (marks < 90 )) {
        cout  << "Grade is 'B'" << endl;
    } else if ( (marks >= 70) && (marks < 80 )) {
        cout  << "Grade is 'c'" << endl;
    } else {
        cout  << "Grade is 'D'" << endl;
    }

    return 0;
}