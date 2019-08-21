#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter the no of elements : ";
	int n;
	cin>>n;
	int a[n],k;	
	cout<<"Enter the elements of the array : \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"\nEnter the value of k : ";
	cin>>k;
	for(int i=0;i<k;i++)		//Using Bubble Down Approach
	{
		for(int j=i;j<=n-1;j++)
		{
			if(a[i]<a[j])
				swap(a[i],a[j]);
		}
	}
	for(int i=0;i<k;i++)
		cout<<"\n"<<a[i]<<" ";
	cout<<endl;
}

