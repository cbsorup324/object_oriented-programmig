// 3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    streampos b, e;

    ifstream myfile("example.bin", ios::binary);

    b = myfile.tellg();

    myfile.seekg(0, ios::end);

    e = myfile.tellg();

    myfile.close();

    cout << "size is: " << (e - b) << " bytes.\n";

    myfile.open("example.bin", ios::binary);

    myfile.seekg(2, ios::beg);
    int n = myfile.tellg();

    cout << "Reading from second position: ";
    cout << n << endl;

    myfile.seekg(-3, ios::cur);
    n = myfile.tellg();
    cout << "Reading from third position: ";
    cout << n << endl;

    myfile.close();
    return 0;
}