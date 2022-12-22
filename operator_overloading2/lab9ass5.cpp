#include <iostream>
using namespace std;
class student
{
public:
    int roll, age;
    string name;
    int m1, m2, m3, m4, m5;
};
class UG : public student
{
public:
    int semester, fee, stipend;
    void get_data()
    {
        cout << "Enter roll:" << endl
             << "Enter name:" << endl
             << "Enter age: " << endl;
        cin >> roll >> name >> age;
        cout << "Enter marks for 5 subs:" << endl;
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
        cout << "Enter semester fee and stipend for UG student" << endl;
        cin >> semester >> fee >> stipend;
    }
    void show()
    {
        cout << "Roll No: " << roll << endl
             << "Name: " << name << endl
             << "Age: " << age << endl;

        cout << "Student type: UG" << endl;
        cout << "Semester: " << semester << endl
             << "Fee: " << fee << endl
             << "Stipend amount: " << stipend << endl;

        cout << "The marks are " << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;
        cout << "Total marks " << (m1 + m2 + m3 + m4 + m5) << endl;
        cout << "Average marks " << (m1 + m2 + m3 + m4 + m5) / 5 << endl;
    }
};
class PG : public UG
{
public:
    void get_data()
    {
        cout << "Enter roll:" << endl
             << "Enter name:" << endl
             << "Enter age: " << endl;
        cin >> roll >> name >> age;

        cout << "Enter marks for 5 subs:" << endl;
        cin >> m1 >> m2 >> m3 >> m4 >> m5;

        cout << "Enter semester fee and stipend PG student";
        cin >> semester >> fee >> stipend;
    }
    void show()
    {
        cout << "Roll No: " << roll << endl
             << "Name: " << name << endl
             << "Age: " << age << endl;

        cout << "Student type: PG" << endl;
        cout << "Semester: " << semester << endl
             << "Fee: " << fee << endl
             << "Stipend amount: " << stipend << endl;

        cout << "The marks are " << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;
        cout << "Total marks " << (m1 + m2 + m3 + m4 + m5) << endl;
        cout << "Average marks " << (m1 + m2 + m3 + m4 + m5) / 5 << endl;
    }
};
int main()
{
    int t = 5;
    while (t--)
    {
        int choice;
        cout << "For ug student(1) \nFor pg student (2) \nExit(0)\n";
        cin >> choice;
        if (choice == 1)
        {
            UG u;
            u.get_data();
            u.show();
        }
        else if (choice == 2)
        {
            PG p;
            p.get_data();
            p.show();
        }
        else if (choice == 0)
        {
            exit(0);
        }
    }
    return 0;
}