#include<stdio.h>
int a[30][30];
int v,i,j,x,y,c,weight;
void display();
void undi_unwei();
void undi_wei();
void dir_unwei();
void dir_wei();
int main()
{
	int choice;
	
	printf("Enter the number of vertices:");
	scanf("%d",&v);
void init()
{
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			a[i][j]=0;
		}
	}
}
					
	do
	{
	printf("==============Adjacency Matrix==================\n");
	printf("1.UnDirected-Unweighted\n2.Undirected-weighted\n3.Directed-Unweighted\n4.Directed-weighted\n5.Exit");
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			init();
			undi_unwei();
			break;
		}
		case 2:
		{
			init();
			undi_wei();
			break;
		}
		case 3:
		{
			init();
			dir_unwei();
			break;
		}
		case 4:
		{
			init();
			dir_wei();
			break;
		}
	}
	}while(choice<=4);				
return 0;
}
void display()
{
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			printf("%d",a[i][j]);
			printf("    ");
		}
		printf("\n");
	}
}
void undi_unwei()
{	
do
{
	printf("\nEnter the connected vertices:");
	scanf("%d",&x);
	scanf("%d",&y);
	a[x-1][y-1]=1;
	a[y-1][x-1]=1;
	printf("\nTo Continue press '1':");
	scanf("%d",&c);
				
}while(c==1);
display();
}
void undi_wei()
{
	do
	{
		printf("\nEnter the connected vertices:");
		scanf("%d",&x);
		scanf("%d",&y);
		printf("\nEnter the Weight:");
		scanf("%d",&weight);
		a[x-1][y-1]=weight;
		a[y-1][x-1]=weight;							
		printf("\nTo Continue press '1':");
		scanf("%d",&c);
	}while(c==1);
	display();
			
}
void dir_unwei()
{
	do
	{
		printf("\nEnter the Source to Destination connected vertices(Directed Graph)");
		scanf("%d",&x);
		scanf("%d",&y);
		a[x-1][y-1]=1;
		printf("\nTo Continue press '1':");
		scanf("%d",&c);
	}while(c==1);
	display();
			
}
void dir_wei()
{
	do
	{
		printf("\nEnter the Source to Destination connected vertices(Directed Graph)");
		scanf("%d",&x);
		scanf("%d",&y);
		printf("Enter the weight:");
		scanf("%d",&weight);
		a[x-1][y-1]=weight;
		display();
		printf("\nTo Continue press '1':");
		scanf("%d",&c);
	}while(c==1);
}
