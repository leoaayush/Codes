#include<stdio.h>
void dfs(int v,int state[],int adj[][10],int n)
{
	int k;
	printf("%d " ,v);
	state[v]=1;
	for(k=1;k<=n;k++)
	{
			if(adj[v][k]==1 && state[k]==0)
			{
				dfs(k,state,adj,n);
			}
	}
	state[v]=2;
}
int main()
{
	int n;
	printf("Enter the number of nodes");
	scanf("%d",&n);
	int adj[n][n];
	int i,x,j;
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n;j++)
		{
		scanf("%d",&x);
		adj[i][j]=x;
	}}
	int state[n];
	for(i=1;i<=n;i++)
		state[i]=0;
	dfs(1,state,adj,n);
	return 0;
}
