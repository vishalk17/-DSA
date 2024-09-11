#include <iostream>
using namespace std;

int main() {

    int num;
    double last_num;
    cout << "Enter number : ";
    cin >> num;
    cout << "Enter Last number : ";
    cin >> last_num;

    while (num <= last_num ){
        cout << num << " ";
        num++;
    }
    cout << endl;
    return 0;
}