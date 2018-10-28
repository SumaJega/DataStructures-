#include <stdio.h>
#include "arr.h"
int main()
{
    	int List[MAXSIZE];//List array
   	 char c1[3]="yes";
	int choice1,choice2,choice3,x,p,e,element;
	do
	{
		printf("\nArray implementation of List\n");
		printf("\n----------------------------------------");
		printf("\n Operations");
		printf("\n********************");
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Search");
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
				case 1:	printf("\nInsert at First\n");
					    insertToFOL(List);
					printList(List);
					printf("------------------------------------------------------------\n");
					break;
				
				case 2:printf("\nInsert at Last\n");
					    insertToEOL(List);
					printList(List);
					printf("------------------------------------------------------------\n");
					break;
				
				case 3:printf("\nInsert at Position");
					insertToNthPos(List);
					printList(List);
					printf("------------------------------------------------------------\n");
					break;
				
				case 4:printf("\nInsert at before an element");
					printf("\nEnter an element:");
					scanf("%d",&x);
					printf("\nEnter an before element:");
					scanf("%d",&e);
					insertBefore(x,e,List);
					printList(List);
					printf("------------------------------------------------------------\n");
					break;
				case 5:	printf("\nInsert at after an element");
					printf("\nEnter an element:");
					scanf("%d",&x);
					printf("\nEnter an after element:");
					scanf("%d",&e);
					insertAfter(x,e,List);
					printList(List);
					printf("------------------------------------------------------------\n");
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
					printf("\n4.Delete a ,element");
					printf("\n5.Exit");
					printf("\nEnter your Choice:");
					scanf("%d",&choice3);
					switch(choice3)
					{
					case 1:	printf("\nDelete at First");
						 deleteFromFOL(List);
						printList(List);
            					 printf("------------------------------------------------------------\n");
           					 break;
					case 2:	printf("\nDelete at Last");
						deleteFromEOL(List);
						printList(List);
						printf("------------------------------------------------------------\n");
					 	break;
						break;
					case 3:printf("\nDelete at Position");
						deleteFromNthPos(List);
						printList(List);
					       printf("------------------------------------------------------------\n");
				              break;
					case 4:printf("\nDelete A element");
						printf("Enter the element to be deleted\n");
						scanf("%d", &e);
						deleteAnElement(e,List);
						printList(List);
						 printf("------------------------------------------------------------\n");
		 				 break;
					default:printf("Exit");
					}
				}while(choice3<5);
				break;
			case 3:
				 printf("Enter the Element to search\n");
    				 scanf("%d",&element);//Get the element to search
				searchInList(element,List);
			     	printf("------------------------------------------------------------\n");
			    	break;
			default:
			     	 printf("===============================================================\n");
				  printf("\t\nYou are not entered the right choice\n");
				  printf("===============================================================\n");
			}
		printf("\nDo you want Continue(y/n):");
		scanf("%s",c1);
	}while(strcmp(c1,"y")==0);
 }
