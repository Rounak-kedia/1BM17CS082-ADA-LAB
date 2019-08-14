#include <stdio.h>
#include<iostream>
using namespace std;
int b_sqrt(int n)
{
	int end=n;
	int beg=0;
	int sqrt=0;
	while(beg<=end)
	{
		int mid=(beg+end)/2;
		if(mid*mid==n)
		{
			return mid;
		}
		else if(mid*mid<n)
		{
			beg=mid+1;
			sqrt =mid;
		}
		else{
			end =mid-1;
		}
	}
	return sqrt;
}
int main(int argc, char **argv)
{
	cout<<"Enter the number : ";
	int n;
	cin>>n;
	cout<<"Square root of the given number is  : "<<b_sqrt(n)<<endl;
}

