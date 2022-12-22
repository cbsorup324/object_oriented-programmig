#include <iostream>
using namespace std;
class complex
{
    public:
    int rl;
    int img;
};
int main()
{
    class complex cmplx[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the real no portion :";
        cin>>cmplx[i].rl;
        cout<<"Enter the imaginary no portion [__]i :";
        cin>>cmplx[i].img;
    }
    for(int i=0;i<10;i++)
    {
        cout<<i+1<<" no complex no : "<<cmplx[i].rl<<"+"<<cmplx[i].img<<"i"<<"\n";
    }
    return 0;
}