#include<iostream>
using namespace std;

class item
{
    static int count;
    int number;
    public : 
    void getdata()
    {
        count ++;

    }
    void getcount()
    {
        cout <<"Count : "<<count << "\n";
    }
};

int item  :: count;
int main()
{
    item a,b,c,d;
    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();

    a.getdata();
    b.getdata();
    c.getdata();
    d.getdata();

    cout << "After reading data : "<<"\n";

    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();
    return 0;
}