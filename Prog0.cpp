#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	int a[n];
	cout<<"Enter the value of integers : ";
	int max=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	cout<<"The Maximum value is "<<max<<endl;
	return 0;
}

