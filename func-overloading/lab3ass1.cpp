#include <iostream>
using namespace std;

int birary(int a)
{

    int t[20];
    int c;
    for (c = 0; a != 0; c++)
    {
        t[c] = a % 2;
        a /= 2;
    }
    cout << "Binary Equivalent is \n";
    for (c = c - 1; c >= 0; c--)
    {
        cout << t[c];
    }
    return 0;
}

int main()
{
    int x;
    for (x = 0;;x++)
    {
        cout << "\nEnter the number : ";
        cin >> x;
        if (x > 0 && x != 999)
            birary(x);
        else if (x == 999)
        {
            break;
        }
        else if (x < 0)
        {
            cout << "\nPlease enter a different number ! \n";
        }
        
    }
    return 0;
}