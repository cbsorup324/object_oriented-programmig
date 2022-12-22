#include <iostream>
using namespace std;
class Distance
{
public:
    int inch;
    int feet;

    Distance add(Distance c5)
    {
        inch = inch + c5.inch;
        feet = feet + c5.feet;
        if (inch >= 12)
        {

            feet = feet + inch / 12;
            inch = inch % 12;
        }

        cout << feet << ":" << inch;
    }
};
int main()
{
    Distance c1;
    Distance c2;
    Distance c3;
    cout << "Enter 1st feet & inch : ";
    cin >> c1.feet>> c1.inch;
    cout << "Enter 2nd feet & inch : ";
    cin >> c2.feet>> c2.inch;

    c3 = c1.add(c2);

    return 0;
}