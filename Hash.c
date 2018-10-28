#include<stdio.h>
#include<stdlib.h>
# define size 10
struct node
{
	int data;
	struct node*next;
};
struct node*chain[size];
void insert(int value)
{
	struct node*node1=malloc(sizeof(struct node));
	node1->data=value;
	node1->next=NULL;
	int key=value%size;
	if(chain[key]==NULL)
	{
		chain[key]=node1;
	}
	else
	{
		struct node*temp=chain[key];
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=node1; 
	}
	
}
void delete(int value)
{
	int key=value%size;
	struct node  *trav= chain[key];
	if(chain[key]==NULL)
		printf("Empty Hash chain !!!\n");
	else if(trav->data == value)
    	{
		chain[key]= chain[key]->next;
    	}
    	else
    	{
    		while(trav!= NULL)
    		{
        	    struct node *temp=chain[key];
        		if(trav->data == value)
        		{
				temp->next=trav->next;
	        		break;
	        	}
	        	else
	        	{
				temp = trav;
	        	    trav = trav->next;
	        	}
	    	}
	}
    
}
void display()
{
	int i;
	for(i=0;i<size;i++)
	{
		struct node*temp=chain[i];
		printf("chain[%d]-->",i);
		while(temp)
		{
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}
void search(int value)
{
	int key=value%size,flag=0;
	struct node  *trav= chain[key];
	if(chain[key]==NULL)
		printf("Empty Table !!!\n");
	else
    {
    while(trav!= NULL)
    {
            struct node *temp=chain[key];
        if(trav->data == value)
        {
		 flag=1;
		break;
        }
        trav = trav->next;
    }
    if(flag==0)
    	printf("Element Not found !!!!\n");
    else
		printf("%d is in the chain[%d]\n",value,key);
    	
	}
}


int main()
{
	int n,i,num,choice;
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Search\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				printf("Enter the number of elements to be inserted:");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					printf("Enter the element:");
					scanf("%d",&num);
					insert(num);
				}
				break;
			case 2:
				printf("\nEnter the element to be deleted:");
				scanf("%d",&num);
				delete(num);
				display();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nEnter the element to be searched:");
				scanf("%d",&num);
				search(num);
				break;
													
		}
	}while(choice<=4);
}
