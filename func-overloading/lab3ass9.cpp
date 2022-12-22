#include <iostream>
using namespace std;

int n;
int &ref();

int main()
{
    ref() = 100;
    cout << "After returning by reference :" << n;
    return 0;
}

int &ref()
{
    return n;
}