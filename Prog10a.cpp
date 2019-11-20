#include <bits/stdc++.h>
using namespace std;
int cost[10][10];
int n;
void djikstra(int src)
{
	int dist[n],vis[n],min,u,count;
	for(int j = 1; j<n; j++) 
		dist[j]=cost[src][j];
	for(int j = 0; j<n; j++) 
		vis[j]=0;
	dist[src]=0;
	vis[src]=1;
	count=1;
	w+hile(count!=n)
	{
		min=INT_MAX;
		for(int j=0;j<n;j++)
		{
			if(dist[j]<min && !vis[j])
			{
				min=dist[j];
				u=j;
			}
		}
		vis[u]=1;
		count++;
		for(int j=0;j<n;j++)
			if(min + cost[u][j]<dist[j] && !vis[j])
				dist[j] = min+cost[u][j];
	}
	cout<<"Shortest Distance :\n";
	for(int j=0;j<n;j++)
		if(j!=src)
			cout<<src<<" - "<<j<<" -> "<<dist[j]<<endl;
}
int main()
{
	int src;
	cout<<"Enter the number of nodes : ";
	cin>>n;
	cout<<"Enter the cost matrix : \n";
	for(int i=0; i<n;i++)
		for(int j=0; j<n; j++)
			cin>>cost[i][j];
	cout<<"Enter the source vertex : ";
	cin>>src;
	djikstra(src);
	return 0;
}