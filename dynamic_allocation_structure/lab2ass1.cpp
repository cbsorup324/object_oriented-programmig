//WAP in C++ which will accept the name and age of a student and display the same.

#include <iostream>

using namespace std;
int main()
{
    int age;
    char n[34];

    cout << "Enter Name :\n ";
    cin >> n;

    cout << "Enter age :\n ";
    cin >> age;

    cout << "Name is  : \n" << n;
    cout << "Age is : \n" << age;

    return 0;

}