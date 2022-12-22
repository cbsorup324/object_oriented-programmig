// write file
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char *s1 = "Sorup";
    int m = strlen(s1);
    for (int i = 1; i < m; i++)
    {
        cout.write(s1, i);
        cout << "\n";
    }
    for (int i = m; i > 0; i--)
    {
        cout.write(s1, i);
        cout << "\n";
    }
    cout.write(s1, m);
    // cout << "\n";

    return 0;
}