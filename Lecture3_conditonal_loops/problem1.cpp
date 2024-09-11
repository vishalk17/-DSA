// sum of all numbers from 1 to N divisible by 3


#include <iostream>
using namespace std;

int main(){
    int n = 6;   // 3 , 6 = 9
    int i=0;
    int divisibleBy = 3;
    int sum = 0;

    while( i <= n ){
        if ( i % divisibleBy == 0 ){
            sum += i;
        }
        i++;
    }

    cout << sum << endl;
}

// vishal@vishalk17:~/Documents/Learn/DSA/Lecture3_conditonal_loops$ g++ problem1.cpp && ./a.out 
// 9