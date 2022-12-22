#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter country code : ";
    cin>>s;
    int arr[20];
    cout<<"Enter your mobile number : ";
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    int x = sizeof(arr);
    int y = s.length();
    try
    {
        if(x<=10 && y!=0)
        {
            cout<<"Country code : "<<s<<endl;
            cout<<"Mobile number : "<<endl;
            for(int i=0; i<=10; i++)
            {
                cout<<arr[i];
            }
        }
        else
        {
            throw s;
            throw arr;
        }
    }
    catch(string s)
    {
        cout<<"Got an error."<<endl;
    }
    catch(int arr)
    {
        cout<<"Got an error."<<endl;
    }
    return 0;
}