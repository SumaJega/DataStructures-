#include<stdio.h>
#include<malloc.h>
int y;
struct node
{
	int data;
	struct node*next;
};
struct node*header=NULL;
void display()
{
	struct node*trav=header;
	if(trav==NULL)
	{
	printf("Empty List");
	}
	else
	{
		printf("\nLink List Elements\n");
		while(trav!=NULL)
		{
			printf("%d->\t",trav->data);
			trav=trav->next;
		}
	}
}
void insert_at_first(int x)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=header;
	header=temp;
}
void insert_at_last(int x)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	struct node*trav=header;
	if(header==NULL)
	{
		insert_at_first(x);
	}
	else
	{
		while(trav->next!=NULL)
		{
			trav=trav->next;
		}
		trav->next=temp;
	}
}
void insert_at_position(int x,int p)
{
	int i,count=1;
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	struct node *trav=header;
	if(p == 1)
	{
		insert_at_first(x);
	}
	else
	{
		while(count<(p-1) && trav->next!=NULL)
		{
			trav=trav->next;
			count++;
		}
		if(trav->next != NULL)
		{
		  	temp->data=x;
		    	temp->next = trav->next;
			trav->next=temp;
		    printf("\nData Inserted Successfully\n");
		}
		else
		{
		    printf("\nUnable To Insert Data At The Given Position\n");
		}
	}
}
void insert_before_element(int x,int e)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=header;
	struct node *trav=header;
	if(header==NULL)
	{
		printf("EMPTY LIST");
	}
	else if(trav->data == e)
		insert_at_first(x);
	else if(trav->data != e)
		printf("Element not found!Hence we cant Insert");
	else
	{
		while(((trav->next)->data)!=e)
		{
			trav=trav->next;
		}
		if(trav->next==NULL)
		{
			printf("Element not in the list");
		}
		else
		{
			temp->next=trav->next;
			trav->next=temp;
		}
	}
}
void insert_after_element(int x,int a)
{

	struct node*trav=header;
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	while(trav->data!=a)
	{
		trav=trav->next;

	}
	temp->data=x;
	temp->next=NULL;
	temp->next=trav->next;
	trav->next=temp;
}
int delete_at_first()
{
	if(header==NULL)
	{
		printf("Empty List");
		return(-9999);
	}
	else
	{
		y=header->data;
		header=header->next;
		return y;
	}
}
int delete_at_last()
{
	struct node*trav=header;
	if(header==NULL)
	{
		printf("\nEmpty List");
		return(-9999);
	}
	else if(header->next==NULL)
	{
		y=header->data;
		header=NULL;
		return y;
	}
	else
	{
		trav=header;
		while(trav->next->next!=NULL)
		{
			trav=trav->next;
		}
		y=trav->next->data;
		trav->next=NULL;
		return y;
	}
}
int delete_at_position(int p)
{
	int i;
	struct node *trav;
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	if(header == NULL)
	{
		printf("\nList is already empty.");
	}
	else
	{
		temp = header;
		trav = header;

		for(i=2; i<=p; i++)
		{
		    trav = temp;
		    temp = temp->next;

		    if(temp == NULL)
			break;
		}
		if(temp != NULL)
		{
		    if(temp == header)
		    {
			header = header->next;
		    }
		    trav->next = temp->next;
		    temp->next = NULL;
		    y=temp->data;
		    printf("\nThe Given Node Position  Is Successfully Deleted  From  Of List\n");
		    return y;
		}
		else
		{
		    printf("\nInvalid position unable to delete.");
		}
	}
}

int delete_element(int x)
{
    struct node  *trav= header;
    struct node*temp;
    if(header == NULL)
    {
	printf("\nList is empty\n");
    }
    else if(trav->data == x)
    {
	temp = header;
	header= header->next;
	y=temp->data;
	return y;
    }
    else
    {
    while(trav!= NULL)
    {
        if(trav->data == x)
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
     return y;
}

