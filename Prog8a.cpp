#include<iostream>
using namespace std;
int a[10];
int n;
int max(int a,int b)
{
	return ((a>b)?a:b);
}
bool check()
{
	for(int i=0;i<n/2;i++)
	{
		if(!(a[i]>=max(a[2*i+1],a[((2*i+2)>n)?(2*i+1):(2*i+2)])))
			return false;
	}
	return true;
}
int main()
{
	cout<<"Enter the number of elements :  ";
	cin>>n;
	cout<<"\nEnter the elements of the array :\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(check())
		cout<<"\nTrue";
	else
		cout<<"\nFalse";
	return 0;
}
