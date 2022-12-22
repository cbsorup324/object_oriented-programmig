//WAP in C++ which demonstrate the usage of reference variable. (&amp;varname). Or alias
//operator &amp;

#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int &al = num;
    cout <<"\nThe no is:" << num;
    cout <<"\nThe alias is:" << al;
    num = num + 2;
    cout <<"\nThe no is: " << num;
    cout <<"\nThe alias is:" << al;
    al = al + 4;
    cout <<"\nThe no is: " << num;
    cout <<"\nThe alias is:" << al;
    return 0;
}