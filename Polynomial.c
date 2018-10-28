#include<stdio.h>
#include<malloc.h>
#include"Polynomial.h"
int main()
{
	int ch;	
	do
	{	
		printf("\nPOLYNOMIAL MANIPULATION\n");
		printf("\n*****Menu*****");
		printf("\n1.Enter the first Polynomials");
		printf("\n2.Enter the second Polynomials");
		printf("\n3.Add Polynomials");
		printf("\n4.Subtract the polynomials");
		printf("\n5.Exit");
		printf("\n\n Enter your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:start1=create_poly(start1);
				start1=display_poly(start1);
					break;
			case 2:start2=create_poly(start2);
			       	start2=display_poly(start2);
					break;
			case 3:start3=add_poly(start1,start2,start3);
				start3=display_poly(start3);
					break;
			case 4:start4=sub_poly(start1,start2,start4);
				start4=display_poly(start4);
					break;
			case 5:printf("Eixt");
					break;
		}
	}while(ch<5);
	return 0;
}

