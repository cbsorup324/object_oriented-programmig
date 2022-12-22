// This function, swaps discussed earlier, can be written
//using pointer parameters.
#include <iostream> 
void swap(int *,int *);
int main()
{
	int iVar1,iVar2;
	cout << “Input two numbers “ << endl;
	cin >> iVar1;
	cin >> iVar2;
	swap(&iVar1,&iVar2); calling the swap() function
	cout << iVar1 << “ “ <<iVar2 << endl; 
	return 0;
}
void swap(int *ptr1,int *ptr2)
{
	int iTemp;
	iTemp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = iTemp;
	cout << *ptr1 << “ “<< *ptr2<< endl;
	return;
}