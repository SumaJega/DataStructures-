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
	printf("Depth First Search\n");
	depth_first_search(adj,visited,0);
	return 0;
}
void depth_first_search(int adj[][MAX],int visited[],int start)
{
	int stack[MAX];
	int top = -1, i,p;
	printf("\n%c",start + 65);
	for(p=0;p<=MAX;p++)
	visited[p]=0;
	visited[start] = 1;
	stack[++top] = start;
	while(top !=-1)
	{
		start = stack[top];
		for(i = 0; i < MAX; i++)
		{
			if(adj[start][i] && visited[i] == 0)
			{
				stack[++top] = i;
				printf("\t%c", i + 65);
				visited[i] = 1;
				break;
			}
		}
		if(i == MAX)
			top--;
	}
}

