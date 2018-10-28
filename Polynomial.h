#include<stdio.h>
#include<malloc.h>
struct node
{
	int coeff;
	int pow;
	struct node *next;
};
struct node *start1=NULL;
struct node *start2=NULL;
struct node *start3=NULL;
struct node *start4=NULL;
struct node *last3=NULL;
struct node *create_poly(struct node *);
struct node *display_poly(struct node *);
struct node *add_poly(struct node *,struct node *,struct node *);
struct node *sub_poly(struct node *,struct node *,struct node *);
struct node *add_node(struct node *,int,int);


struct node *create_poly(struct node *start)
{
	struct node * new_node,* ptr;
	int n,c;
	printf("\nEnter the number:");
	scanf("%d",&n);
	printf("\nEnter its coefficient");
	scanf("%d",&c);
	if(start==NULL)
	{
		new_node=(struct node *)malloc (sizeof(struct node));
		new_node->coeff=n;
		new_node->pow=c;
		new_node->next=NULL;
		start=new_node;
	}
	else
	{
		ptr=start;
		while(ptr->next !=NULL)
			ptr=ptr->next;
		new_node=(struct node *)malloc (sizeof(struct node));
		new_node->coeff=n;
		new_node->pow=c;
		new_node->next=NULL;
		ptr->next=new_node;
	}
	return start;
}
struct node *display_poly(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("\n%d ^ %d\t",ptr->coeff,ptr->pow);
		ptr=ptr->next;
	}
	return start;
}
struct node *add_poly(struct node *start1,struct node *start2,struct node *start3)
{
	struct node *ptr1,*ptr2;
	int sum_coeff,c;
	ptr1=start1,ptr2=start2;
	while(ptr1!=NULL &&ptr2!=NULL)
	{
		if(ptr1->pow == ptr2->pow)
		{
			sum_coeff=ptr1->coeff + ptr2->coeff;
			start3=add_node(start3,sum_coeff,ptr1->pow);
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->pow > ptr2->pow)
		{
			start3=add_node(start3,ptr1->coeff,ptr1->pow);
			ptr1=ptr1->next;
		}
		else if(ptr1->pow < ptr2->pow)
		{
			start3=add_node(start3,ptr2->coeff,ptr2->pow);
			ptr2=ptr2->next;
		}
	}
	if(ptr1==NULL)
	{
		while(ptr2!=NULL)
		{
			start3=add_node(start3,ptr2->coeff,ptr2->pow);
			ptr2=ptr2->next;
		}
	}
	if(ptr2==NULL)
	{
		while(ptr1!=NULL)
		{
			start3=add_node(start3,ptr1->coeff,ptr1->pow);
			ptr1=ptr1->next;
		}
	}
	return start3;
}

struct node *sub_poly(struct node *start1,struct node *start2,struct node *start4)
{
	struct node *ptr1,*ptr2;
	int sub_coeff,c;
	ptr1=start1,ptr2=start2;
	do
	{
		if(ptr1->pow == ptr2->pow)
		{
			sub_coeff=ptr1->coeff - ptr2->coeff;
			start4=add_node(start4,sub_coeff,ptr1->pow);
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->pow > ptr2->pow)
		{
			start4=add_node(start4,ptr1->coeff,ptr1->pow);
			ptr1=ptr1->next;
		}
		else if(ptr1->pow < ptr2->pow)
		{
			start4=add_node(start4,ptr2->coeff,ptr2->pow);
			ptr2=ptr2->next;
		}
	}while(ptr1 !=NULL || ptr2!=NULL);
	if(ptr1==NULL)
	{
		while(ptr2!=NULL)
		{
			start4=add_node(start4,ptr2->coeff,ptr2->pow);
			ptr2=ptr2->next;
		}
	}
	if(ptr2==NULL)
	{
		while(ptr1!=NULL)
		{
			start4=add_node(start4,ptr1->coeff,ptr1->pow);
			ptr1=ptr1->next;
		}
	}
	return start4;
}
struct node *add_node(struct node *start,int n,int c )
{
	struct node *ptr,*new_node;
	if(start==NULL)
	{
		new_node=(struct node *)malloc (sizeof(struct node));
		new_node->coeff=n;
		new_node->pow=c;
		new_node->next=NULL;
		start=new_node;
	}
	else
	{
		ptr=start;
		while(ptr->next !=NULL)
			ptr=ptr->next;
		new_node=(struct node *)malloc (sizeof(struct node));
		new_node->coeff=n;
		new_node->pow=c;
		new_node->next=NULL;
		ptr->next=new_node;
	}
	return start;
}

