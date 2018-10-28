#include<stdio.h>
#define MAX 10
int adj[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array adj[10][10]
int main()
{
	int i,j;
	printf("Enter number of vertices:");
	scanf("%d",&n);
	//read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    scanf("%d",&adj[i][j]);
		}
	}
	//visited is initialized to zero
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
	printf("Breadth First Search\n");
	breadth_first_search(adj,visited,0);
	return 0;
}
void breadth_first_search(int adj[][MAX],int visited[],int start)
{
	int p,queue[MAX],rear = -1,front =-1, i;
	queue[++rear] = start;
	for(p=0;p<=MAX;p++)
		visited[p]=0;
	visited[start] = 1;
	printf("\n");
	while(rear != front)
	{
		start = queue[++front];
		if(start == MAX)
		{
			printf("\t");
		}
		else
		{
			printf("%c\t",start + 65);
		}
		for(i = 0; i < MAX; i++)
		{
			if(adj[start][i] == 1 && visited[i] == 0)
			{
				queue[++rear] = i;
				visited[i] = 1;
			}
		}
	}
}
