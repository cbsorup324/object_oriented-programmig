#include <iostream>

using namespace std;

class F_Name
{
	public:
	char name1[36];
	char name2[36];

	void name()
	{
		cout <<"Enter Your First Name :"<<endl;
		cin >> name1;
	}

	void l_name()
	{
		name();	
        cout <<"Enter Your Last Name :"<<endl;
		cin >> name2;
	}

	void f_name()
	{
		l_name();
		cout << "Your full Name is : " << endl;
		cout << name1 << name2 << endl;
	}
};

int main()
{
	F_Name obj1;
	obj1.f_name();
	return 0;
}