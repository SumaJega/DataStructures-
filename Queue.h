#include<stdio.h>
int rear=-1,front=-1,i=0,n;
int *a,x;
void display()
{
	if(front==rear)
	{
		printf("Queue is Empty .\n");
		return;
	}
	else
	{	printf("Queue Elements:\n");
		for(i=front+1;i<=rear;i++)
		{
			printf("\n|\t%d\t|",a[i]);
		}
	}
}
void insert()
{
	if(rear==(n-1))
	{
		printf("Queue is FULL CAN't ADD ITEM\n");
		return;
	}
	else
	{
		rear=rear+1;
		printf("Enter Item to be insert :");
		scanf("%d",&x);	
		a[rear]=x;
	}
}
void deletee()
{
	int deletedItem;
	if(front==rear)
	{
		printf("Queue is EMPTY.\n");
		return;
	}
	else
	{  front=front+1;
		  deletedItem=a[front];
		
    		  printf("%d deleted successfully\n",deletedItem);
	}
}
void search()
{
	int s,flag=0;
	printf("Enter the search element:");
	scanf("%d",&s);
	if(front==rear)
	{
		printf("Queue is Empty .\n");
		return;
	}
	else
	{
		for(i=front+1;i<=rear;i++)
		{
			if(a[i]==s)
			flag=1;
		}
		if (flag==1)
			printf("\nSearch element %d is Found\n",s);
		else
			printf("\nSearch element %d is Not Found\n",s);
	}
}

