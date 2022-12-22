#include <iostream>
using namespace std;
void func(int a, int b = 5, int c = 0);
int main()
{
	int a;
	cout << "Enter the first parameter\n";
	cin >> a;
	func(a);
	return 0;
}
void func(int a, int b, int c)
{
	cout << a;
	cout << b;
	cout << c;
}