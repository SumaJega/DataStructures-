#include<stdio.h>
#include<malloc.h>
#include "LinkList.h"
int y,count=0;

void main()
{
	char c1[3]="yes";
	int choice1,choice2,choice3,x,p,e;
	do
	{
		printf("\nWelcome to Singly Linked List ADT\n");
		printf("\n----------------------------------------");
		printf("\nLink List Operations");
		printf("\n********************");
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\n********************");
		printf("\nEnter your Choice:");
		scanf("%d",&choice1);
		switch(choice1)
		{
			case 1:
				do
				{
				printf("\nInsert Operations");
				printf("\n******************");
				printf("\n1.Insert at First");
				printf("\n2.Insert at Last");
				printf("\n3.Insert at Position");
				printf("\n4.Insert Before an Element");
				printf("\n5.Insert After an element");
                		printf("\n6.Exit");
				printf("\nEnter your Choice:");
				scanf("%d",&choice2);
				switch(choice2)
				{
				case 1:	printf("\nInsert at First");
					printf("\nEnter an element:");
					scanf("%d",&x);
					insert_at_first(x);
					display();
					break;
				case 2:printf("\nInsert at Last");
					printf("\nEnter an element:");
					scanf("%d",&x);
					insert_at_last(x);
					display();
					break;
				case 3:printf("\nInsert at Position");
					printf("\nEnter an element:");
					scanf("%d",&x);
					printf("\nEnter the position:");
					scanf("%d",&p);
					insert_at_position(x,p);
					display();
					break;
				case 4:printf("\nInsert at before an element");
					printf("\nEnter an element:");
					scanf("%d",&x);
					printf("\nEnter an before element:");
					scanf("%d",&e);
					insert_before_element(x,e);
					display();
					break;
				case 5:	printf("\nInsert at after an element");
					printf("\nEnter an element:");
					scanf("%d",&x);
					printf("\nEnter an after element:");
					scanf("%d",&e);
					insert_after_element(x,e);
					display();
					break;
				}
				}while(choice2<6);
				break;
			case 2:
				do
				{
					printf("\n1.Delete at First");
					printf("\n2.Delete at Last");
					printf("\n3.Delete at Position");
					printf("\n4.Delete an Element");
                   		        printf("\n5.Exit");
					printf("\nEnter your Choice:");
					scanf("%d",&choice3);
					switch(choice3)
					{
					case 1:	printf("\nDelete at First");
						y=delete_at_first();
						printf("\nDeleted Element:%d",y);
						display();
						break;
					case 2:	printf("\nDelete at Last");
						y=delete_at_last();
						printf("\nDeleted Element:%d",y);
						display();
						break;
					case 3:printf("\nDelete at Position");
						printf("\nEnter the position:");
						scanf("%d",&p);
						y=delete_at_position(p);
						printf("\nDeleted Element:%d",y);
						display();
						break;
					case 4:	printf("\nDelete element");
						printf("\nEnter an element:");
						scanf("%d",&x);
						y=delete_element(x);
						printf("\nnDeleted Element:%d",y);
						display();
						break;
					}
				}while(choice3<5);
				break;
			case 3:
				display();
				break;
			default:
				printf("\nYour Choice is wrong\n");
			}
		printf("\nDo you want Continue(y/n):");
		scanf("%s",c1);
	}while(strcmp(c1,"y")==0);
}
