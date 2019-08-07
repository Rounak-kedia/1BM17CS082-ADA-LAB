#include<iostream>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin); //takes input from file and directly
	//sends it the input buffer(stdin)
	int nt,n,k,t;
	cin>>nt;
	while(nt--)
	{
		int flag=0;
		cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t==k)
		flag=1;
	}
	if(flag==1)
		cout<<"1\n";
	else
		cout<<"-1\n";
	}
	return 0;
}


