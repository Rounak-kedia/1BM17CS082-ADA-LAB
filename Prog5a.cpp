#include<iostream>
using namespace std;
const int n=9;
const int gs=3;
int grid[n][n]={0};
bool FindLoc(int &r,int &c)
{
	for(r=0;r<n;r++)
		for(c=0;c<n;c++)
			if(grid[r][c]==0)
				return true;
	return false;
}
bool issafe(int r,int c,int num)
{
	//Used in row
	for(int i=0;i<n;i++)
		if(grid[r][i]==num)
			return false;
	//Used in Col
	for(int i=0;i<n;i++)
		if(grid[i][c]==num)
			return false;
	//Used in Grid
	int bsr = r-(r%gs);
	int bsc = c-(c%gs);
	for(int r=0;r<gs;r++)
		for(int c=0;c<gs;c++)
			if(grid[r+bsr][c+bsc]==num)
				return false;
	return true;
}
bool solve()
{
	int row=0,col=0;
	if(!FindLoc(row,col))
		return true;
	for(int num=1;num<=n;num++)
	{
		if(issafe(row,col,num))
		{
			grid[row][col]=num;
			if(solve())
				return true;
			grid[row][col]=0;
		}
	}
	return false;
}
int main()
{
	cout<<"Enter the grid : (n=9)\n";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>grid[i][j];
	if(solve())
		for(int i=0;i<n;i++)
		{
			cout<<endl;
			for(int j=0;j<n;j++)
				cout<<grid[i][j]<<" ";
		}
	else
		cout<<"\nNo Solution Posssible\n";
	return 0;
}