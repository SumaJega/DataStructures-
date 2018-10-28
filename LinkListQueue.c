#include<stdio.h>
#include <stdlib.h>
#include"LinkListQueue.h"
int main()
{		
	int choice,x,deletedItem;
	printf ("Queue OPERATION\n");
	do
	{
		printf ("\n------------------------\n");
		printf ("|	1.Insert	|\n");
		printf ("|	2.Delete	|\n");
		printf ("|	3.Display	|\n");
		printf ("|	5.Exit		|\n");
		printf ("------------------------\n");
		printf ("Enter your choice\n");
		scanf  ("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter Item to be insert :");
				scanf("%d",&x);	
				insert(x);
				break;
			case 2:
				deletedItem=deletee();
				printf("Deleted Item :%d",deletedItem);
				break;
			case 3:
				displayQueue();
				break;	
			default:
				printf("Exit\n");
		}
	}while(choice<=3);
	return 0;
}

