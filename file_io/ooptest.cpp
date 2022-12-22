#include <fstream>
#include <iostream>
using namespace std;
class student
{
private:
    int age;
    char cName[20];
    char sex[20];

public:
    void setAge()
    {
        cout << "Enter age :";
        cin >> age;
    }
    void setName()
    {
        cout << "\nEnter the name of the student :";
        cin >> cName;
    }
    void setSex()
    {
        cout << "\nEnter the sex :";
        cin >> sex;
    }
    int getAge()
    {
        return age;
    }
    char *getName()
    {
        return cName;
    }
    char *getSex()
    {
        return sex;
    }
};

int main()
{
    ofstream Sfill("1std.dat");
    char ch;
    student Svar;
    while (1)
    {
        cout << "Want to enter new or more records\n";
        cin >> ch;
        if (ch == 'n')
            break;
        Svar.setAge();
        Svar.setName();
        Svar.setSex();

        Sfill.write((char *)&Svar, sizeof(student));
    }
    Sfill.close();
    cout << "\nDO you want to view the contents of a file (y/n)?";
    cin >> ch;
    if (ch == 'y')
    {
        ifstream Sfill("1std.dat");
        Sfill.read((char *)&Svar, sizeof(student));
        while (Sfill)
        {
            cout << "\nStudent age is" << Svar.getAge();
            cout << "\nStudent name is " << Svar.getName();
            cout << "\nStudent name is " << Svar.getSex();
            Sfill.read((char *)&Svar, sizeof(student));
        }
    }
    return 0;
}