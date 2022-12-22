#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the day no (1-7) : \n";
    cin >> a;
    if (a == 1)
    {
        cout << "The  day is : Monday";
    }
    else if (a == 2)
    {
        cout << "The day is : Tuesday";
    }
    else if (a == 3)
    {
       cout << "The  day is : Wednesday";
    }
    else if (a == 4)
    {
        cout << "The  day is : Thursday";
    }
    else if (a == 5)
    {
        cout << "The  day is : Friday";
    }
    else if (a == 6)
    {
       cout << "The  day is : Saturday";
    }
    else if (a == 7)
    {
        cout << "The day is : Sunday";
    }
    else
    {
        cout<<"Invalid Input!";
    }
    return 0;
}