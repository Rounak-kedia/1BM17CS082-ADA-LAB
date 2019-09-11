#include<iostream>
#include<queue>
using namespace std;
const int n=4;
int adjacent[n][n]={0};
int visited[n]={0};
queue <int> q;
void bfs(int v)
{
	cout<<v+1;
	visited[v]=1;
	q.push(v);
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int i=0;i<n;i++)
				if(adjacent[curr][i]&&!visited[i])
				{
					q.push(i);
					visited[i]=1;
					cout<<i+1;
				}
	}
}
int main()
{
	int v;
	cout<<"Enter the adjancency matrix : (n=4)\n";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>adjacent[i][j];
	cout<<"\nEnter the source vertex : ";
	cin>>v;
	bfs(v-1);
	cout<<endl;
	return 0;
}