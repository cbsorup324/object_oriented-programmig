//WAP in C++ which will display the usage of type casting both implicit type casting and
//explicit type casting.

#include <iostream>
using namespace std;
int main()
{
    int int1 = 9, int2 ;
    double dble1, dble2 = 3.56;
    // Implicit 
    dble1 = int1;
    cout << "int no =" << int1;
    cout << "\ndouble no =" << dble1;
    // Explicit
    int2 = (int)dble2;
    cout << "\ndouble no =" << dble2;
    cout << "\nint no  =" << int2;
    return 0;
}