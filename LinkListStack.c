#include<stdio.h>
#include <stdlib.h>
#include"LinkListStack.h"
int main()
{		
	int choice,x,deletedItem;
	printf ("STACK OPERATION\n");
	do
	{
		printf ("\n------------------------\n");
		printf ("|	1.PUSH		|\n");
		printf ("|	2.POP		|\n");
		printf ("|	3.DISPLAY	|\n");
		printf ("|	4.Exit		|\n");
		printf ("------------------------\n");
		printf ("Enter your choice\n");
		scanf  ("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter Item to be insert :");
				scanf("%d",&x);	
				push(x);
				break;
			case 2:
				deletedItem=pop();
				printf("Deleted Item :%d",deletedItem);
				break;
			case 3:
				displayStack();
				break;			
			default:
				printf("Exit\n");
		}
	}while(choice<=3);
	return 0;
}

