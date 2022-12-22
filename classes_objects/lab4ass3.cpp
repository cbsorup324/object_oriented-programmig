#include <iostream>
using namespace std;
class S_Func
{
	int code;
	static int count;

	public:
		void code1()
		{
			code=++count;
		}
		void code2()
		{
			cout << " Object Number: " << code <<endl;
		}
		static void dis_count()
		{
			cout << "count: " << count <<endl;
		}
};
int S_Func ::count;
int main()
{
	S_Func obj1,obj2,obj3;

	obj1.code1();
	obj2.code1();
	obj3.code1();

	S_Func :: dis_count();

	S_Func obj4;
	obj4.code1();

	S_Func :: dis_count();

	obj1.code2();
	obj2.code2();
	obj3.code2();
	obj4.code2();

	return 0;
}