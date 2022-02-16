#include <stdio.h>
void dfs(int);
int a[10][10],visited[10],n,vertex[10];
int main()
{
	 int i,j,v;
	 
	 printf("enter number of vertices:");
	 scanf("%d",&n);
	 printf("enter the vertices:");
	 for(i=1;i<=n;i++)
	 scanf("%d",&vertex[i]);
	 printf("\n enter adjecency matrix of the graph:");
	 for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
	 for(i=1;i<=n;i++)
	 	visited[i]=0;
	 printf("\n Enter the starting vertex:");
 	 scanf("%d",&v);
	 dfs(v);
}
void dfs(int i)
{
	 int j;
	 printf("%d",vertex[i]);
	 visited[i]=1;
	 for(j=1;j<=n;j++)
	  if(!visited[j]&&a[i][j]==1) // unvisted and adjacent
			dfs(j);
}
