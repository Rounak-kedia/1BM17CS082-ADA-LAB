#include<iostream>
using namespace std;
void combine(int a[],int low,int mid,int high)
{
	int i=low,j=mid+1,k=0;
	int c[high-low+1];
	while(i<=mid && j<=high)
	{
			if(a[i]<a[j])
				c[k++]=a[i++];
			else
				c[k++]=a[j++];
	}
	if(i>mid)
		while(j<=high)
			c[k++]=a[j++];
	if(j>high)
		while(i<=mid)
			c[k++]=a[i++];
	for(int i=0;i<high-low+1;i++)
		a[i+low]=c[i];
}
void split(int a[],int low,int high)
{
	if(low<high)
	{
	int mid=(low+high)/2;
	split(a,low,mid);
	split(a,mid+1,high);
	combine(a,low,mid,high);
	}
}
int main()
{
	int n;
	cout<<"Enter the no of element : ";
	cin>>n;
	int a[n]; 
	cout<<"\nEnter the elements of the array\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<endl;
	cout<<"---------Sorted array---------------\n";
	split(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}