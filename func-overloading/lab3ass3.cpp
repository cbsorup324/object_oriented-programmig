#include <iostream>
using namespace std;
void swap(int, int);
int main()
{
	int a, b;
	cout << "Input two numbers";
	cin >> a;
	cin >> b;

	swap(a, b);

	cout << "\n" << a;
	cout << "\n" << b;
	return 0;
}

void swap(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "\n" << a;
	cout << "\n" << b;
}