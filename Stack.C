#include<stdio.h>
#include <stdlib.h>
#include"Stack.h"
int main()
{		
	int choice;
	printf ("STACK OPERATION\n");
	printf("Enter no of items to be insert :");
	scanf("%d",&n);
	a=(int *) malloc(sizeof(int)*n);
	do
	{
		printf ("\n------------------------\n");
		printf ("|	1.PUSH		|\n");
		printf ("|	2.POP		|\n");
		printf ("|	3.DISPLAY	|\n");
		printf ("|	4.Search	|\n");
		printf ("|	5.Exit		|\n");
		printf ("------------------------\n");
		printf ("Enter your choice\n");
		scanf  ("%d", &choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
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

