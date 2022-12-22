//Write a program in C++ which will overload class member access -> operator.

#include <iostream>
using namespace std;
class sp
{
public:
    int a;
    sp(int x)
    {
        a = x;
    }
    sp *operator->()
    {
        return this;
    }
};
int main()
{
    sp *p = new sp(10);
    cout << "Number = " << p->a<<endl;
    sp f(20);
    cout << "Number = " << f->a;

    return 0;
}