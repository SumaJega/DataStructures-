#include<stdio.h>
#include <stdlib.h>
#include"Queue.h"
int main()
{		
	int choice;
	printf ("QUEUE OPERATION\n");
	printf("Enter no of items to be insert :");
	scanf("%d",&n);
	a=(int *) malloc(sizeof(int)*n);
	do
	{
		printf ("\n------------------------\n");
		printf ("|	1.Insert	|\n");
		printf ("|	2.Delete	|\n");
		printf ("|	3.DISPLAY	|\n");
		printf ("|	4.Search	|\n");
		printf ("|	5.Exit		|\n");
		printf ("------------------------\n");
		printf ("Enter your choice\n");
		scanf  ("%d", &choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				deletee();
				break;
			case 3:
				display();
				break;
			case 4:
				search();
				break;
			
			default:
				printf("Exit\n");
		}
	}while(choice<=4);
	return 0;
}

