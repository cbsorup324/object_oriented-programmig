// 2
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string line;

    ifstream ini_file{

        "original.txt"

    };

    ofstream out_file{"copy.txt"};

    if (ini_file && out_file)
    {

        while (getline(ini_file, line))
        {

            out_file << line << "\n";
        }

        cout << "Copy Finished \n";
        cout << "Contentes of the file :\n"
             << line;
    }

    else
    {

        printf("Cannot read File");
    }

    ini_file.close();

    out_file.close();

    return 0;
}