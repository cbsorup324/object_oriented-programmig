#include <iostream>

using namespace std;
class ttime
{
    public:
    int hour;
    int min;
    int sec;
};
void add(ttime t3,ttime t4)
{
    int total_hour,total_min,total_sec;
    total_hour=t3.hour+t4.hour;
    total_min=t3.min+t4.min;
    total_sec=t3.sec+t4.sec;
    if(total_sec>=60)
    {
        int minadition;
        minadition=total_sec/60;
        total_min=total_min+minadition;
        total_sec=total_sec%60;
    }
    if(total_min>=60)
    {
        int houradition;
        houradition=total_min/60;
        total_hour=total_hour+houradition;
        total_min=total_min%60;
    }
    cout<<total_hour<<":"<<total_min<<":"<<total_sec;

}

int main()
{
    ttime t1;
    ttime t2;
    cout<<"Enter 1st time in form of h:min:sec ";
    cin>>t1.hour;
    cin>>t1.min;
    cin>>t1.sec;
    cout<<"Enter 2nd time in form of h:min:sec ";
    cin>>t2.hour;
    cin>>t2.min;
    cin>>t2.sec;
    add(t1,t2);
    
    return 0;
}