#include <iostream>
using namespace std;

int main() {

    int n = 5;
    int i = 1;
    int fact = 1;
    
    while(i <= n ){

        fact *= i ;  // fact = fact * i;
        i++;
    }

    cout << fact << endl;
    return 0;
}

