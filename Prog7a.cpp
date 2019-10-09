#include<iostream>
#include<cstring>
using namespace std;
int max(int a, int b) { return (a > b)? a : b; }  
void lcs(string a,string b)
{
	int m=a.length(),n=b.length();
	int l[m+1][n+1];
	int i,j;
	for(i=0;i<=m;i++)
		for(j=0;j<=n;j++)
		{
			if(i==0||j==0)
				l[i][j]=0;
			else if(a[i-1]==b[j-1])
				l[i][j]=l[i-1][j-1]+1;
			else
				l[i][j]=max(l[i-1][j],l[i][j-1]);
		}
	int index = l[m][n];
	char s[index+1];
	s[index] ='\0';
	i=m;j=n;
	while (i>0 && j>0)
	{
		if (a[i-1]==b[j-1])
		{
			s[index-1] = a[i-1];
			i--; j--; index--;
		}
		else if (l[i-1][j]>l[i][j-1])
			i--;
		else
			j--;
	}
	cout<<"\nThe longest substring is : ";
	i=0;
	while(s[i]!='\0')
		cout<<s[i++];
}
int main()
{
	string s1,s2;
	cout<<"Enter the first string : ";
	cin>>s1;
	cout<<"\nEnter the second string : ";
	cin>>s2;
	lcs(s1,s2);
	return 0;
}