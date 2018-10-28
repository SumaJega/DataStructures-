#include<stdio.h>
int top=-1,i=0,n;
int *a,x;
void display()
{
	if(top==-1)
	{
		printf("Stack is Empty .\n");
		return;
	}
	else
	{	printf("Stack Elements:\n");
		for(i=top;i>=0;i--)
		{
			printf("\n|\t%d\t|",a[i]);
		}
	}
}
void push()
{
	if(top+1==n)
	{
		printf("\nSTACK is FULL CAN't ADD ITEM\n");
		return;
	}
	else
	{
		top=top+1;
		printf("Enter Item to be insert :");
		scanf("%d",&x);	
		a[top]=x;
	}
}
void pop()
{
	int deletedItem;
	if(top==-1)
	{
		printf("STACK is EMPTY.\n");
		return;
	}
	else
	{
		  deletedItem=a[top];
		  top=top-1;
    		  printf("%d deleted successfully\n",deletedItem);
	}
}
void search()
{
	int s,flag=0;
	printf("Enter the search element:");
	scanf("%d",&s);
	if(top==-1)
	{
		printf("Stack is Empty .\n");
		return;
	}
	else
	{
		for(i=0;i<=top;i++)
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

