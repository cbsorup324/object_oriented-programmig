// 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream fio;

    string line;

    cout << "Enter the string to be inserted in file";
    fio.open("Text.txt", ios::trunc | ios::out | ios::in);
    while (fio)
    {
        getline(cin, line);
        if (line == "-1")
            break;
        fio << line << endl;
    }
    fio.seekg(0, ios::beg);

    while (fio)
    {
        getline(fio, line);
        cout << line << endl;
    }
    fio.close();

    return 0;
}
