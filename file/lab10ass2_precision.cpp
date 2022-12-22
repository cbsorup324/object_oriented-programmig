#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Presion set 3 digits\n";
    cout.precision(3);
    cout.width(10);

    cout << "value";
    cout.width(15);
    cout << "sort of value" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout.width(8);
        cout << i;
        cout.width(13);
        cout << sqrt(i) << endl;
    }
    cout << "Presion set 5 digits\n";
    cout.precision(5);

    cout << "sqrt(10)" <<"\n"<< sqrt(10) << endl;
    cout << "Presion set 0 digits\n";
    cout.precision(0);

    cout << "sqrt(10)" <<"\n"<< sqrt(10) << endl;

    return 0;
}