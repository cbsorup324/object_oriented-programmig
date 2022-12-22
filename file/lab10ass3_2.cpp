#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("country");
    fout << "Bangladesh\n";
    fout << "UK\n";
    fout << "India\n";
    fout.close();
    char line[50];

    ifstream fin;
    fin.open("country");

    cout << "contents of country file\n";

    while (fin)
    {
        fin.getline(line, 50);
        cout << line;
    }
    fin.close();
    return 0;
}