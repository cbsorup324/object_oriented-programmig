#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter two numbers :\n";
    cin >> x >> y;
    max(x, y);
    cout << "After returning by reference :" << max(x, y);
    return 0;
}
int &max(int &x, int &y)
{
    if (x > y)
        return x;
    else
        return y;
}