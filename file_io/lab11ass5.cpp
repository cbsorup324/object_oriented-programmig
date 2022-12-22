// 5
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream inFile;

    inFile.open("employee.txt");

    if (!inFile)
    {
        cout << "Unable to open file";
        exit(1);
    }

    int count = 0;
    string line;

    while (getline(inFile, line))
        count++;

    inFile.close();

    inFile.open("employee.txt");

    if (!inFile)
    {
        cout << "Unable to open file";
        exit(1);
    }

    string str[count];

    for (int i = 0; i < count; i++)
    {
        getline(inFile, str[i]);
    }

    inFile.close();

    srand(time(NULL));
    int random = rand() % count;

    cout << str[random];
    return 0;
}