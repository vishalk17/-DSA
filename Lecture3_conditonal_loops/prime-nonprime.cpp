// Non-Prime Numbers
// A non-prime number (often called a composite number) is a natural number greater than 1 that is not prime. 
// This means it has more than two positive divisors, which means it can be divided exactly by at least one number other than 1 and itself.

#include <iostream>
using namespace std;

int main(){
    int n = 6;
    bool isPrime =  true;
    for(int i = 2 ; i<=n-1 ; i++  ){
        if ( n%i == 0 ){
            isPrime = false;
            break;
        }
    }

    if (isPrime == false ){
        cout << n << " is a non-prime number" << endl;
    } else {
        cout << n << " is a prime number" << endl;
    }
}

// vishal@vishalk17:~/Documents/Learn/DSA/Lecture3_conditonal_loops$ g++ prime-nonprime.cpp && ./a.out 
// 10 is a non-prime number
// vishal@vishalk17:~/Documents/Learn/DSA/Lecture3_conditonal_loops$ g++ prime-nonprime.cpp && ./a.out 
// 2 is a prime number