#include<iostream>
using namespace std;
int D[10][10];
int min(int a,int b)
{	return (a<b)?a:b;	}
void floyd(int n)
{
	for(int k=0;k<n;k++)
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				D[i][j]=min(D[i][k]+D[k][j],D[i][j]);
}
int main()
{
	int n;
	cout<<"Enter the no of vertices : ";
	cin>>n;
	cout<<"Enter the weighted matrix (enter 99 for infinity) : \n";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>D[i][j];
	floyd(n);
	cout<<"\nThe matrix is : \n\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<D[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}