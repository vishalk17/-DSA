// primitive data types : int , float , char, double , bool

#include <iostream>
using namespace std;

int main(){
    int num = 2;
    float num2 = 3.5f;     // 'f' specifies that 3.5 is a float
    char grade = 'A';
    bool isSafe = true;
    double num3 = 100.89;  // No need for 'f' since it's double

    cout << num << "\n" << num2 << "\n" << num3 << "\n" << grade << "\n";
    return 0;
}