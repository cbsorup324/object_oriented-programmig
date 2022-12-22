/*WAP in C++ using array which will accept the name and age of n number of students
from the keyboard and display the same on the monitor. Number of student will also be
accepted from the keyboard*/

#include <bits/stdc++.h>
using namespace std;
struct student
{
    int age;
    char name[100];
};
int main()
{
    int i, n;
    cout << "Enter student number: ";
    cin >> n;
    struct student s[n];
    cout << "\n\n";
    for (i = 0; i < n; i++)
    {
        cout << "For student no " << i + 1 ;
        cout << "Enter the name of the student: ";
        cin >> s[i].name;
        cout << "Enter the age of the student: ";
        cin >> s[i].age;
    }
    cout << "\n\n";
    cout << "Displaying information\n";
    for (i = 0; i < n; i++)
    {
        cout << "No " << i + 1 ;
        cout << "Name: " << s[i].name;
        cout << "Age: " << s[i].age;
        cout << "\n\n";
    }
    return 0;
}