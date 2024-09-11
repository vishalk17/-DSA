// nested loops


// one line 5 star 
// total number of lines = n


#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int m = 5;

    for (int i = 1; i <= n; i++ ){
        for(int j = 1; j <= m; j++  ) {
            cout << "*";
        }
        cout << endl;
    }
}
