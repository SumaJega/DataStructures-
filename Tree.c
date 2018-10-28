#include<stdio.h>
#include<malloc.h>
#include"Tree.h"
int main()
{
	int item,deleteitem,choice;
	struct Node* temp = NULL;
	do
	{
		printf("\n1.Insert");
		printf("\n2.Inorder");
		printf("\n3.Preorder");
		printf("\n4.Postorder");
		printf("\n5.Delete");
		printf("\n6.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the data to insert:");
				scanf("%d",&item);
				temp = insert(temp,item);
				break;
			case 2:
				Inorder(temp);
				break;
			case 3:
				Preorder(temp);
				break;
			case 4:
				Postorder(temp);
				break;
			case 5:
				printf("\nEnter the data to delete:");
				scanf("%d",&deleteitem);
				temp=deletee(temp,deleteitem);
				break;
			default:
				printf("\nExit");
			}
	}while(choice<6);
}
