#include <iostream>
using namespace std;

void area(int l, int b)
{
    int area = l * b;
    cout << "\nThe Area is :" << area;
}

void area(int a)
{
    int area = a * a;
    cout << "\nThe Area is :" << area;
}

int main()
{
    int x, y, a;
    cout << "\nEnter the length and breadth of rectangle :";
    cin >> x >> y;
    cout << "\nEnter one side of a square :";
    cin >> a;
    area(x, y);
    area(a);
    return 0;
}