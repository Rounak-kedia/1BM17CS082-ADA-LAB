#include<iostream>
using namespace std;
int max(int a, int b) { return (a > b)? a : b; }  
int wt[10],v[10];
int W,n;
int knapSack() 
{ 
  int V[n+1][W+1]; 
  for (int i = 0; i <= n; i++) 
  { 
    for (int w = 0; w <= W; w++) 
    { 
      if (i==0||w==0) 
        V[i][w] = 0; 
      else if (wt[i-1]<=w) 
        V[i][w]=max(v[i-1]+V[i-1][w-wt[i-1]],V[i-1][w]); 
      else
        V[i][w]=V[i-1][w]; 
    } 
  } 
  return V[n][W]; 
} 
int main() 
{
    cout<<"Enter the no of items : ";
    cin>>n;
    cout<<"Enter the weight of items : \n";
    for(int i=0;i<n;i++)
      cin>>wt[i];
    cout<<"Enter the value of items : \n";
    for(int i=0;i<n;i++)
      cin>>v[i];
    cout<<"Enter the capacity of the knapsack : ";
    cin>>W;
    cout<<"\n\nMax value : "<<knapSack()<<endl; 
    return 0; 
} 