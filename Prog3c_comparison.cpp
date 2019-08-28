#include<iostream>
using namespace std;
int ms=0,ss=0,bs=0;
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)       
    for (j = 0; j < n-i-1; j++)  
    {	bs++;   
        if (arr[j] > arr[j+1])  
            swap(arr[j],arr[j+1]);  
    }
} 
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
      for (i = 0; i < n-1; i++)  
    { 
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        {	ss++;
        	if (arr[j] < arr[min_idx])  
            min_idx = j; 
         } 
        swap(arr[min_idx],arr[i]);  
    }  
}   
void combine(int a[],int low,int mid,int high)
{
	int i=low,j=mid+1,k=0;
	int c[high-low+1];
	while(i<=mid && j<=high)
	{
			ms++;
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
	int a[n],b[n],c[n]; 
	cout<<"\nEnter the elements of the array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
		c[i]=a[i];
	}
	cout<<endl;
	split(a,0,n-1);
	selectionSort(b,n);
	bubbleSort(c,n);
	cout<<"\n"<<ms<<" "<<ss<<" "<<bs<<endl;
	return 0;
}
