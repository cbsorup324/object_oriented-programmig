#include <iostream>
using namespace std;
class Distance
{
public:
    int inch;
    int feet;
    void add(Distance c4, Distance c5);
};
int main()
{
    Distance c1;
    Distance c2;
    Distance c3;
    cout << "Enter 1st feet & inch : ";
    cin >> c1.feet >> c1.inch;
    cout << "Enter 2nd feet & inch : ";
    cin >> c2.feet >> c2.inch;

    c3.add(c1, c2);

    return 0;
}
void Distance ::add(Distance c4, Distance c5)
{

    inch = c4.inch + c5.inch;
    feet = c4.feet + c5.feet;
    if (inch >= 12)
    {
        int addfeet;
        addfeet = inch / 12;
        feet = feet + addfeet;
        inch = inch % 12;
    }
    cout << feet << ":" << inch;
}